/*
 * XREFs of DpiPdoPollingDpc @ 0x1C0057EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_1C00AFC98, 1) )
    IoQueueWorkItem(qword_1C00AFC90, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
