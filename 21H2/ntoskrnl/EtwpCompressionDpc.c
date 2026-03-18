/*
 * XREFs of EtwpCompressionDpc @ 0x140634F40
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402E1CBC (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
    1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 276), DelayedWorkQueue);
}
