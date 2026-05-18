/*
 * XREFs of sub_180123240 @ 0x180123240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123078 @ 0x180123078 (sub_180123078.c)
 */

__m128 __fastcall sub_180123240(__int64 a1, double a2)
{
  __int128 v2; // xmm3
  __m128 result; // xmm0

  v2 = 0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 <= 0.0 )
      return result;
    *(double *)&v2 = 1.0 - sub_180123078(1.0 - a2);
  }
  return (__m128)v2;
}
