/*
 * XREFs of IopPassiveInterruptDpc @ 0x140508130
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x14035ACC0 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
