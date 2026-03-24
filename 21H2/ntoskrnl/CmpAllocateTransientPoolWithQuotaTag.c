/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x14027EF58
 * Callers:
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x140667100 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14066F690 (CmCreateKey.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 *     NtCompactKeys @ 0x140868000 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408688F0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
