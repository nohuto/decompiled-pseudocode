/*
 * XREFs of sub_180002004 @ 0x180002004
 * Callers:
 *     sub_1800756C0 @ 0x1800756C0 (sub_1800756C0.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x18007A520 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 */

__int64 __fastcall sub_180002004(_QWORD *a1)
{
  sub_180006A30(a1[4] - 24LL);
  sub_180006A30(a1[1] - 24LL);
  return sub_180006A30(*a1 - 24LL);
}
