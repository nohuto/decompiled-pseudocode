/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x14033F7F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140702720 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1407027C0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14076CD70 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
