/*
 * XREFs of CmpReferenceHive @ 0x14071BBD8
 * Callers:
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14067ED34 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetLastHive @ 0x1406A5F34 (CmpGetLastHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406DA700 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryShared @ 0x14071B930 (CmpLockHashEntryShared.c)
 *     CmpBlockHiveWrites @ 0x14071B99C (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14071BADC (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14071BB4C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4232));
  v1 = *(_DWORD *)(a1 + 4232);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4232), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
