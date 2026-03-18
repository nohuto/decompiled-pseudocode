/*
 * XREFs of DpiPdoPollingDpc @ 0x1C0066A70
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
  if ( !_InterlockedExchange(&dword_1C0130720, 1) )
    IoQueueWorkItem(qword_1C0130718, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
