/*
 * XREFs of sub_1800B4614 @ 0x1800B4614
 * Callers:
 *     sub_18012CE95 @ 0x18012CE95 (sub_18012CE95.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x18012CF21 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 * Callees:
 *     sub_1800B3E04 @ 0x1800B3E04 (sub_1800B3E04.c)
 */

__int64 __fastcall sub_1800B4614(_QWORD *a1)
{
  sub_1800B3E04((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  return j_j__o_free(*a1);
}
