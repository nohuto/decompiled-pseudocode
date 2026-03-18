/*
 * XREFs of sub_1C004B750 @ 0x1C004B750
 * Callers:
 *     sub_1C004B580 @ 0x1C004B580 (sub_1C004B580.c)
 * Callees:
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C004B750(
        __m128 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __m128 **a4,
        unsigned __int64 *a5,
        __int16 a6)
{
  unsigned __int64 v7; // rdi
  __int16 *v9; // rax

  v7 = a2 >> 1;
  if ( a2 >> 1 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    a1->m128_i16[0] = 0;
  }
  if ( (a6 & 0x400) != 0 )
  {
    sub_1C001D340(a1, a6, a2);
    if ( (_BYTE)a6 )
    {
      if ( !v7 )
        return 0LL;
      *a5 = 1LL;
      v9 = &a1[-1].m128_i16[v7 + 7];
      *a4 = (__m128 *)v9;
      *v9 = 0;
    }
    else
    {
      *a4 = a1;
      *a5 = v7;
    }
  }
  if ( v7 && (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    a1->m128_i16[0] = 0;
  }
  return 0LL;
}
