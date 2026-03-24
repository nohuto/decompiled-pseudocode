/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1406AB61C
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x14061088C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x1406AB524 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406AB6C4 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
  }
}
