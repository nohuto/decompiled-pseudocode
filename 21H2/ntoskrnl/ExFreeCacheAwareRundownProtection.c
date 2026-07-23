/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1402A6400
 * Callers:
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1406CA0E4 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x140937EF4 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
