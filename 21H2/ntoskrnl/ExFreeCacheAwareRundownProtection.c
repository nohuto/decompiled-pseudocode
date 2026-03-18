/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1402D2AA0
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x14074B878 (RawCleanupVcb.c)
 *     EtwpCleanupSiloState @ 0x1409E026C (EtwpCleanupSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
