/*
 * XREFs of CmpDeleteHive @ 0x1405E0094
 * Callers:
 *     CmpDereferenceHive @ 0x1405E006C (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntryByKcb @ 0x140660E70 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140661844 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnblockTwoHiveWrites @ 0x140664940 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140666288 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x140666330 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1406672E4 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140667684 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockHashEntry @ 0x1406DBD98 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpUnfreezeHive @ 0x140730E04 (CmpUnfreezeHive.c)
 *     CmpQuitNextHive @ 0x14076DD54 (CmpQuitNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875D1C (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpDeleteKcbCache @ 0x1405E0150 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1405E01BC (HvFreeDirtyData.c)
 *     CmpReleaseGlobalQuota @ 0x14072122C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
