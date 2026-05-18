/*
 * XREFs of sub_1800AED44 @ 0x1800AED44
 * Callers:
 *     sub_18012757D @ 0x18012757D (sub_18012757D.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x180127609 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 * Callees:
 *     sub_1800AE534 @ 0x1800AE534 (sub_1800AE534.c)
 */

__int64 __fastcall sub_1800AED44(_QWORD *a1)
{
  sub_1800AE534((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  return j_j__o_free(*a1);
}
