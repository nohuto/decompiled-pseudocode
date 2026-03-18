/*
 * XREFs of CmpReferenceHive @ 0x140695E40
 * Callers:
 *     CmpBlockTwoHiveWrites @ 0x140690ED4 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14069107C (CmpDoQueueLateUnloadWorker.c)
 *     CmpBlockHiveWrites @ 0x140693BB8 (CmpBlockHiveWrites.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140693C54 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14069596C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x140695D48 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140695DD0 (CmpLockHashEntrySharedByKcb.c)
 *     CmpGetLastHive @ 0x1406E268C (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E36A8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x1406E5070 (CmpLockHashEntryShared.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4 (CmpSearchKeyControlBlockTreeEx.c)
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
