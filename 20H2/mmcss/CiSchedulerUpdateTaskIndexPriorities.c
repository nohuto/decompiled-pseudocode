/*
 * XREFs of CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002C20
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001F40 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002B50 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1C0001940 (CiSchedulerSetPriority.c)
 */

char __fastcall CiSchedulerUpdateTaskIndexPriorities(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rdi
  char result; // al

  v1 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v1 != i; v1 = (_QWORD *)*v1 )
    result = CiSchedulerSetPriority((__int64)(v1 - 10));
  return result;
}
