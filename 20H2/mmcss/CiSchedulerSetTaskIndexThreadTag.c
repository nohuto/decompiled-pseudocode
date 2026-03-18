/*
 * XREFs of CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C0001170 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001F40 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerWait @ 0x1C00021A0 (CiSchedulerWait.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002A80 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002B50 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C0001B10 (CiSystemUpdateThreadTag.c)
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
