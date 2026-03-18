/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x14032FF40
 * Callers:
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1406DA85C (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x140934724 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
