/*
 * XREFs of MmUnlockPages @ 0x1402B8AD0
 * Callers:
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     CcCopyBytesToUserBuffer @ 0x14032A7D0 (CcCopyBytesToUserBuffer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403A0EB4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403A0F08 (VslpLockPagesForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x14053A460 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14053BB80 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x140550260 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x140550900 (VslValidateDynamicCodePages.c)
 *     IopUnlockAndFreeMdl @ 0x1405570D0 (IopUnlockAndFreeMdl.c)
 *     KiOpPatchCode @ 0x14057B748 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x1405A605C (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x1405E2170 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405E2740 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1405FD594 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x140628F90 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x140629030 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1406384AC (ExpGetLookasideInformation.c)
 *     CcMdlReadComplete2 @ 0x1406C14E4 (CcMdlReadComplete2.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E0358 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406E9DE4 @ 0x1406E9DE4 (sub_1406E9DE4.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     AlpcpInitializeCompletionList @ 0x1407F5914 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1407F7C68 (AlpcpFreeCompletionList.c)
 *     VslCallEnclave @ 0x14088151A (VslCallEnclave.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1409152A4 (CmpLockKeyBodyIntoMemory.c)
 *     CmpUnlockKeyBodyFromMemory @ 0x140915784 (CmpUnlockKeyBodyFromMemory.c)
 *     FsRtlpFreeMdlChain @ 0x14092EF10 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409303C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140930460 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x1409778EC (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     PopReadPagesFromHiberFile @ 0x14098F634 (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409AF550 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D43FC (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140A06830 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140A06B80 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A06DF0 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 * Callees:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x140584374 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x140584530 (MiRetardMdl.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // si
  unsigned __int64 *v2; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 *v5; // r13
  int v6; // r15d
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  char v9; // bp
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // r12
  PMDL v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // r12d
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  struct _KPRCB *v24; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v26; // zf
  signed __int32 v27; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v29; // cl
  _DWORD *v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r9
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v36; // r9
  int v37; // edx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  unsigned __int8 v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-60h] BYREF
  struct _EPROCESS *Process; // [rsp+40h] [rbp-58h]
  PMDL v45; // [rsp+A0h] [rbp+8h] BYREF
  int v46; // [rsp+A8h] [rbp+10h] BYREF
  int v47; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v48; // [rsp+B8h] [rbp+20h]

  v45 = MemoryDescriptorList;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = (unsigned __int64 *)&MemoryDescriptorList[1];
  Process = MemoryDescriptorList->Process;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v48 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v5 = &v2[v4];
  v6 = 1;
  v7 = 0LL;
  v46 = 1;
  v43 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v9 = CurrentIrql + 1;
  v47 = CurrentIrql + 1;
  do
  {
    v10 = *v2;
    if ( *v2 == -1LL )
      break;
    v11 = 1LL;
    if ( v10 <= qword_140C50840 && (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      MiProbeUnlockPage(48 * v10 - 0x220000000000LL, MdlFlags, &v43, &v46);
    }
    else
    {
      v31 = *v2;
      v32 = 512 - (*v2 & 0x1FF);
      if ( v32 > 1 )
      {
        v33 = v2 + 1;
        do
        {
          if ( v33 == v5 )
            break;
          v34 = *v33;
          if ( *v33 == -1LL )
            break;
          if ( v34 != v31 + 1 )
            break;
          ++v11;
          ++v33;
          v31 = v34;
        }
        while ( v11 < v32 );
      }
      MiDereferenceIoPages(0, v10, v11);
    }
    ++v7;
    v2 += v11;
    if ( (v7 & 0x3F) == 0 && v42 < 2u )
    {
      if ( v2 >= v5 )
        break;
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v36 = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << v9);
            v26 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v42);
        v29 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
        {
          v30 = KeGetCurrentPrcb()->SchedulerAssist;
          v30[5] |= (-1 << (v29 + 1)) & 4;
        }
      }
    }
  }
  while ( v2 < v5 );
  v12 = v45;
  v13 = v48;
  if ( v43 != 0x3FFFFFFFFFLL )
  {
    v14 = 48 * v43 - 0x220000000000LL;
    v15 = 0LL;
    if ( v46 == 2 )
    {
      if ( (*(_BYTE *)(v14 + 34) & 7) != 6
        || (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v16 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL, v16 < 0xFFFFF68000000000uLL)
        || v16 > 0xFFFFF6FFFFFFFFFFuLL
        || (v17 = (__int64)(v16 << 25) >> 16, v17 < 0xFFFFF68000000000uLL)
        || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v6 = 0;
      }
      v18 = 3;
      if ( !v6 )
        goto LABEL_71;
    }
    else
    {
      v18 = 1;
      if ( !v46 )
        v18 = 4;
    }
    if ( (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
    {
      v19 = 0LL;
      v20 = 0LL;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL;
        LODWORD(v45) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v45);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        v22 = *(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) - 0x10000LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v14 + 24) = v22;
        v23 = v22 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v23 >= 0x10000 )
          break;
        if ( !v15 )
          v15 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
        ++v19;
        if ( !v23 && (unsigned int)MiPfnShareCountIsZero(v14) != 3 )
          ++v20;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v18 )
          goto LABEL_34;
        v14 = 48 * v21 - 0x220000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
      if ( v19 )
      {
        if ( (ULONG_PTR *)v15 != &MiSystemPartition )
          goto LABEL_65;
        v24 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v24->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_65;
        if ( v19 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v19 >= 0x80000 )
              break;
            v27 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v24->CachedResidentAvailable,
                    v19 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v26 = (_DWORD)CachedResidentAvailable == v27;
            LODWORD(CachedResidentAvailable) = v27;
            if ( v26 )
              goto LABEL_40;
          }
          while ( v27 != -1 && v19 + v27 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v24->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v19 += (int)CachedResidentAvailable - 192;
        }
        if ( v19 )
LABEL_65:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 16960), v19);
      }
LABEL_40:
      if ( v20 )
        MiReturnCommit(v15, v20);
      goto LABEL_42;
    }
LABEL_71:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      48 * v43 - 0x220000000000LL,
      *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  }
LABEL_42:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && v42 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << v47);
        v26 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  __writecr8(v42);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v13);
  v12->MdlFlags &= 0xF6FDu;
}
