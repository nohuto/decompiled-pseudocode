/*
 * XREFs of ?InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z @ 0xA2540
 * Callers:
 *     _PackAffectedThreadsFromThreadCleanup@4 @ 0xA250C (_PackAffectedThreadsFromThreadCleanup@4.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z @ 0xC8478 (-PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__thiscall InAffectedThreadList(struct _LIST_ENTRY *this)
{
  struct _LIST_ENTRY *result; // eax

  for ( result = gListAffectedThreadsForQueueRecalc.Flink;
        result != &gListAffectedThreadsForQueueRecalc;
        result = result->Flink )
  {
    if ( this == result[1].Flink )
      return result;
  }
  return 0;
}
