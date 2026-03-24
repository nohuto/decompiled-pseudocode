/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1403614F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x14071BD10 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14071BDB0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1407818A0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
