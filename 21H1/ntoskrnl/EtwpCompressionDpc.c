/*
 * XREFs of EtwpCompressionDpc @ 0x1405A7100
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402417B8 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a2[34].Parameter + 56) + 8LL * LODWORD(a2->List.Flink)),
    1u);
  ExQueueWorkItem(a2 + 35, DelayedWorkQueue);
}
