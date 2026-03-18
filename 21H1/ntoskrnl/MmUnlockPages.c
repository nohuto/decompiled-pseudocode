/*
 * XREFs of MmUnlockPages @ 0x1402471B0
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14028A9B0 (CcCopyBytesToUserBuffer.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x140307CE0 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1403201B4 (CcMdlWriteComplete2.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     VslpUnlockPagesForTransfer @ 0x140390BD4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140390C28 (VslpLockPagesForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x1404E4DD8 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404E64A0 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x1404F8B70 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404F9210 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x14051EC34 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x140541118 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x14057DC74 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x14057E270 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059A1E8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x14059CEB0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14059CF50 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1405AC030 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CD204 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     CcMdlRead @ 0x140640770 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x140644270 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x140676454 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140676E88 (AlpcpFreeCompletionList.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406EB818 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406ED14C @ 0x1406ED14C (sub_1406ED14C.c)
 *     PspGetSetContextInternal @ 0x1406F1830 (PspGetSetContextInternal.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     FsRtlpFreeMdlChain @ 0x140888050 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140889530 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408895D0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x14088A7E4 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088CF58 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x1408C9AFC (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CE874 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E2858 (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409058EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140955D70 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140956330 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDereferenceControlAreaProbe @ 0x1402B6F8C (MiDereferenceControlAreaProbe.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402ED500 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
 *     MiGetBaseResidentPage @ 0x1403EF724 (MiGetBaseResidentPage.c)
 *     MiFinishLargePageFree @ 0x1403F09F4 (MiFinishLargePageFree.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x14052B010 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x14052B1D0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140559570 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // bp
  unsigned __int64 *v2; // rdi
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
  __int64 *v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int16 v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // r11
  unsigned __int64 *v30; // rsi
  int v31; // r13d
  unsigned __int64 v32; // rbx
  int v33; // r10d
  __int64 v34; // r15
  __int64 CurrentIrql; // r12
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  unsigned __int64 CurrentPrcb; // r8
  __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 BaseResidentPage; // r12
  __int64 v44; // r15
  char v45; // al
  __int64 v46; // rsi
  __int64 v47; // rax
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
  signed __int32 v58; // eax
  struct _KPRCB *v59; // r10
  int v60; // eax
  unsigned __int8 v61; // r10
  __int64 v62; // rbx
  __int64 v63; // r14
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  int v66; // ebp
  unsigned __int64 v67; // rdi
  __int64 v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdx
  struct _KPRCB *v71; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  _DWORD *SchedulerAssist; // r8
  int v77; // eax
  PMDL v78; // [rsp+30h] [rbp-B8h]
  int v79; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+40h] [rbp-A8h]
  __int64 v81; // [rsp+48h] [rbp-A0h]
  unsigned __int64 *v82; // [rsp+58h] [rbp-90h]
  __int64 v83; // [rsp+60h] [rbp-88h]
  unsigned __int64 v84; // [rsp+68h] [rbp-80h]
  __int64 v85; // [rsp+70h] [rbp-78h]
  struct _EPROCESS *Process; // [rsp+78h] [rbp-70h]
  __int64 v87; // [rsp+80h] [rbp-68h]
  unsigned __int64 v88; // [rsp+88h] [rbp-60h]
  unsigned __int64 v89; // [rsp+90h] [rbp-58h]
  __int64 v90; // [rsp+98h] [rbp-50h]
  CSHORT v92; // [rsp+F8h] [rbp+10h]
  int v93; // [rsp+100h] [rbp+18h]
  int v94; // [rsp+108h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = (unsigned __int64 *)&MemoryDescriptorList[1];
  Process = MemoryDescriptorList->Process;
  v92 = MdlFlags;
  v78 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    ((void (*)(void))MiRetardMdl)();
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = (char *)MemoryDescriptorList->StartVa;
  ByteCount = MemoryDescriptorList->ByteCount;
  v7 = ((unsigned __int64)(((_WORD)StartVa + (_WORD)ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  v84 = v7;
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
      v87 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v87;
      v15 = 4;
      v88 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v89 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = 4LL;
      v90 = v16;
      do
      {
        v18 = (__int64 *)*(&Process + v17--);
        --v15;
        v19 = *v18;
        if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v16, v19) )
        {
          if ( (v19 & 1) == 0 )
            break;
          if ( (v19 & 0x20) == 0 || (v19 & 0x42) == 0 )
          {
            v16 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v21 = *(_QWORD *)(v16 + 1928);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 8 * ((v20 >> 3) & 0x1FF));
              v23 = v19 | 0x20;
              v16 = (unsigned __int8)v22;
              LOBYTE(v16) = v22 & 0x20;
              if ( (v22 & 0x20) == 0 )
                v23 = v19;
              LOBYTE(v19) = v23;
              if ( (v22 & 0x42) != 0 )
                LOBYTE(v19) = v23 | 0x42;
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
      v24 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v16, v24)
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v27 = v24 | 0x20;
          v28 = *((_QWORD *)&Flink->Flink + ((v25 >> 3) & 0x1FF));
          if ( (v28 & 0x20) == 0 )
            v27 = v24;
          LOWORD(v24) = v27;
          if ( (v28 & 0x42) != 0 )
            LOWORD(v24) = v27 | 0x42;
        }
      }
      if ( (v24 & 0x200) != 0 )
        MiZeroAndFlushPtes(v12, v11);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v11) = v11 + 1;
      if ( (dword_140CFB17C & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
      MiReleasePtes(&qword_140C4EE80, v13, (unsigned int)v11);
      v7 = v84;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace((ULONG_PTR)MappedSystemVa);
    }
    v2 = (unsigned __int64 *)v78;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v29 = 0LL;
  v30 = &v2[v7];
  v31 = 1;
  v83 = 0LL;
  v82 = v30;
  v32 = 0LL;
  v93 = 1;
  v33 = 1;
  v80 = 0xFFFFFFFFFLL;
  v34 = 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v81 = CurrentIrql;
  __writecr8(2uLL);
  v36 = (unsigned __int8)v83 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    ByteCount = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    *(_DWORD *)(ByteCount + 20) |= ((_DWORD)v36 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    v37 = *v2;
    CurrentPrcb = 0x1000000000LL;
    if ( *v2 == -1LL )
      break;
    ByteCount = 0xFFFFFFFFFLL;
    if ( v37 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v37 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, v37, 1LL);
      goto LABEL_147;
    }
    v85 = 48 * v37;
    v39 = 48 * v37 - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v40 = *(_QWORD *)(v39 + 40);
      if ( (v40 & 0x1000000000LL) == 0 && ((v40 >> 60) & 7) != 1 )
      {
        v37 = 0xFFFFFFFFDLL;
        if ( (v40 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL && v34 != (v40 & 0xFFFFFFFFFLL) )
        {
          if ( v34 != 0xFFFFFFFFFLL )
          {
            MiUnlockPageTableCharges(48 * v34 - 0x58000000000LL);
            v40 = *(_QWORD *)(v39 + 40);
          }
          v80 = v40 & 0xFFFFFFFFFLL;
          v93 = 2 - ((unsigned int)MI_PFN_IS_PROTO(v39, v37, CurrentPrcb) != 0);
        }
      }
    }
    v94 = v29;
    v41 = v29;
    v42 = v29;
    BaseResidentPage = v29;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v94, v37, CurrentPrcb, ByteCount);
        while ( *(__int64 *)(v39 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
      v29 = 0LL;
    }
    v44 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v39 + 40) >> 39) & 0x3FFLL));
    v45 = *(_BYTE *)(v39 + 34);
    if ( (v45 & 0x20) != 0 && (v45 & 8) == 0 && (*(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v42 = *(_QWORD *)v39 - 32LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v42 + 264));
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( !v42 )
      {
        v46 = *(_QWORD *)(v39 + 16);
        if ( (v46 & 0x400) == 0 && (*(_BYTE *)(v39 + 34) & 8) == 0 )
        {
          if ( (v46 & 4) != 0 )
          {
            v32 = MI_READ_PTE_LOCK_FREE(v39 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v39 + 16) = v46 & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else
          {
            v32 = v29;
          }
        }
        v41 = BaseResidentPage;
        *(_BYTE *)(v39 + 34) |= 0x10u;
      }
      if ( (*(_QWORD *)(v39 + 40) & 0x1000000000LL) == 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v39, v37, CurrentPrcb) )
        {
          v47 = *(_QWORD *)(v39 + 16);
          if ( (v47 & 0x400) != 0 )
          {
            if ( qword_140C4DE80 && (v47 & 0x10) == 0 )
              v47 &= ~qword_140C4DE80;
            v41 = *(_QWORD *)(v47 >> 16);
          }
        }
      }
    }
    v37 = *(unsigned __int16 *)(v39 + 32);
    if ( !(_WORD)v37 )
      MiBadRefCount(v39);
    v48 = (_WORD)v37 == 1;
    LOWORD(v37) = v37 - 1;
    *(_WORD *)(v39 + 32) = v37;
    if ( !v48 || !MiIsPfnFileOnly(v39) )
    {
      v49 = *(_QWORD *)(v39 + 40);
      if ( (v49 & 0x1000000000LL) != 0 || (v49 & 0x2000000000000LL) != 0 )
        goto LABEL_131;
      v50 = *(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (_WORD)v37 )
      {
        if ( (_WORD)v37 != 1 )
        {
          if ( (_WORD)v37 != 2 || !v50 )
            goto LABEL_131;
          goto LABEL_99;
        }
        if ( !v50 )
        {
LABEL_99:
          if ( (*(_BYTE *)(v39 + 34) & 8) == 0 )
            goto LABEL_131;
        }
        v51 = 0;
      }
      else
      {
        v51 = 1;
      }
      v37 = 0xFFFFF68000000000uLL;
      ByteCount = 0xFFFFF6BFFFFFFF78uLL;
      CurrentPrcb = *(_QWORD *)(v39 + 8) | 0x8000000000000000uLL;
      if ( CurrentPrcb > 0xFFFFF6BFFFFFFF78uLL || CurrentPrcb < 0xFFFFF68000000000uLL )
      {
        v52 = *(_BYTE *)(v39 + 35);
        if ( (v52 & 0x20) != 0 )
        {
          *(_BYTE *)(v39 + 35) = v52 & 0xDF;
          goto LABEL_129;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v39, 0LL, CurrentPrcb) && (*(_DWORD *)(v39 + 16) & 0x400LL) != 0 )
      {
        v37 = 1LL;
      }
      else if ( CurrentPrcb <= v53 && CurrentPrcb >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v39 + 35) & 0x20) != 0 )
      {
        v37 = 1LL;
      }
      else if ( v51 == 1 && (v55 & 0x4000000000000000LL) != 0 )
      {
        v37 = 1LL;
      }
      v56 = (v54 >> 39) & 0x3FF;
      v57 = *(_QWORD *)(qword_140C4E588 + 8 * v56);
      if ( (_DWORD)v37 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v56), 1LL);
      ByteCount = 1LL;
      if ( (ULONG_PTR *)v57 == &MiSystemPartition )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v37 = *(int *)(CurrentPrcb + 33564);
        if ( (_DWORD)v37 != -1 )
        {
          if ( v37 + 1 <= 0x100 )
          {
            while ( 1 )
            {
              v58 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v37 + 1, v37);
              v48 = (_DWORD)v37 == v58;
              v37 = v58;
              if ( v48 )
                break;
              if ( v58 == -1 || (unsigned __int64)(v58 + 1LL) > 0x100 )
                goto LABEL_124;
            }
LABEL_129:
            if ( !v51 )
              goto LABEL_131;
            goto LABEL_130;
          }
LABEL_124:
          if ( (int)v37 > 192
            && (_DWORD)v37 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, v37) )
          {
            ByteCount = (int)v37 - 192 + 1LL;
          }
          if ( !ByteCount )
            goto LABEL_129;
        }
      }
      ByteCount = _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 7168), ByteCount);
      goto LABEL_129;
    }
LABEL_130:
    MiPfnReferenceCountIsZero(v39, v85 / 48);
LABEL_131:
    if ( (*(_QWORD *)(v39 + 40) & 0x1000000000LL) != 0
      && (*(_QWORD *)(v39 + 24) & 0x4000000000000000LL) != 0
      && *(_WORD *)(v39 + 32) == 2 )
    {
      *(_QWORD *)(v39 + 24) &= ~0x4000000000000000uLL;
      BaseResidentPage = MiGetBaseResidentPage(v39, v37, CurrentPrcb);
      CurrentPrcb = 0xFFFFFFFFFLL;
      v37 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFLL) - 1;
      *(_QWORD *)BaseResidentPage ^= (v37 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFFFFFLL;
      if ( BaseResidentPage != v39 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v37 )
        BaseResidentPage = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v32 )
    {
      MiReleasePageFileInfo(v44, v32, 1LL);
      v32 = 0LL;
    }
    if ( BaseResidentPage )
      MiFinishLargePageFree(BaseResidentPage, 1LL);
    if ( v41 )
      MiDereferenceControlAreaProbe(v41, 1LL);
    if ( (ULONG_PTR *)v44 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 2144));
    MdlFlags = v92;
    v36 = -1LL;
    LOBYTE(CurrentIrql) = v81;
    v30 = v82;
    v2 = (unsigned __int64 *)v78;
    v34 = v80;
LABEL_147:
    v78 = (PMDL)++v2;
    if ( (++v83 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v2 >= v30 )
      {
        v33 = v93;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v59 = KeGetCurrentPrcb();
            v37 = v36 << ((unsigned __int8)CurrentIrql + 1);
            ByteCount = (__int64)v59->SchedulerAssist;
            v60 = ~(unsigned __int16)v37;
            v48 = (v60 & *(_DWORD *)(ByteCount + 20)) == 0;
            CurrentPrcb = (unsigned int)v60 & *(_DWORD *)(ByteCount + 20);
            *(_DWORD *)(ByteCount + 20) = CurrentPrcb;
            if ( v48 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v61 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v61 <= 0xFu )
        {
          ByteCount = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          v37 = (v36 << (v61 + 1)) & 4;
          CurrentPrcb = (unsigned int)v37 | *(_DWORD *)(ByteCount + 20);
          *(_DWORD *)(ByteCount + 20) = CurrentPrcb;
        }
        LOBYTE(CurrentIrql) = v61;
        v81 = v61;
      }
    }
    v33 = v93;
    v29 = 0LL;
  }
  while ( v2 < v30 );
  if ( v34 != 0xFFFFFFFFFLL )
  {
    v62 = 48 * v34 - 0x58000000000LL;
    v63 = 0LL;
    if ( v33 == 2 )
    {
      if ( (*(_BYTE *)(v62 + 34) & 7) != 6
        || (v37 = 0x3FFFFFFFFFFFFFFFLL, (*(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0)
        || (v64 = *(_QWORD *)(v62 + 8) | 0x8000000000000000uLL,
            CurrentPrcb = 0xFFFFF68000000000uLL,
            v64 < 0xFFFFF68000000000uLL)
        || (v37 = 0xFFFFF6FFFFFFFFFFuLL, v64 > 0xFFFFF6FFFFFFFFFFuLL)
        || (v65 = (__int64)(v64 << 25) >> 16, v65 < 0xFFFFF68000000000uLL)
        || v65 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v31 = 0;
      }
      v66 = 3;
      if ( v31 )
        goto LABEL_178;
      goto LABEL_218;
    }
    v66 = 1;
    if ( !v33 )
      v66 = 4;
LABEL_178:
    if ( (*(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_218:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v34 - 0x58000000000LL,
        *(_QWORD *)(v62 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v67 = 0LL;
    v68 = 0LL;
    while ( 1 )
    {
      v69 = *(_QWORD *)(v62 + 40) & 0xFFFFFFFFFLL;
      v79 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v79, v37, CurrentPrcb, ByteCount);
        while ( *(__int64 *)(v62 + 24) < 0 );
      }
      v70 = *(_QWORD *)(v62 + 24) ^ ((*(_QWORD *)(v62 + 24) - 0x10000LL) ^ *(_QWORD *)(v62 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v62 + 24) = v70;
      v37 = v70 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v37 >= 0x10000 )
        break;
      if ( !v63 )
        v63 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v62 + 40) >> 39) & 0x3FFLL));
      ++v67;
      if ( !v37 && (unsigned int)MiPfnShareCountIsZero(v62) != 3 )
        ++v68;
      _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v66 )
        goto LABEL_192;
      v62 = 48 * v69 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_192:
    if ( v67 )
    {
      if ( (ULONG_PTR *)v63 == &MiSystemPartition )
      {
        v71 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v71->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v67 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v67 >= 0x80000 )
                break;
              v73 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v71->CachedResidentAvailable,
                      v67 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v48 = (_DWORD)CachedResidentAvailable == v73;
              LODWORD(CachedResidentAvailable) = v73;
              if ( v48 )
                goto LABEL_205;
            }
            while ( v73 != -1 && v67 + v73 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v71->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v67 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v67 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v63 + 7168), v67);
    }
LABEL_205:
    if ( v68 )
      MiReturnCommit(v63, v68);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v74 >= 2u )
      {
        v75 = KeGetCurrentPrcb();
        SchedulerAssist = v75->SchedulerAssist;
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v48 = (v77 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v77;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick(v75);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v84);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
