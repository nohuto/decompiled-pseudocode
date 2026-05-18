/*
 * XREFs of sub_1800AC6CC @ 0x1800AC6CC
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_1800D7CAC @ 0x1800D7CAC (sub_1800D7CAC.c)
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800AC6CC(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 372) = *a2;
  *(_BYTE *)(a1 + 388) = 1;
}
