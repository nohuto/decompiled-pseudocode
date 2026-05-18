/*
 * XREFs of sub_18011D920 @ 0x18011D920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall sub_18011D920(__int64 a1, double a2)
{
  double result; // xmm0_8

  if ( a2 >= 1.0 )
    return 1.0;
  result = 0.0;
  if ( a2 > 0.0 )
    return ((a2 + -1.0) * 2.70158 + 1.70158) * ((a2 + -1.0) * (a2 + -1.0)) + 1.0;
  return result;
}
