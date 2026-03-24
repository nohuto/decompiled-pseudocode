/*
 * XREFs of IopPassiveInterruptDpc @ 0x14050D590
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
