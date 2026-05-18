/*
 * XREFs of sub_1800BEB00 @ 0x1800BEB00
 * Callers:
 *     sub_1800C265C @ 0x1800C265C (sub_1800C265C.c)
 * Callees:
 *     _o_powf @ 0x180123946 (_o_powf.c)
 */

float __fastcall sub_1800BEB00(float a1)
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
