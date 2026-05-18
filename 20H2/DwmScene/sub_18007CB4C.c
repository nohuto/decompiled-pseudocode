/*
 * XREFs of sub_18007CB4C @ 0x18007CB4C
 * Callers:
 *     sub_18007D6E8 @ 0x18007D6E8 (sub_18007D6E8.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     sub_18007CE10 @ 0x18007CE10 (sub_18007CE10.c)
 *     sub_18007D308 @ 0x18007D308 (sub_18007D308.c)
 *     sub_18007D7C8 @ 0x18007D7C8 (sub_18007D7C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007CB4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rbp

  v7 = a2;
  v8 = a1;
  result = sub_18007D308(a1, a2, a3, a5);
  if ( a3 > 32 )
  {
    sub_18007D7C8(v8, v7, a4, 32, a3, a5);
    v10 = a4 + 16 * a3;
    result = sub_18007CE10(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_18007CE10(v8, v7, a4, i, a3, a5);
      v12 = 2 * i;
      result = sub_18007CE10(a4, (int)a4 + 16 * (int)a3, v8, v12, a3, a5);
    }
    while ( a4 != v10 )
    {
      result = unknown_libname_100(a4, 0);
      a4 += 16LL;
    }
  }
  return result;
}
