/*
 * XREFs of sub_1C004E0B0 @ 0x1C004E0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C004D180 @ 0x1C004D180 (sub_1C004D180.c)
 */

__int64 __fastcall sub_1C004E0B0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_1C0013AE0(a1, a2, 1);
  sub_1C00361E8(a1);
  sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return sub_1C004D180(a1, a2, a3);
}
