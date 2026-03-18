/*
 * XREFs of CmpLockKcbShared @ 0x1405F0BE0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140202F30 (CmpDoQueryKeyName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
