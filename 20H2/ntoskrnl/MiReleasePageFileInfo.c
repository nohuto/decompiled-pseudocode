/*
 * XREFs of MiReleasePageFileInfo @ 0x140344F70
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiLockPageTablePage @ 0x14026B110 (MiLockPageTablePage.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14029F10C (MiLockPageAndSetDirty.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x1402B02C0 (MiOutSwapWorkingSetPte.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402C6C70 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiTrimSystemImagePages @ 0x14030D320 (MiTrimSystemImagePages.c)
 *     MiUnlockStoreLockedPages @ 0x14031E050 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x14031E150 (MiStoreMarkLockedPagesModified.c)
 *     MiInPageSingleKernelStack @ 0x140335B20 (MiInPageSingleKernelStack.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiReservePageFileSpace @ 0x1403481F0 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C8AFC (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F2DE0 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x140541C24 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x140546684 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1406F0C14 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1408D3010 (MiScanPagefileSpace.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiStoreSetEvictPageFile @ 0x1403245AC (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x14032A0D4 (MiClearPageFileHash.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140345170 (MiCoalescePageFileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( qword_140C4DDC0 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C4DDC0;
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
