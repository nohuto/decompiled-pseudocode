/*
 * XREFs of sub_18006F4E4 @ 0x18006F4E4
 * Callers:
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18006FCB4 @ 0x18006FCB4 (sub_18006FCB4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006F4E4(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 i; // rbp

  for ( i = a2; i != a3; i += 8LL )
    sub_18006FCB4(a4, i);
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  sub_1800461B8(a4);
  return a1;
}
