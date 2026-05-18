/*
 * XREFs of sub_1800F8500 @ 0x1800F8500
 * Callers:
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800F8500(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, -1.5533431);
  *(float *)(a1 + 1820) = fminf(v3, 1.5533431);
}
