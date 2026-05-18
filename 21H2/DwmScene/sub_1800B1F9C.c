/*
 * XREFs of sub_1800B1F9C @ 0x1800B1F9C
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_1800DD57C @ 0x1800DD57C (sub_1800DD57C.c)
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B1F9C(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 372) = *a2;
  *(_BYTE *)(a1 + 388) = 1;
}
