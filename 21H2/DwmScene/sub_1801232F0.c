/*
 * XREFs of sub_1801232F0 @ 0x1801232F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123078 @ 0x180123078 (sub_180123078.c)
 */

double __fastcall sub_1801232F0(__int64 a1, double a2)
{
  double result; // xmm0_8

  result = 1.0;
  if ( a2 < 1.0 )
  {
    result = 0.0;
    if ( a2 > 0.0 )
      return sub_180123078(a2);
  }
  return result;
}
