/*
 * XREFs of CmpDeleteHive @ 0x1406A3308
 * Callers:
 *     CmpPerformSingleKcbCacheLookup @ 0x140613BB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x140670E48 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140682488 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceHive @ 0x1406A32E0 (CmpDereferenceHive.c)
 *     CmpUnblockTwoHiveWrites @ 0x1406FE0D8 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1406FFA18 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406FFD24 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140700CD8 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140701074 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140701B08 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     CmpDestroyHive @ 0x1407254A8 (CmpDestroyHive.c)
 *     CmpUnfreezeHive @ 0x14072C914 (CmpUnfreezeHive.c)
 *     CmpQuitNextHive @ 0x140769B50 (CmpQuitNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408782D0 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpDeleteKcbCache @ 0x1406A33C4 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1406A3430 (HvFreeDirtyData.c)
 *     CmpReleaseGlobalQuota @ 0x14070696C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
