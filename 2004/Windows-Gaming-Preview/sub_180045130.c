/*
 * XREFs of sub_180045130 @ 0x180045130
 * Callers:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x180045224 (-cancel_current_task@Concurrency@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180045130(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
