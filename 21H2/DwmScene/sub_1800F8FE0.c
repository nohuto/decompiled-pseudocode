/*
 * XREFs of sub_1800F8FE0 @ 0x1800F8FE0
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 * Callees:
 *     sub_1800D1E00 @ 0x1800D1E00 (sub_1800D1E00.c)
 */

__int64 __fastcall sub_1800F8FE0(__int64 a1, __int64 a2)
{
  sub_1800D1E00(a1 + 128, a2);
  return sub_1800D27A4((__int64 **)(a2 + 16));
}
