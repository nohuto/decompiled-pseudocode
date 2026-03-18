/*
 * XREFs of CmpReferenceHive @ 0x1405DF7A0
 * Callers:
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1405DC07C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405DF2CC (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x1405DF6A8 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405DF730 (CmpLockHashEntrySharedByKcb.c)
 *     CmpBlockHiveWrites @ 0x14063FB6C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14063FDC4 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14063FF6C (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetLastHive @ 0x14070500C (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14070709C (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x140708C4C (CmpLockHashEntryShared.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4272));
  v1 = *(_DWORD *)(a1 + 4272);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4272), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
