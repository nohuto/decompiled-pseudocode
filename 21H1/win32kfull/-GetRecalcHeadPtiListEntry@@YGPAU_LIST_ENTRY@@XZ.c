/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ @ 0xC7CB4
 * Callers:
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?zzzRecalcThreadAttachment@@YGXXZ @ 0xC7C48 (-zzzRecalcThreadAttachment@@YGXXZ.c)
 *     ?zzzRecalc2@@YGXPAUtagQ@@@Z @ 0xC7CC8 (-zzzRecalc2@@YGXPAUtagQ@@@Z.c)
 * Callees:
 *     ?IsPackedQueueRecalc@@YGHXZ @ 0xC7DAA (-IsPackedQueueRecalc@@YGHXZ.c)
 */

struct _LIST_ENTRY *__stdcall GetRecalcHeadPtiListEntry()
{
  if ( IsPackedQueueRecalc() )
    return &gListAffectedThreadsForQueueRecalc;
  else
    return (struct _LIST_ENTRY *)(*(_DWORD *)(_gptiCurrent + 248) + 92);
}
