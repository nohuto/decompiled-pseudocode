/*
 * XREFs of sub_18008241C @ 0x18008241C
 * Callers:
 *     sub_180082FB8 @ 0x180082FB8 (sub_180082FB8.c)
 * Callees:
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_1800826E0 @ 0x1800826E0 (sub_1800826E0.c)
 *     sub_180082BD8 @ 0x180082BD8 (sub_180082BD8.c)
 *     sub_180083098 @ 0x180083098 (sub_180083098.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008241C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rbp

  v7 = a2;
  v8 = a1;
  result = sub_180082BD8(a1, a2, a3, a5);
  if ( a3 > 32 )
  {
    sub_180083098(v8, v7, a4, 32, a3, a5);
    v10 = a4 + 16 * a3;
    result = sub_1800826E0(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_1800826E0(v8, v7, a4, i, a3, a5);
      v12 = 2 * i;
      result = sub_1800826E0(a4, (int)a4 + 16 * (int)a3, v8, v12, a3, a5);
    }
    while ( a4 != v10 )
    {
      result = unknown_libname_102(a4, 0);
      a4 += 16LL;
    }
  }
  return result;
}
