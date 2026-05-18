/*
 * XREFs of sub_180105A60 @ 0x180105A60
 * Callers:
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180105A60(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, 0.0);
  *(float *)(a1 + 160) = fminf(v3, 1.0);
}
