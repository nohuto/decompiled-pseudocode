/*
 * XREFs of CmpLockKcbShared @ 0x1406F2B10
 * Callers:
 *     CmpDoQueryKeyName @ 0x14027EBD0 (CmpDoQueryKeyName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406FC410 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F820 (CmKeyBodyRemapToVirtual.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
