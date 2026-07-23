/*
 * XREFs of MmUnlockPages @ 0x1402E92C0
 * Callers:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x1402358B0 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x14024ACC0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14024E958 (CcMdlWriteComplete2.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     CcZeroDataInCache @ 0x140299A48 (CcZeroDataInCache.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x14032E210 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     IopUnlockAndFreeMdl @ 0x1403F1110 (IopUnlockAndFreeMdl.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA6E8 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404EBDB0 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x1404FE570 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404FEC10 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x140524974 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x140546E78 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x140583924 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x140583F20 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059FFD8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405A2CA0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405A2D40 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1405B1EB0 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     AlpcpInitializeCompletionList @ 0x1405D96A0 (AlpcpInitializeCompletionList.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1405E5B68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 *     sub_1405E7168 @ 0x1405E7168 (sub_1405E7168.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     AlpcpFreeCompletionList @ 0x1406224B4 (AlpcpFreeCompletionList.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     CcMdlRead @ 0x1406AAE90 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x1406AC2D8 (CcMdlReadComplete2.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     FsRtlpFreeMdlChain @ 0x14088C5C0 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DAA0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DB40 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x14088ED54 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140890138 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408914F8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x1408CE5AC (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E704C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x14090A0FC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A198 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x14095AC50 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095B210 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x140210140 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableCharges @ 0x14025DD38 (MiUnlockPageTableCharges.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiDereferenceControlAreaProbe @ 0x140302800 (MiDereferenceControlAreaProbe.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x140530D70 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x140530F30 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055F2A0 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DE5C (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // bp
  unsigned __int64 *v2; // rdi
  ULONG ByteOffset; // ecx
  char *StartVa; // r8
  unsigned __int64 ByteCount; // r9
  unsigned __int64 v7; // rsi
  PVOID MappedSystemVa; // rdi
  unsigned int v9; // r11d
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // r11
  __int64 *v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v21; // rax
  char v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  struct _LIST_ENTRY *v25; // rax
  __int16 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // r11
  unsigned __int64 *v29; // rsi
  int v30; // r13d
  unsigned __int64 v31; // rbx
  int v32; // r10d
  __int64 v33; // r15
  __int64 CurrentIrql; // r12
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
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
  signed __int32 v58; // eax
  __int64 v59; // rdx
  struct _KPRCB *v60; // r10
  int v61; // eax
  unsigned __int8 v62; // r10
  __int64 v63; // rbx
  __int64 v64; // r14
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  int v67; // ebp
  unsigned __int64 v68; // rdi
  __int64 v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  __int64 v73; // rdx
  signed __int32 v74; // eax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *SchedulerAssist; // r8
  int v78; // eax
  PMDL v79; // [rsp+30h] [rbp-B8h]
  int v80; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+40h] [rbp-A8h]
  __int64 v82; // [rsp+48h] [rbp-A0h]
  unsigned __int64 *v83; // [rsp+58h] [rbp-90h]
  __int64 v84; // [rsp+60h] [rbp-88h]
  unsigned __int64 v85; // [rsp+68h] [rbp-80h]
  __int64 v86; // [rsp+70h] [rbp-78h]
  struct _EPROCESS *Process; // [rsp+78h] [rbp-70h]
  __int64 v88; // [rsp+80h] [rbp-68h]
  unsigned __int64 v89; // [rsp+88h] [rbp-60h]
  unsigned __int64 v90; // [rsp+90h] [rbp-58h]
  __int64 v91; // [rsp+98h] [rbp-50h]
  CSHORT v93; // [rsp+F8h] [rbp+10h]
  int v94; // [rsp+100h] [rbp+18h]
  int v95; // [rsp+108h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = (unsigned __int64 *)&MemoryDescriptorList[1];
  Process = MemoryDescriptorList->Process;
  v93 = MdlFlags;
  v79 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = (char *)MemoryDescriptorList->StartVa;
  ByteCount = MemoryDescriptorList->ByteCount;
  v7 = ((((_WORD)StartVa + (_WORD)ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  v85 = v7;
  if ( (MdlFlags & 1) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
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
      v12 = (unsigned __int64)MappedSystemVa - v9;
      MemoryDescriptorList->MdlFlags &= 0xFFDEu;
      v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
        MemoryDescriptorList->MappedSystemVa = &StartVa[ByteOffset];
      v88 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v88;
      v15 = 4;
      v89 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v90 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = 4LL;
      v91 = ((v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v17 = (__int64 *)*(&Process + v16--);
        --v15;
        v18 = *v17;
        if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow() )
        {
          if ( (v18 & 1) == 0 )
            break;
          if ( (v18 & 0x20) == 0 || (v18 & 0x42) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v21 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
              v22 = v18 | 0x20;
              if ( (v21 & 0x20) == 0 )
                v22 = v18;
              LOBYTE(v18) = v22;
              if ( (v21 & 0x42) != 0 )
                LOBYTE(v18) = v22 | 0x42;
            }
          }
        }
        if ( (v18 & 1) == 0 )
          break;
        if ( (v18 & 0x80u) != 0LL )
          goto LABEL_26;
      }
      while ( v16 != 1 );
      v15 = 0;
LABEL_26:
      while ( v15 )
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v15;
      }
      v23 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v26 = v23 | 0x20;
          v27 = *((_QWORD *)&v25->Flink + ((v24 >> 3) & 0x1FF));
          if ( (v27 & 0x20) == 0 )
            v26 = v23;
          LOWORD(v23) = v26;
          if ( (v27 & 0x42) != 0 )
            LOWORD(v23) = v26 | 0x42;
        }
      }
      if ( (v23 & 0x200) != 0 )
        MiZeroAndFlushPtes(v12, v11);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v11) = v11 + 1;
      if ( (dword_140CFB17C & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
      MiReleasePtes(&qword_140C4EF80, v13, (unsigned int)v11);
      v7 = v85;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace((ULONG_PTR)MappedSystemVa);
    }
    v2 = (unsigned __int64 *)v79;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v28 = 0LL;
  v29 = &v2[v7];
  v30 = 1;
  v84 = 0LL;
  v83 = v29;
  v31 = 0LL;
  v94 = 1;
  v32 = 1;
  v81 = 0xFFFFFFFFFLL;
  v33 = 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v82 = CurrentIrql;
  __writecr8(2uLL);
  v35 = (unsigned __int8)v84 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    ByteCount = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
    *(_DWORD *)(ByteCount + 20) |= ((_DWORD)v35 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    v36 = *v2;
    CurrentPrcb = 0x1000000000LL;
    if ( *v2 == -1LL )
      break;
    ByteCount = 0xFFFFFFFFFLL;
    if ( v36 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v36 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0, v36, 1uLL);
      goto LABEL_146;
    }
    v86 = 48 * v36;
    v38 = 48 * v36 - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v39 = *(_QWORD *)(v38 + 40);
      if ( (v39 & 0x1000000000LL) == 0
        && ((v39 >> 60) & 7) != 1
        && (v39 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
        && v33 != (v39 & 0xFFFFFFFFFLL) )
      {
        if ( v33 != 0xFFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * v33 - 0x58000000000LL, v32, 0x1000000000LL, 0xFFFFFFFFFLL);
          v39 = *(_QWORD *)(v38 + 40);
        }
        v81 = v39 & 0xFFFFFFFFFLL;
        v94 = 2 - ((unsigned int)MI_PFN_IS_PROTO(v38) != 0);
      }
    }
    v95 = v28;
    v40 = v28;
    v41 = v28;
    BaseResidentPage = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v95);
        while ( *(__int64 *)(v38 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
      v28 = 0LL;
    }
    v43 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v38 + 40) >> 39) & 0x3FFLL));
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
            v31 = MI_READ_PTE_LOCK_FREE(v38 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v38 + 16) = v45 & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else
          {
            v31 = v28;
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
            if ( qword_140C4DF80 && (v46 & 0x10) == 0 )
              v46 &= ~qword_140C4DF80;
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
        goto LABEL_130;
      v50 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (_WORD)v47 )
      {
        if ( (_WORD)v47 != 1 )
        {
          if ( (_WORD)v47 != 2 || !v50 )
            goto LABEL_130;
          goto LABEL_98;
        }
        if ( !v50 )
        {
LABEL_98:
          if ( (*(_BYTE *)(v38 + 34) & 8) == 0 )
            goto LABEL_130;
        }
        v51 = 0;
      }
      else
      {
        v51 = 1;
      }
      v47 = 0xFFFFF68000000000uLL;
      ByteCount = 0xFFFFF6BFFFFFFF78uLL;
      CurrentPrcb = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
      if ( CurrentPrcb > 0xFFFFF6BFFFFFFF78uLL || CurrentPrcb < 0xFFFFF68000000000uLL )
      {
        v52 = *(_BYTE *)(v38 + 35);
        if ( (v52 & 0x20) != 0 )
        {
          *(_BYTE *)(v38 + 35) = v52 & 0xDF;
          goto LABEL_128;
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
      v57 = *(_QWORD *)(qword_140C4E688 + 8 * v56);
      if ( (_DWORD)v47 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v56), 1LL, CurrentPrcb, v53);
      ByteCount = 1LL;
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
              v58 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v47 + 1, v47);
              v48 = (_DWORD)v47 == v58;
              v47 = v58;
              if ( v48 )
                break;
              if ( v58 == -1 || (unsigned __int64)(v58 + 1LL) > 0x100 )
                goto LABEL_123;
            }
LABEL_128:
            if ( !v51 )
              goto LABEL_130;
            goto LABEL_129;
          }
LABEL_123:
          if ( (int)v47 > 192
            && (_DWORD)v47 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, v47) )
          {
            ByteCount = (int)v47 - 192 + 1LL;
          }
          if ( !ByteCount )
            goto LABEL_128;
        }
      }
      ByteCount = _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 7168), ByteCount);
      goto LABEL_128;
    }
LABEL_129:
    MiPfnReferenceCountIsZero(v38, v86 / 48);
LABEL_130:
    if ( (*(_QWORD *)(v38 + 40) & 0x1000000000LL) != 0
      && (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) != 0
      && *(_WORD *)(v38 + 32) == 2 )
    {
      *(_QWORD *)(v38 + 24) &= ~0x4000000000000000uLL;
      BaseResidentPage = MiGetBaseResidentPage(v38, v47, CurrentPrcb);
      CurrentPrcb = 0xFFFFFFFFFLL;
      v59 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFLL) - 1;
      *(_QWORD *)BaseResidentPage ^= (v59 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFFFFFLL;
      if ( BaseResidentPage != v38 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v59 )
        BaseResidentPage = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v31 )
    {
      MiReleasePageFileInfo(v43, v31, 1);
      v31 = 0LL;
    }
    if ( BaseResidentPage )
      MiFinishLargePageFree(BaseResidentPage, 1LL);
    if ( v40 )
      MiDereferenceControlAreaProbe(v40, 1LL);
    if ( (ULONG_PTR *)v43 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v43 + 2144));
    MdlFlags = v93;
    v35 = -1LL;
    LOBYTE(CurrentIrql) = v82;
    v29 = v83;
    v2 = (unsigned __int64 *)v79;
    v33 = v81;
LABEL_146:
    v79 = (PMDL)++v2;
    if ( (++v84 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v2 >= v29 )
      {
        v32 = v94;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v60 = KeGetCurrentPrcb();
            ByteCount = (unsigned __int64)v60->SchedulerAssist;
            v61 = ~(unsigned __int16)(v35 << ((unsigned __int8)CurrentIrql + 1));
            v48 = (v61 & *(_DWORD *)(ByteCount + 20)) == 0;
            CurrentPrcb = (unsigned int)v61 & *(_DWORD *)(ByteCount + 20);
            *(_DWORD *)(ByteCount + 20) = CurrentPrcb;
            if ( v48 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v62 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
        {
          ByteCount = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
          CurrentPrcb = ((_DWORD)v35 << (v62 + 1)) & 4u | *(_DWORD *)(ByteCount + 20);
          *(_DWORD *)(ByteCount + 20) = CurrentPrcb;
        }
        LOBYTE(CurrentIrql) = v62;
        v82 = v62;
      }
    }
    v32 = v94;
    v28 = 0LL;
  }
  while ( v2 < v29 );
  if ( v33 != 0xFFFFFFFFFLL )
  {
    v63 = 48 * v33 - 0x58000000000LL;
    v64 = 0LL;
    if ( v32 == 2 )
    {
      if ( (*(_BYTE *)(v63 + 34) & 7) != 6
        || (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v65 = *(_QWORD *)(v63 + 8) | 0x8000000000000000uLL,
            CurrentPrcb = 0xFFFFF68000000000uLL,
            v65 < 0xFFFFF68000000000uLL)
        || v65 > 0xFFFFF6FFFFFFFFFFuLL
        || (v66 = (__int64)(v65 << 25) >> 16, v66 < 0xFFFFF68000000000uLL)
        || v66 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v30 = 0;
      }
      v67 = 3;
      if ( v30 )
        goto LABEL_177;
      goto LABEL_217;
    }
    v67 = 1;
    if ( !v32 )
      v67 = 4;
LABEL_177:
    if ( (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_217:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v33 - 0x58000000000LL,
        *(_QWORD *)(v63 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v68 = 0LL;
    v69 = 0LL;
    while ( 1 )
    {
      v70 = *(_QWORD *)(v63 + 40) & 0xFFFFFFFFFLL;
      v80 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v80);
        while ( *(__int64 *)(v63 + 24) < 0 );
      }
      v71 = *(_QWORD *)(v63 + 24) ^ ((*(_QWORD *)(v63 + 24) - 0x10000LL) ^ *(_QWORD *)(v63 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v63 + 24) = v71;
      v72 = v71 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v72 >= 0x10000 )
        break;
      if ( !v64 )
        v64 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v63 + 40) >> 39) & 0x3FFLL));
      ++v68;
      if ( !v72 && (unsigned int)MiPfnShareCountIsZero(v63, 0LL) != 3 )
        ++v69;
      _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v67 )
        goto LABEL_191;
      v63 = 48 * v70 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_191:
    if ( v68 )
    {
      if ( (ULONG_PTR *)v64 == &MiSystemPartition )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v73 = *(int *)(CurrentPrcb + 33564);
        if ( (_DWORD)v73 != -1 )
        {
          ByteCount = 256LL;
          if ( v68 + v73 <= 0x100 )
          {
            do
            {
              if ( v68 >= 0x80000 )
                break;
              v74 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v68 + v73, v73);
              v48 = (_DWORD)v73 == v74;
              LODWORD(v73) = v74;
              if ( v48 )
                goto LABEL_204;
            }
            while ( v74 != -1 && v68 + v74 <= 0x100 );
          }
          ByteCount = 192LL;
          if ( (int)v73 > 192
            && (_DWORD)v73 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, v73) )
          {
            v68 += (int)v73 - 192;
          }
        }
      }
      if ( v68 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 7168), v68);
    }
LABEL_204:
    if ( v69 )
      MiReturnCommit(v64, v69, CurrentPrcb, ByteCount);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v75 = KeGetCurrentIrql();
      if ( v75 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v75 >= 2u )
      {
        v76 = KeGetCurrentPrcb();
        SchedulerAssist = v76->SchedulerAssist;
        v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v48 = (v78 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v78;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v85);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
