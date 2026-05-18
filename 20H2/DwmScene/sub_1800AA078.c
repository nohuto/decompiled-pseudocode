/*
 * XREFs of sub_1800AA078 @ 0x1800AA078
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800D6570 @ 0x1800D6570 (sub_1800D6570.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 *     sub_18010529C @ 0x18010529C (sub_18010529C.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 *     sub_18010C5C0 @ 0x18010C5C0 (sub_18010C5C0.c)
 * Callees:
 *     sub_1800339E0 @ 0x1800339E0 (sub_1800339E0.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 */

_QWORD *__fastcall sub_1800AA078(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v5; // eax

  *(_OWORD *)a2 = 0LL;
  v5 = sub_18006AB3C(*a3);
  sub_1800339E0((__int64 *)(a1 + 448), a2, v5);
  return a2;
}
