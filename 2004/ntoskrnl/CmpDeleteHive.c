/*
 * XREFs of CmpDeleteHive @ 0x140644B4C
 * Callers:
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x1405DF608 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1405F0F80 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpUnblockTwoHiveWrites @ 0x14063F604 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x14063F860 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14063FB6C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14063FDC4 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140644890 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDereferenceHive @ 0x140644B24 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406E31D0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmpUnfreezeHive @ 0x14071EA78 (CmpUnfreezeHive.c)
 *     CmpQuitNextHive @ 0x14075B260 (CmpQuitNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140872780 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CmpDeleteKcbCache @ 0x140644C08 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x140644C74 (HvFreeDirtyData.c)
 *     CmpReleaseGlobalQuota @ 0x14069E60C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  CmpReleaseGlobalQuota(4840LL);
  ExFreePoolWithTag(P, 0);
}
