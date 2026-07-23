/*
 * XREFs of HalpCmcDeferredRoutine @ 0x1404B9BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall HalpCmcDeferredRoutine(__int64 a1, __int64 a2)
{
  if ( !_InterlockedExchange((volatile __int32 *)(a2 + 168), 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 136), DelayedWorkQueue);
}
