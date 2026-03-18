/*
 * XREFs of MiReleasePageFileInfo @ 0x14034EFC0
 * Callers:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiLockPageTablePage @ 0x1402A83C0 (MiLockPageTablePage.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiUnlockStoreLockedPages @ 0x14030FA40 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x14030FB40 (MiStoreMarkLockedPagesModified.c)
 *     MiTrimSystemImagePages @ 0x1403251CC (MiTrimSystemImagePages.c)
 *     MiInPageSingleKernelStack @ 0x140329D10 (MiInPageSingleKernelStack.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C50FC (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x14053DC04 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1407048F4 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiStoreSetEvictPageFile @ 0x140315BBC (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x14031BC04 (MiClearPageFileHash.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14034F1C0 (MiCoalescePageFileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( qword_140C4DE80 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C4DE80;
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
