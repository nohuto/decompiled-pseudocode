/*
 * XREFs of PopUserShutdownDelayDpcCallback @ 0x14056DC30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall PopUserShutdownDelayDpcCallback(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&PopUserShutdown, 1) )
    ExQueueWorkItem(&PopUserShutdownDelayWorker, DelayedWorkQueue);
}
