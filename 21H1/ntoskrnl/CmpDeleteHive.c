/*
 * XREFs of CmpDeleteHive @ 0x14065B4F8
 * Callers:
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntryByKcb @ 0x140622370 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceHive @ 0x14065B4D0 (CmpDereferenceHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140690ED4 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x1406913B8 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1406919AC (CmpUnblockHiveWrites.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140693AC8 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpBlockHiveWrites @ 0x140693BB8 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x140695CA8 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C2C50 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDestroyHive @ 0x140715158 (CmpDestroyHive.c)
 *     CmpUnfreezeHive @ 0x14071CE04 (CmpUnfreezeHive.c)
 *     CmpQuitNextHive @ 0x1407593E0 (CmpQuitNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x14087148C (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpDeleteKcbCache @ 0x14065B5B4 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x14065B620 (HvFreeDirtyData.c)
 *     CmpReleaseGlobalQuota @ 0x14069853C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
