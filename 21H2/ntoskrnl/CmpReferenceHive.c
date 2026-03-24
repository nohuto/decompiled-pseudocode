/*
 * XREFs of CmpReferenceHive @ 0x1405EC2A8
 * Callers:
 *     CmpLockHashEntrySharedByKcb @ 0x1405EC238 (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x1405EC2D4 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14066C17C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14066CAF4 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpBlockHiveWrites @ 0x14066FE50 (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x140670E04 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140672454 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406725FC (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetLastHive @ 0x1406B6A70 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406B8398 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x1406BACFC (CmpLockHashEntryShared.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F1D4 (CmpSearchKeyControlBlockTreeEx.c)
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
