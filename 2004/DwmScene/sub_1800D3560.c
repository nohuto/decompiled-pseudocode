/*
 * XREFs of sub_1800D3560 @ 0x1800D3560
 * Callers:
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D3560(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  v4 = 0LL;
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  sub_180012E34(a1, a2);
  v5 = v2[2];
  if ( (unsigned __int64)v2[3] >= 0x10 )
    v2 = (__int64 *)*v2;
  v6 = 0xCBF29CE484222325uLL;
  if ( v5 )
  {
    do
      v6 = 0x100000001B3LL * (*((unsigned __int8 *)v2 + v4++) ^ (unsigned __int64)v6);
    while ( v4 < v5 );
  }
  a1[4] = v6;
  return a1;
}
