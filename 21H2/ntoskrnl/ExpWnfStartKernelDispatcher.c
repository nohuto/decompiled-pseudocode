/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x140609D0C
 * Callers:
 *     ExpWnfNotifySubscription @ 0x140609C14 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140609DB4 (ExpWnfDispatchKernelSubscription.c)
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
