/*
 * XREFs of sub_1800AF948 @ 0x1800AF948
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800DBE40 @ 0x1800DBE40 (sub_1800DBE40.c)
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 *     sub_18010AB6C @ 0x18010AB6C (sub_18010AB6C.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 *     sub_180111E90 @ 0x180111E90 (sub_180111E90.c)
 * Callees:
 *     sub_1800392B0 @ 0x1800392B0 (sub_1800392B0.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 */

_QWORD *__fastcall sub_1800AF948(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v5; // eax

  *(_OWORD *)a2 = 0LL;
  v5 = sub_18007040C(*a3);
  sub_1800392B0((__int64 *)(a1 + 448), a2, v5);
  return a2;
}
