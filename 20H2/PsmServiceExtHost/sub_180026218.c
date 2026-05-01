/*
 * XREFs of sub_180026218 @ 0x180026218
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     memset @ 0x18004683A (memset.c)
 */

_QWORD *__fastcall sub_180026218(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  memset(a4, 0, 0x60uLL);
  a4[1] = a1;
  sub_18001E380();
  a4[6] = sub_180026040(a2);
  a4[7] = sub_180026040(a3);
  return sub_18000F390();
}
