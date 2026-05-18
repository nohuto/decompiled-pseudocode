/*
 * XREFs of sub_1800FDDD0 @ 0x1800FDDD0
 * Callers:
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800FDDD0(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, -1.5533431);
  *(float *)(a1 + 1820) = fminf(v3, 1.5533431);
}
