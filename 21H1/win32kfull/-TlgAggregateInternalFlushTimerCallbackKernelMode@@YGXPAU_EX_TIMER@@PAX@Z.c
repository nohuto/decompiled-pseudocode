/*
 * XREFs of ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YGXPAU_EX_TIMER@@PAX@Z @ 0x1B6D0D
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1B6884 (EnableFlushTimer.c)
 */

void __stdcall TlgAggregateInternalFlushTimerCallbackKernelMode(struct _EX_TIMER *a1, PWORK_QUEUE_ITEM WorkItem)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16((volatile signed __int16 *)&WorkItem[2], 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer((int)a1, 0x3A98u);
  }
  else
  {
    ExQueueWorkItem(WorkItem, DelayedWorkQueue);
  }
}
