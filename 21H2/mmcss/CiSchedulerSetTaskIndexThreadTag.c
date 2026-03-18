/*
 * XREFs of CiSchedulerSetTaskIndexThreadTag @ 0x1C00029D0
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C00013B0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00021C0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002CB0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002D80 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C0002A20 (CiSystemUpdateThreadTag.c)
 */

__int64 __fastcall CiSchedulerSetTaskIndexThreadTag(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v2 != i; v2 = (_QWORD *)*v2 )
    result = CiSystemUpdateThreadTag(v2 - 10, a2);
  return result;
}
