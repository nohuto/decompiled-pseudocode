/*
 * XREFs of sub_1800E0FF0 @ 0x1800E0FF0
 * Callers:
 *     sub_1800E10B0 @ 0x1800E10B0 (sub_1800E10B0.c)
 *     sub_1800E10C0 @ 0x1800E10C0 (sub_1800E10C0.c)
 *     sub_1800E10D0 @ 0x1800E10D0 (sub_1800E10D0.c)
 *     sub_1800E10E0 @ 0x1800E10E0 (sub_1800E10E0.c)
 *     sub_1800E10F0 @ 0x1800E10F0 (sub_1800E10F0.c)
 *     sub_1800E1100 @ 0x1800E1100 (sub_1800E1100.c)
 *     sub_1800E1110 @ 0x1800E1110 (sub_1800E1110.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 *     sub_1800E1130 @ 0x1800E1130 (sub_1800E1130.c)
 *     sub_1800E1140 @ 0x1800E1140 (sub_1800E1140.c)
 * Callees:
 *     sub_1800DEE40 @ 0x1800DEE40 (sub_1800DEE40.c)
 *     sub_1800DF1B0 @ 0x1800DF1B0 (sub_1800DF1B0.c)
 *     sub_1800DF520 @ 0x1800DF520 (sub_1800DF520.c)
 *     sub_1800DF860 @ 0x1800DF860 (sub_1800DF860.c)
 *     sub_1800DFD90 @ 0x1800DFD90 (sub_1800DFD90.c)
 *     sub_1800E0030 @ 0x1800E0030 (sub_1800E0030.c)
 *     sub_1800E0250 @ 0x1800E0250 (sub_1800E0250.c)
 *     sub_1800E04A0 @ 0x1800E04A0 (sub_1800E04A0.c)
 *     sub_1800E08D0 @ 0x1800E08D0 (sub_1800E08D0.c)
 *     sub_1800E0A50 @ 0x1800E0A50 (sub_1800E0A50.c)
 */

__int64 __fastcall sub_1800E0FF0(__int64 a1, __int64 a2)
{
  sub_1800DFD90(a1 + 9256, a2);
  sub_1800E08D0(a1 + 14536, a2);
  sub_1800E0A50(a1 + 14624, a2);
  sub_1800E0250(a1 + 9776, a2);
  sub_1800DEE40(a1, a2);
  sub_1800DF520(a1 + 1160, a2);
  sub_1800DF1B0(a1 + 64, a2);
  sub_1800DF860(a1 + 4632, a2);
  sub_1800E0030(a1 + 9704, a2);
  sub_1800E04A0(a1 + 9848, a2);
  return sub_1800E0700(a1 + 14472, a2);
}
