/*
 * XREFs of ?CsExitInitiatedReleaseComponentReferences@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00446D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsExitInitiatedReleaseComponentReferences(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 1800), CriticalWorkQueue);
}
