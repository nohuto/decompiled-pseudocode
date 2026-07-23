/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8
 * Callers:
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14065BF20 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140665B70 (CmCreateKey.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     NtCompactKeys @ 0x140868160 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868A50 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
