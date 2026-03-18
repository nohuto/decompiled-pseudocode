/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x140345F84
 * Callers:
 *     CmpAddToDelayedClose @ 0x1406FEB88 (CmpAddToDelayedClose.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
