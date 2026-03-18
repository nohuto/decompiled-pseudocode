/*
 * XREFs of ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00C041C
 * Callers:
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C02B4 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00C03E0 (PackAffectedThreadsFromThreadCleanup.c)
 * Callees:
 *     <none>
 */

struct PTI_LIST *__fastcall InAffectedThreadList(const struct tagTHREADINFO *a1)
{
  struct PTI_LIST *result; // rax

  for ( result = (struct PTI_LIST *)gListAffectedThreadsForQueueRecalc.Flink;
        result != (struct PTI_LIST *)&gListAffectedThreadsForQueueRecalc;
        result = *(struct PTI_LIST **)result )
  {
    if ( a1 == *((const struct tagTHREADINFO **)result + 2) )
      return result;
  }
  return 0LL;
}
