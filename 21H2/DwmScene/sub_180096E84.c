/*
 * XREFs of sub_180096E84 @ 0x180096E84
 * Callers:
 *     sub_1800D2864 @ 0x1800D2864 (sub_1800D2864.c)
 *     sub_180115870 @ 0x180115870 (sub_180115870.c)
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 *     sub_180117688 @ 0x180117688 (sub_180117688.c)
 *     sub_180119FF0 @ 0x180119FF0 (sub_180119FF0.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x180124E9C (-cancel_current_task@Concurrency@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180096E84(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
