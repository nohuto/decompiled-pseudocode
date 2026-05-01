/*
 * XREFs of sub_18002619C @ 0x18002619C
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 */

_QWORD *__fastcall sub_18002619C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_QWORD *)(a4 + 56) = 0LL;
  *(_QWORD *)(a4 + 64) = 0LL;
  *(_QWORD *)(a4 + 72) = 0LL;
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_BYTE *)(a4 + 40) = 1;
  *(_QWORD *)(a4 + 8) = a1;
  sub_18001E380();
  *(_QWORD *)(a4 + 48) = sub_180026040(a2);
  *(_QWORD *)(a4 + 56) = sub_180026040(a3);
  return sub_18000F390();
}
