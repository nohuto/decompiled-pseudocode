/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020
 * Callers:
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14066BFC0 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1406FF300 (CmCreateKey.c)
 *     NtCompactKeys @ 0x14086A3E0 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14086ACD0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086D700 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086D890 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
