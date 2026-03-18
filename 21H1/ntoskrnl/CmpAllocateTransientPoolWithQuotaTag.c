/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8
 * Callers:
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmpCaptureKeyValueArray @ 0x140657D1C (CmpCaptureKeyValueArray.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14068D940 (CmCreateKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtCompactKeys @ 0x1408636A0 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140863F90 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086699C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140866B2C (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
