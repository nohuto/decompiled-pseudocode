/*
 * XREFs of DpiPdoPollingDpc @ 0x1C0059D50
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
  if ( !_InterlockedExchange(&dword_1C00B2D98, 1) )
    IoQueueWorkItem(qword_1C00B2D90, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
