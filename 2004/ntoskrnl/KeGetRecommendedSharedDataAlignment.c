/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x14026FE60
 * Callers:
 *     ExInitializeRundownProtectionCacheAware @ 0x140634AC0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140634B60 (ExAllocateCacheAwareRundownProtection.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14076F510 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
