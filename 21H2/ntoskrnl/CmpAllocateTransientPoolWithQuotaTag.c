/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14067F8D0 (CmCreateKey.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14071F740 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmpBounceContextStart @ 0x1407C1A00 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     NtCompactKeys @ 0x14090E310 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14090EC00 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x1409113B4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140911544 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
