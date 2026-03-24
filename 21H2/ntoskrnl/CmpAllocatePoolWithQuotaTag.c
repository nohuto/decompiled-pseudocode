/*
 * XREFs of CmpAllocatePoolWithQuotaTag @ 0x1404ECE10
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x14086B330 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B4C8 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocatePoolWithQuotaTag(int a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
}
