/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140360670
 * Callers:
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x14071A630 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x140937D24 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9

  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree, v1, v2, v3);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware, v5, v6, v7);
}
