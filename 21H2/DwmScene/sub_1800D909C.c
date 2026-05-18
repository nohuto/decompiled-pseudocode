/*
 * XREFs of sub_1800D909C @ 0x1800D909C
 * Callers:
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800D909C(__int64 a1, __int64 a2)
{
  double v2; // xmm0_8
  double v3; // xmm2_8
  double v4; // xmm1_8
  bool result; // al

  v2 = *(double *)(a1 + 32);
  result = 0;
  if ( v2 >= *(double *)(a2 + 32) )
  {
    v3 = *(double *)(a2 + 40);
    v4 = *(double *)(a1 + 40);
    if ( v3 >= v4 && (v4 != v2 || v4 != v3 && v2 != *(double *)(a2 + 32)) )
      return 1;
  }
  return result;
}
