/*
 * XREFs of MmUnlockPages @ 0x140244A70
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     ExUnlockUserBuffer @ 0x1402997FC (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x1402B76D0 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1403234C0 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     VslpUnlockPagesForTransfer @ 0x140394074 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403940C8 (VslpLockPagesForTransfer.c)
 *     IopUnlockAndFreeMdl @ 0x1403F11E0 (IopUnlockAndFreeMdl.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA4A8 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404EBB70 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x1404FE5F0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404FEC90 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x140524734 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x140546C38 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x1405836F4 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x140583CF0 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059FDA8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405A2A70 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405A2B10 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1405B1C80 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     AlpcpInitializeCompletionList @ 0x14067EC00 (AlpcpInitializeCompletionList.c)
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140686A08 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 *     sub_140688008 @ 0x140688008 (sub_140688008.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     AlpcpFreeCompletionList @ 0x1406C38D4 (AlpcpFreeCompletionList.c)
 *     CcMdlRead @ 0x1406D3BB0 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x1406D4FF8 (CcMdlReadComplete2.c)
 *     FsRtlpFreeMdlChain @ 0x14088C460 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D940 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D9E0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x14088EBF4 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14088FFD8 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x140891398 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C955C (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x1408CE44C (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6EEC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x140909F9C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A038 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x14095AA80 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x14095ADD0 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095B040 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF40 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableCharges @ 0x14026FD98 (MiUnlockPageTableCharges.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402921D0 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiZeroAndFlushPtes @ 0x140297640 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140297968 (MiDereferenceIoPages.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiDereferenceControlAreaProbe @ 0x1402F7AB0 (MiDereferenceControlAreaProbe.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x140530B30 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x140530CF0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055F060 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DC9C (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // bp
  PMDL v2; // rdi
  ULONG ByteOffset; // ecx
  char *StartVa; // r8
  __int64 ByteCount; // r9
  unsigned __int64 v7; // rsi
  char *MappedSystemVa; // rdi
  int v9; // r11d
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int16 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  struct _MDL *v28; // rsi
  int v29; // r13d
  unsigned __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // r15
  __int64 CurrentIrql; // r12
  __int64 v34; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 Next; // rdx
  unsigned __int64 CurrentPrcb; // r8
  __int64 v38; // rdi
  unsigned __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 BaseResidentPage; // r12
  __int64 v43; // r15
  char v44; // al
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  bool v48; // zf
  __int64 v49; // r10
  __int64 v50; // rax
  int v51; // ebp
  char v52; // al
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // r10
  __int64 v57; // rsi
  unsigned __int64 v58; // r9
  signed __int32 v59; // eax
  __int64 v60; // rdx
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  unsigned __int8 v64; // r10
  _DWORD *v65; // r9
  __int64 v66; // rbx
  __int64 v67; // r14
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  int v70; // ebp
  unsigned __int64 v71; // rdi
  __int64 v72; // r15
  __int64 v73; // rsi
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  struct _KPRCB *v76; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v78; // eax
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  PMDL v83; // [rsp+30h] [rbp-B8h]
  int v84; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v85; // [rsp+40h] [rbp-A8h]
  __int64 v86; // [rsp+48h] [rbp-A0h]
  struct _MDL *v87; // [rsp+58h] [rbp-90h]
  __int64 v88; // [rsp+60h] [rbp-88h]
  unsigned __int64 v89; // [rsp+68h] [rbp-80h]
  __int64 v90; // [rsp+70h] [rbp-78h]
  struct _EPROCESS *Process; // [rsp+78h] [rbp-70h]
  __int64 v92; // [rsp+80h] [rbp-68h]
  unsigned __int64 v93; // [rsp+88h] [rbp-60h]
  unsigned __int64 v94; // [rsp+90h] [rbp-58h]
  __int64 v95; // [rsp+98h] [rbp-50h]
  CSHORT v97; // [rsp+F8h] [rbp+10h]
  int v98; // [rsp+100h] [rbp+18h]
  int v99; // [rsp+108h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  v97 = MdlFlags;
  v83 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    ((void (*)(void))MiRetardMdl)();
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = (char *)MemoryDescriptorList->StartVa;
  ByteCount = MemoryDescriptorList->ByteCount;
  v7 = ((unsigned __int64)(((_WORD)StartVa + (_WORD)ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  v89 = v7;
  if ( (MdlFlags & 1) != 0 )
  {
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
    v9 = 0;
    if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    {
      v10 = MiRetardMdl(MemoryDescriptorList);
      ByteOffset = MemoryDescriptorList->ByteOffset;
      v9 = v10;
      StartVa = (char *)MemoryDescriptorList->StartVa;
      LODWORD(ByteCount) = MemoryDescriptorList->ByteCount;
    }
    v11 = ((((_WORD)StartVa + (_WORD)ByteOffset) & 0xFFF) + (unsigned __int64)(unsigned int)ByteCount + 4095) >> 12;
    if ( (unsigned __int64)MappedSystemVa > 0x7FFFFFFEFFFFLL )
    {
      v12 = (unsigned __int64)&MappedSystemVa[-v9];
      MemoryDescriptorList->MdlFlags &= 0xFFDEu;
      v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
        MemoryDescriptorList->MappedSystemVa = &StartVa[ByteOffset];
      v92 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v92;
      v15 = 4;
      v93 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v94 = ((v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = ((v94 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = 4LL;
      v95 = v16;
      do
      {
        v18 = (unsigned __int64)*(&Process + v17--);
        --v15;
        v19 = *(_QWORD *)v18;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL
          && v18 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v16, v19, v18, v14) )
        {
          if ( (v19 & 1) == 0 )
            break;
          if ( (v19 & 0x20) == 0 || (v19 & 0x42) == 0 )
          {
            v16 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v20 = *(_QWORD *)(v16 + 1928);
            if ( v20 )
            {
              v21 = *(_QWORD *)(v20 + 8 * ((v18 >> 3) & 0x1FF));
              v18 = v19 | 0x20;
              v16 = (unsigned __int8)v21;
              LOBYTE(v16) = v21 & 0x20;
              if ( (v21 & 0x20) == 0 )
                v18 = v19;
              LOBYTE(v19) = v18;
              if ( (v21 & 0x42) != 0 )
                LOBYTE(v19) = v18 | 0x42;
            }
          }
        }
        if ( (v19 & 1) == 0 )
          break;
        if ( (v19 & 0x80u) != 0LL )
          goto LABEL_26;
      }
      while ( v17 != 1 );
      v15 = 0;
LABEL_26:
      if ( v15 )
      {
        v16 = 0xFFFFF68000000000uLL;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v15;
        }
        while ( v15 );
      }
      v22 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v16, v22, v18, v14)
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v25 = v22 | 0x20;
          v26 = *((_QWORD *)&Flink->Flink + ((v23 >> 3) & 0x1FF));
          if ( (v26 & 0x20) == 0 )
            v25 = v22;
          LOWORD(v22) = v25;
          if ( (v26 & 0x42) != 0 )
            LOWORD(v22) = v25 | 0x42;
        }
      }
      if ( (v22 & 0x200) != 0 )
        MiZeroAndFlushPtes(v12, v11);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v11) = v11 + 1;
      if ( (dword_140CFB17C & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
      MiReleasePtes(&qword_140C4EF40, v13, (unsigned int)v11);
      v7 = v89;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace((ULONG_PTR)MappedSystemVa);
    }
    v2 = v83;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v27 = 0LL;
  v28 = (PMDL)((char *)v2 + 8 * v7);
  v29 = 1;
  v88 = 0LL;
  v87 = v28;
  v30 = 0LL;
  v98 = 1;
  v31 = 1;
  v85 = 0xFFFFFFFFFLL;
  v32 = 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v86 = CurrentIrql;
  __writecr8(2uLL);
  v34 = (unsigned __int8)v88 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v34 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    Next = (unsigned __int64)v2->Next;
    CurrentPrcb = 0x1000000000LL;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next, 1LL);
      goto LABEL_147;
    }
    v90 = 48 * Next;
    v38 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v39 = *(_QWORD *)(v38 + 40);
      if ( (v39 & 0x1000000000LL) == 0
        && ((v39 >> 60) & 7) != 1
        && (v39 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
        && v32 != (v39 & 0xFFFFFFFFFLL) )
      {
        if ( v32 != 0xFFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * v32 - 0x58000000000LL);
          v39 = *(_QWORD *)(v38 + 40);
        }
        v85 = v39 & 0xFFFFFFFFFLL;
        v98 = 2 - ((unsigned int)MI_PFN_IS_PROTO(v38) != 0);
      }
    }
    v99 = v27;
    v40 = v27;
    v41 = v27;
    BaseResidentPage = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v99);
        while ( *(__int64 *)(v38 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
      v27 = 0LL;
    }
    v43 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v38 + 40) >> 39) & 0x3FFLL));
    v44 = *(_BYTE *)(v38 + 34);
    if ( (v44 & 0x20) != 0 && (v44 & 8) == 0 && (*(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v41 = *(_QWORD *)v38 - 32LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v41 + 264));
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( !v41 )
      {
        v45 = *(_QWORD *)(v38 + 16);
        if ( (v45 & 0x400) == 0 && (*(_BYTE *)(v38 + 34) & 8) == 0 )
        {
          if ( (v45 & 4) != 0 )
          {
            v30 = MI_READ_PTE_LOCK_FREE(v38 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v38 + 16) = v45 & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else
          {
            v30 = v27;
          }
        }
        v40 = BaseResidentPage;
        *(_BYTE *)(v38 + 34) |= 0x10u;
      }
      if ( (*(_QWORD *)(v38 + 40) & 0x1000000000LL) == 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v38) )
        {
          v46 = *(_QWORD *)(v38 + 16);
          if ( (v46 & 0x400) != 0 )
          {
            if ( qword_140C4DF40 && (v46 & 0x10) == 0 )
              v46 &= ~qword_140C4DF40;
            v40 = *(_QWORD *)(v46 >> 16);
          }
        }
      }
    }
    v47 = *(unsigned __int16 *)(v38 + 32);
    if ( !(_WORD)v47 )
      MiBadRefCount(v38);
    v48 = (_WORD)v47 == 1;
    LOWORD(v47) = v47 - 1;
    *(_WORD *)(v38 + 32) = v47;
    if ( !v48 || !MiIsPfnFileOnly(v38) )
    {
      v49 = *(_QWORD *)(v38 + 40);
      if ( (v49 & 0x1000000000LL) != 0 || (v49 & 0x2000000000000LL) != 0 )
        goto LABEL_131;
      v50 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (_WORD)v47 )
      {
        if ( (_WORD)v47 != 1 )
        {
          if ( (_WORD)v47 != 2 || !v50 )
            goto LABEL_131;
          goto LABEL_99;
        }
        if ( !v50 )
        {
LABEL_99:
          if ( (*(_BYTE *)(v38 + 34) & 8) == 0 )
            goto LABEL_131;
        }
        v51 = 0;
      }
      else
      {
        v51 = 1;
      }
      v47 = 0xFFFFF68000000000uLL;
      CurrentPrcb = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
      if ( CurrentPrcb > 0xFFFFF6BFFFFFFF78uLL || CurrentPrcb < 0xFFFFF68000000000uLL )
      {
        v52 = *(_BYTE *)(v38 + 35);
        if ( (v52 & 0x20) != 0 )
        {
          *(_BYTE *)(v38 + 35) = v52 & 0xDF;
          goto LABEL_129;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v38) && (*(_DWORD *)(v38 + 16) & 0x400LL) != 0 )
      {
        v47 = 1LL;
      }
      else if ( CurrentPrcb <= v53 && CurrentPrcb >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v38 + 35) & 0x20) != 0 )
      {
        v47 = 1LL;
      }
      else if ( v51 == 1 && (v55 & 0x4000000000000000LL) != 0 )
      {
        v47 = 1LL;
      }
      v56 = (v54 >> 39) & 0x3FF;
      v57 = *(_QWORD *)(qword_140C4E648 + 8 * v56);
      if ( (_DWORD)v47 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v56), 1LL);
      v58 = 1LL;
      if ( (ULONG_PTR *)v57 == &MiSystemPartition )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v47 = *(int *)(CurrentPrcb + 33564);
        if ( (_DWORD)v47 != -1 )
        {
          if ( v47 + 1 <= 0x100 )
          {
            while ( 1 )
            {
              v59 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v47 + 1, v47);
              v48 = (_DWORD)v47 == v59;
              v47 = v59;
              if ( v48 )
                break;
              if ( v59 == -1 || (unsigned __int64)(v59 + 1LL) > 0x100 )
                goto LABEL_124;
            }
LABEL_129:
            if ( !v51 )
              goto LABEL_131;
            goto LABEL_130;
          }
LABEL_124:
          if ( (int)v47 > 192
            && (_DWORD)v47 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, v47) )
          {
            v58 = (int)v47 - 192 + 1LL;
          }
          if ( !v58 )
            goto LABEL_129;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 7168), v58);
      goto LABEL_129;
    }
LABEL_130:
    MiPfnReferenceCountIsZero(v38, v90 / 48);
LABEL_131:
    if ( (*(_QWORD *)(v38 + 40) & 0x1000000000LL) != 0
      && (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) != 0
      && *(_WORD *)(v38 + 32) == 2 )
    {
      *(_QWORD *)(v38 + 24) &= ~0x4000000000000000uLL;
      BaseResidentPage = MiGetBaseResidentPage(v38, v47, CurrentPrcb);
      v60 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFLL) - 1;
      *(_QWORD *)BaseResidentPage ^= (v60 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFFFFFLL;
      if ( BaseResidentPage != v38 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v60 )
        BaseResidentPage = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 )
    {
      MiReleasePageFileInfo(v43, v30, 1LL);
      v30 = 0LL;
    }
    if ( BaseResidentPage )
      MiFinishLargePageFree(BaseResidentPage, 1LL);
    if ( v40 )
      MiDereferenceControlAreaProbe(v40, 1LL);
    if ( (ULONG_PTR *)v43 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v43 + 2144));
    MdlFlags = v97;
    v34 = -1LL;
    LOBYTE(CurrentIrql) = v86;
    v28 = v87;
    v2 = v83;
    v32 = v85;
LABEL_147:
    v2 = (PMDL)((char *)v2 + 8);
    v83 = v2;
    if ( (++v88 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v2 >= v28 )
      {
        v31 = v98;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v61 = KeGetCurrentPrcb();
            v62 = v61->SchedulerAssist;
            v63 = ~(unsigned __int16)(v34 << ((unsigned __int8)CurrentIrql + 1));
            v48 = (v63 & v62[5]) == 0;
            v62[5] &= v63;
            if ( v48 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v64 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v64 <= 0xFu )
        {
          v65 = KeGetCurrentPrcb()->SchedulerAssist;
          v65[5] |= ((_DWORD)v34 << (v64 + 1)) & 4;
        }
        LOBYTE(CurrentIrql) = v64;
        v86 = v64;
      }
    }
    v31 = v98;
    v27 = 0LL;
  }
  while ( v2 < v28 );
  if ( v32 != 0xFFFFFFFFFLL )
  {
    v66 = 48 * v32 - 0x58000000000LL;
    v67 = 0LL;
    if ( v31 == 2 )
    {
      if ( (*(_BYTE *)(v66 + 34) & 7) != 6
        || (*(_QWORD *)(v66 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v68 = *(_QWORD *)(v66 + 8) | 0x8000000000000000uLL, v68 < 0xFFFFF68000000000uLL)
        || v68 > 0xFFFFF6FFFFFFFFFFuLL
        || (v69 = (__int64)(v68 << 25) >> 16, v69 < 0xFFFFF68000000000uLL)
        || v69 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = 0;
      }
      v70 = 3;
      if ( v29 )
        goto LABEL_178;
      goto LABEL_218;
    }
    v70 = 1;
    if ( !v31 )
      v70 = 4;
LABEL_178:
    if ( (*(_QWORD *)(v66 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_218:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v32 - 0x58000000000LL,
        *(_QWORD *)(v66 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v66 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v71 = 0LL;
    v72 = 0LL;
    while ( 1 )
    {
      v73 = *(_QWORD *)(v66 + 40) & 0xFFFFFFFFFLL;
      v84 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v84);
        while ( *(__int64 *)(v66 + 24) < 0 );
      }
      v74 = *(_QWORD *)(v66 + 24) ^ ((*(_QWORD *)(v66 + 24) - 0x10000LL) ^ *(_QWORD *)(v66 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v66 + 24) = v74;
      v75 = v74 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v75 >= 0x10000 )
        break;
      if ( !v67 )
        v67 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v66 + 40) >> 39) & 0x3FFLL));
      ++v71;
      if ( !v75 && (unsigned int)MiPfnShareCountIsZero(v66) != 3 )
        ++v72;
      _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v70 )
        goto LABEL_192;
      v66 = 48 * v73 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_192:
    if ( v71 )
    {
      if ( (ULONG_PTR *)v67 == &MiSystemPartition )
      {
        v76 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v76->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v71 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v71 >= 0x80000 )
                break;
              v78 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v76->CachedResidentAvailable,
                      v71 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v48 = (_DWORD)CachedResidentAvailable == v78;
              LODWORD(CachedResidentAvailable) = v78;
              if ( v48 )
                goto LABEL_205;
            }
            while ( v78 != -1 && v71 + v78 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v76->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v71 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v71 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v67 + 7168), v71);
    }
LABEL_205:
    if ( v72 )
      MiReturnCommit(v67, v72);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v79 = KeGetCurrentIrql();
      if ( v79 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v79 >= 2u )
      {
        v80 = KeGetCurrentPrcb();
        v81 = v80->SchedulerAssist;
        v82 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v48 = (v82 & v81[5]) == 0;
        v81[5] &= v82;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick(v80);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v89);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
