/*
 * XREFs of MiReleasePageFileInfo @ 0x1402D4690
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiDeleteClusterPage @ 0x140234D60 (MiDeleteClusterPage.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiOutSwapWorkingSetPte @ 0x140237520 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402415C0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiLockPageTablePage @ 0x14024F390 (MiLockPageTablePage.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402B6220 (MiDeleteValidSystemPage.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     MiReservePageFileSpace @ 0x1402BA590 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTrimSystemImagePages @ 0x1402E00CC (MiTrimSystemImagePages.c)
 *     MiInPageSingleKernelStack @ 0x1402E4BE0 (MiInPageSingleKernelStack.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiUnlockStoreLockedPages @ 0x14034D0D0 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x14034D1D0 (MiStoreMarkLockedPagesModified.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C606C (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403EE978 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x14053E254 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x140542CB4 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x14069BFF8 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1408CD1D0 (MiScanPagefileSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402D4890 (MiCoalescePageFileBitmapsCache.c)
 *     MiStoreSetEvictPageFile @ 0x140353A3C (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x1403597D4 (MiClearPageFileHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( qword_140C4DD40 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C4DD40;
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
