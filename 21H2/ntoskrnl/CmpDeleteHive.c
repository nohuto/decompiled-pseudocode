/*
 * XREFs of CmpDeleteHive @ 0x1406BBAD8
 * Callers:
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14067EC64 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDereferenceHive @ 0x1406A5F0C (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnblockHiveWrites @ 0x14071A730 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x14071A784 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockHashEntry @ 0x14071B8C0 (CmpUnlockHashEntry.c)
 *     CmpBlockHiveWrites @ 0x14071B99C (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntryByIndex @ 0x14091C9E8 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     HvFreeDirtyData @ 0x140689A8C (HvFreeDirtyData.c)
 *     CmpDeleteKcbCache @ 0x1406BBBA8 (CmpDeleteKcbCache.c)
 *     CmpReleaseGlobalQuota @ 0x14079CF18 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = P + 201;
  if ( (_QWORD *)*v1 != v1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData((__int64)P);
  CmpDeleteKcbCache(P);
  v5 = (void *)P[231];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = (void *)P[233];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)P[602];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  CmpReleaseGlobalQuota(4824LL);
  ExFreePoolWithTag(P, 0);
}
