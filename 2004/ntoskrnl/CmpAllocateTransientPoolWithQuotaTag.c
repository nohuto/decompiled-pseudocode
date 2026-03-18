/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80
 * Callers:
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1405E0B70 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x1405E8CC0 (CmpBounceContextStart.c)
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     NtCompactKeys @ 0x1408649C0 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408652B0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140867CE0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140867E70 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
