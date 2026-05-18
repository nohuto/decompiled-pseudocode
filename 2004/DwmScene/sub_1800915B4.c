/*
 * XREFs of sub_1800915B4 @ 0x1800915B4
 * Callers:
 *     sub_1800CCF94 @ 0x1800CCF94 (sub_1800CCF94.c)
 *     sub_18010FFA0 @ 0x18010FFA0 (sub_18010FFA0.c)
 *     sub_1801104AC @ 0x1801104AC (sub_1801104AC.c)
 *     sub_180110BC8 @ 0x180110BC8 (sub_180110BC8.c)
 *     sub_180111DB8 @ 0x180111DB8 (sub_180111DB8.c)
 *     sub_180114720 @ 0x180114720 (sub_180114720.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x18011F5CC (-cancel_current_task@Concurrency@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800915B4(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
