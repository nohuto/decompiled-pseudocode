/*
 * XREFs of CmpReferenceHive @ 0x140670AB8
 * Callers:
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406701B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140670A48 (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x140670AE4 (CmpLockHashEntryExclusive.c)
 *     CmpGetLastHive @ 0x1406D8514 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406D9B0C (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x1406DB458 (CmpLockHashEntryShared.c)
 *     CmpBlockHiveWrites @ 0x1406FFD24 (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x140700CD8 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140701074 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14070121C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140701BD8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
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
