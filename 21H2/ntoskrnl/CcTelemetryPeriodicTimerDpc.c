/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x14025B900
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall CcTelemetryPeriodicTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _InterlockedExchange(&dword_140C499D4, 0);
  if ( !_InterlockedCompareExchange(&dword_140C499D8, 1, 0) )
    ExQueueWorkItem(&stru_140C49A60, NormalWorkQueue);
}
