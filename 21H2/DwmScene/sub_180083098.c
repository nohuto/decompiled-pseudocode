/*
 * XREFs of sub_180083098 @ 0x180083098
 * Callers:
 *     sub_18008241C @ 0x18008241C (sub_18008241C.c)
 * Callees:
 *     sub_180083154 @ 0x180083154 (sub_180083154.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_180083098(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *result; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rdx
  __int64 v13; // rbx
  char *v14; // rbx
  signed __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (char *)&retaddr;
  v9 = a5;
  if ( a4 < a5 )
  {
    v10 = 2 * a4;
    do
    {
      v11 = v9 - a4;
      v12 = &a1[8 * v10];
      v13 = a4;
      if ( v11 < a4 )
        v13 = v11;
      v9 = v11 - v13;
      v14 = &v12[16 * v13];
      result = (char *)sub_180083154((_DWORD)a1, (_DWORD)v12, (_DWORD)v14, (_DWORD)a3, a6);
      a3 = result;
      a1 = v14;
    }
    while ( a4 < v9 );
  }
  if ( a1 != a2 )
  {
    v15 = a1 - a3;
    do
    {
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)&a3[v15];
      *((_QWORD *)a3 + 1) = *(_QWORD *)&a3[v15 + 8];
      *(_QWORD *)&a3[v15] = 0LL;
      *(_QWORD *)&a3[v15 + 8] = 0LL;
      a3 += 16;
      result = &a3[v15];
    }
    while ( &a3[v15] != a2 );
  }
  return result;
}
