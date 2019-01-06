/*
练习3.25

要求：利用迭代器实现划分分数段的程序

以下利用下标运算符实现：
vector<unsigned> scores(11, 0);
unsigned grade;
while (cin >> grade)
{
    if (grade <= 100)
        ++scores[grade / 10];
}

完成时间：2019.01.03
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> vInt(11);   //创建vector的对象，将成绩（0~100）划分为11个分数段
    unsigned ival;   //用来存放零时输入的数字
    auto it = vInt.begin();
    cout << "请输入一组成绩（0~100）：" << endl;

    while (cin >> ival)
        
        if (ival < 101)
            ++*(it + ival / 10);
    cout << "您总计输入了" << vInt.size() << "个成绩" << endl;

    //判断是否为空
    if (vInt.cbegin() == vInt.end())
    {
        cout << "输入为空，没有任何元素" << endl;
        return -1;
    }

    
    cout << "各分数段的人数分布分别为：" << endl;
    
    //利用迭代器遍历vInt的元素并逐个输出

    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;

}