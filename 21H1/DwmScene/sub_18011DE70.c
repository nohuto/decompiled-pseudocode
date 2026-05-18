/*
 * XREFs of sub_18011DE70 @ 0x18011DE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall sub_18011DE70(__int64 a1, double a2)
{
  double v2; // xmm2_8

  v2 = 0.0;
  if ( a2 >= 0.0 )
  {
    v2 = a2;
    if ( a2 > 1.0 )
      v2 = 1.0;
  }
  return 1.0 - (1.0 - v2) * (1.0 - v2);
}
