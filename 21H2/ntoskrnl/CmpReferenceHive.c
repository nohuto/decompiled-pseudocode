/*
 * XREFs of CmpReferenceHive @ 0x1406DBA08
 * Callers:
 *     CmpTryToLockHashEntryExclusive @ 0x1406177B8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x140619FD0 (CmpLockHashEntryShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140660F9C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140661914 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetLastHive @ 0x140664774 (CmpGetLastHive.c)
 *     CmpBlockHiveWrites @ 0x140666330 (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x1406672E4 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140667684 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14066782C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1406DB998 (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x1406DBA34 (CmpLockHashEntryExclusive.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
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
