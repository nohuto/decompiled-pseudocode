/*
 * XREFs of sub_180123650 @ 0x180123650
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x180123940 (_o_pow.c)
 */

__m128 __fastcall sub_180123650(__int64 a1, double a2)
{
  __m128 result; // xmm0
  double v3; // xmm8_8

  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
    {
      v3 = 1.0 - o_pow();
      return (__m128)COERCE_UNSIGNED_INT64(v3 / (1.0 - o_pow()));
    }
  }
  else
  {
    return (__m128)0x3FF0000000000000uLL;
  }
  return result;
}
