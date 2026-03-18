/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C003893C
 * Callers:
 *     zzzReattachThreads @ 0x1C0038514 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C003889C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0038958 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  struct _LIST_ENTRY *result; // rax

  result = &gListAffectedThreadsForQueueRecalc;
  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    return (struct _LIST_ENTRY *)(*(_QWORD *)(gptiCurrent + 448LL) + 168LL);
  return result;
}
