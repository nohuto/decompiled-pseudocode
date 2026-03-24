/*
 * XREFs of MiReleasePageFileInfo @ 0x140267CB0
 * Callers:
 *     MiLockPageTablePage @ 0x140209DF0 (MiLockPageTablePage.c)
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140238450 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402B7890 (MiStoreMarkLockedPagesModified.c)
 *     MiTrimSystemImagePages @ 0x1402BE540 (MiTrimSystemImagePages.c)
 *     MiUnlockStoreLockedPages @ 0x1402BF7A0 (MiUnlockStoreLockedPages.c)
 *     MiInPageSingleKernelStack @ 0x1402E4C40 (MiInPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14030FA6C (MiLockPageAndSetDirty.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 *     MiDeleteClusterPage @ 0x14032B830 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x14032CEB0 (MiOutSwapWorkingSetPte.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14039758C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C969C (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x140543724 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x140645CA8 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1408D07D0 (MiScanPagefileSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140267EB0 (MiCoalescePageFileBitmapsCache.c)
 *     MiStoreSetEvictPageFile @ 0x1402C51BC (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x1402CB854 (MiClearPageFileHash.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
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
  if ( qword_140C4DF40 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C4DF40;
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
      MiClearPageFileHash(v7, (unsigned int)v4);
    if ( (*(_BYTE *)(v7 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v7, (unsigned int)v4);
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
