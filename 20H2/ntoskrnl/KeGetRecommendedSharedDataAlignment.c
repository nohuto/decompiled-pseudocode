/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x140203AB0
 * Callers:
 *     ExInitializeRundownProtectionCacheAware @ 0x1405D99F0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405D9A90 (ExAllocateCacheAwareRundownProtection.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14077DAC0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
