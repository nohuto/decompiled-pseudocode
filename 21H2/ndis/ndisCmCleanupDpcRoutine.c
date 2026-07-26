/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1C00B0DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&dword_1C00E62F8, 1, 0) )
    ExQueueWorkItem(&stru_1C00E5EC0, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
