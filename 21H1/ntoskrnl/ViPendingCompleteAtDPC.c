/*
 * XREFs of ViPendingCompleteAtDPC @ 0x1409D2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x1409D2AB4 (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
