/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1402F3340
 * Callers:
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1406B954C (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x140933484 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
