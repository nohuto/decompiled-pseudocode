/*
 * XREFs of MiReleasePageFileInfo @ 0x140255C50
 * Callers:
 *     MiStoreMarkLockedPagesModified @ 0x140235A70 (MiStoreMarkLockedPagesModified.c)
 *     MiTrimSystemImagePages @ 0x14023CB80 (MiTrimSystemImagePages.c)
 *     MiUnlockStoreLockedPages @ 0x14023DBF0 (MiUnlockStoreLockedPages.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiInPageSingleKernelStack @ 0x140295F90 (MiInPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiLockPageTablePage @ 0x1402AE6F0 (MiLockPageTablePage.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402DCCA0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140337C00 (MiOutSwapWorkingSetPte.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C983C (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x140543964 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x14063AA94 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 * Callees:
 *     MiStoreSetEvictPageFile @ 0x14024373C (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x140249FA4 (MiClearPageFileHash.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140255E50 (MiCoalescePageFileBitmapsCache.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  volatile LONG *v8; // rcx
  int v9; // r12d
  KIRQL v10; // r15
  __int64 v11; // r13
  volatile LONG *v12; // rcx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  int v20; // [rsp+68h] [rbp+10h]

  v3 = a2;
  if ( qword_140C4DF80 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C4DF80;
  v4 = HIDWORD(v3);
  v5 = (a2 >> 1) & 1;
  v6 = (a2 >> 2) & 1;
  v20 = 0;
  v7 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 6944);
  v8 = (volatile LONG *)(v7 + 232);
  v9 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    v10 = 2;
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive(v8);
  }
  v11 = *(_QWORD *)(v7 + 112);
  if ( (_DWORD)v5 )
  {
    _bittestandreset(*(signed __int32 **)(v11 + 32), v4);
    ++*(_QWORD *)(v7 + 48);
  }
  if ( (_DWORD)v6 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v7, v4);
    if ( (*(_BYTE *)(v7 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v7, v4);
      goto LABEL_13;
    }
    _bittestandreset(*(signed __int32 **)(v11 + 16), v4);
    v13 = ++*(_QWORD *)(v7 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v7 + 120) )
      *(_DWORD *)(v7 + 120) = v4;
    ++*(_DWORD *)(v7 + 128);
    if ( v13 == 1 && (*(_BYTE *)(v7 + 206) & 1) != 0 )
      v20 = 1;
  }
  if ( ((_DWORD)v5 || !_bittest64(*(const signed __int64 **)(v11 + 32), v4))
    && ((_DWORD)v6 || !_bittest64(*(const signed __int64 **)(v11 + 16), v4)) )
  {
    MiCoalescePageFileBitmapsCache(v7, (unsigned int)v5, (unsigned int)v4);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v7 + 248) + 872LL),
      (*(_DWORD *)(*(_QWORD *)(v7 + 248) + 872LL) & 0xFFFFFC00 | 0x200) + 1024);
  }
LABEL_13:
  v12 = (volatile LONG *)(v7 + 232);
  if ( v9 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  if ( v20 == 1 )
    KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
}
