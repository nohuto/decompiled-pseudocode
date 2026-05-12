/*
 * XREFs of RaidDeferredQueueDpcRoutine @ 0x1C000EA60
 * Callers:
 *     <none>
 * Callees:
 *     RaidProcessDeferredItemsWorker @ 0x1C000E9DC (RaidProcessDeferredItemsWorker.c)
 */

void __fastcall RaidDeferredQueueDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  RaidProcessDeferredItemsWorker(SystemArgument1, DeferredContext);
}
