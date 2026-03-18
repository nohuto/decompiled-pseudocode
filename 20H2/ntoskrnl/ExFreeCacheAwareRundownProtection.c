/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140202C10
 * Callers:
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1405D8310 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x14093A554 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
