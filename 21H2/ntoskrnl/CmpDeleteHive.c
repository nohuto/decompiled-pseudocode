/*
 * XREFs of CmpDeleteHive @ 0x14071C6F4
 * Callers:
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntryByKcb @ 0x14066C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14066CA24 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnblockHiveWrites @ 0x14066FDA8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14066FE50 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140670E04 (CmpGetNextHive.c)
 *     CmpUnblockTwoHiveWrites @ 0x140672258 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140672454 (CmpBlockTwoHiveWrites.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406934B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406F2EB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceHive @ 0x14071C6CC (CmpDereferenceHive.c)
 *     CmpDestroyHive @ 0x140728F38 (CmpDestroyHive.c)
 *     CmpUnfreezeHive @ 0x140730C38 (CmpUnfreezeHive.c)
 *     CmpQuitNextHive @ 0x14076DB94 (CmpQuitNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875BBC (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     CmpReleaseGlobalQuota @ 0x140709E4C (CmpReleaseGlobalQuota.c)
 *     CmpDeleteKcbCache @ 0x14071C7B0 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x14071C81C (HvFreeDirtyData.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  v1 = P + 200;
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
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  v5 = (void *)P[230];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = (void *)P[232];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  CmpReleaseGlobalQuota(0x12E8u);
  ExFreePoolWithTag(P, 0);
}
