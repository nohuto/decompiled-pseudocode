/*
 * XREFs of CmpAllocatePoolWithQuotaTag @ 0x1404ED050
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x14086B490 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B628 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocatePoolWithQuotaTag(int a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
}
