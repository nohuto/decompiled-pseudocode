/*
 * XREFs of sub_1800B9230 @ 0x1800B9230
 * Callers:
 *     sub_1800BCD8C @ 0x1800BCD8C (sub_1800BCD8C.c)
 * Callees:
 *     _o_powf @ 0x18011E076 (_o_powf.c)
 */

float __fastcall sub_1800B9230(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1 / 100.0;
  v2 = fabs(a1 / 100.0);
  o_powf();
  if ( v1 < 0.0 )
    v2 = v2 * -1.0;
  return v2 * 100.0;
}
