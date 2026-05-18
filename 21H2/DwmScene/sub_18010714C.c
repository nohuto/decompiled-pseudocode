/*
 * XREFs of sub_18010714C @ 0x18010714C
 * Callers:
 *     sub_180106544 @ 0x180106544 (sub_180106544.c)
 * Callees:
 *     sub_180107240 @ 0x180107240 (sub_180107240.c)
 */

__int64 __fastcall sub_18010714C(_OWORD *a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  _OWORD *v12; // rdx
  __int64 v13; // rdi
  _OWORD *v14; // rdi
  int v15; // [rsp+20h] [rbp-38h]

  v6 = a5;
  result = a3;
  if ( a4 < a5 )
  {
    v10 = a4;
    do
    {
      v11 = v6 - a4;
      LOBYTE(v15) = a6;
      v12 = &a1[v10];
      v13 = a4;
      if ( v11 < a4 )
        v13 = v11;
      v6 = v11 - v13;
      v14 = &v12[v13];
      result = sub_180107240(a1, v12, v14, result, v15);
      a1 = v14;
    }
    while ( a4 < v6 );
  }
  if ( a1 != a2 )
  {
    result -= (__int64)a1;
    do
    {
      *(_OWORD *)((char *)a1 + result) = *a1;
      ++a1;
    }
    while ( a1 != a2 );
  }
  return result;
}
