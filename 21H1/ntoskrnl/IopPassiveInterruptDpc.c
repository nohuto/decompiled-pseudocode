/*
 * XREFs of IopPassiveInterruptDpc @ 0x140507AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
