/*
 * XREFs of RaidUnitRestartQueueDpcRoutine @ 0x1C004B720
 * Callers:
 *     <none>
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00078AC (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueueDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidRestartIoQueue(DeferredContext[8]);
}
