/*
 * XREFs of RaidReleaseAdapterRemoveLockAndWait @ 0x1C0031C8C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0077B5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077E54 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLockAndWait(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 264));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 264));
}
