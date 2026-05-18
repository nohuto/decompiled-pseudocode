/*
 * XREFs of sub_18011DA20 @ 0x18011DA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011D7A8 @ 0x18011D7A8 (sub_18011D7A8.c)
 */

double __fastcall sub_18011DA20(__int64 a1, double a2)
{
  double result; // xmm0_8

  result = 1.0;
  if ( a2 < 1.0 )
  {
    result = 0.0;
    if ( a2 > 0.0 )
      return sub_18011D7A8(a2);
  }
  return result;
}
