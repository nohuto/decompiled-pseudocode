/*
 * XREFs of sub_18007CE10 @ 0x18007CE10
 * Callers:
 *     sub_18007CB4C @ 0x18007CB4C (sub_18007CB4C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18007D4C4 @ 0x18007D4C4 (sub_18007D4C4.c)
 */

char *__fastcall sub_18007CE10(__int64 *a1, __int64 *a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *result; // rax
  __int64 v7; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 *v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rbx
  signed __int64 v17; // rsi
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (char *)&retaddr;
  v7 = a5;
  if ( a4 < a5 )
  {
    v12 = 2 * a4;
    do
    {
      v13 = v7 - a4;
      v14 = &a1[v12];
      v15 = a4;
      if ( v13 < a4 )
        v15 = v13;
      v7 = v13 - v15;
      v16 = &v14[2 * v15];
      result = (char *)sub_18007D4C4((_DWORD)a1, (_DWORD)v14, (_DWORD)v16, (_DWORD)a3, a6);
      a3 = result;
      a1 = v16;
    }
    while ( a4 < v7 );
  }
  if ( a1 != a2 )
  {
    v17 = a3 - (char *)a1;
    do
    {
      result = (char *)std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)a1 + v17), a1);
      a1 += 2;
    }
    while ( a1 != a2 );
  }
  return result;
}
