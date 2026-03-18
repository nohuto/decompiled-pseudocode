/*
 * XREFs of MmUnlockPages @ 0x1402936A0
 * Callers:
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     ExUnlockUserBuffer @ 0x14025EE10 (ExUnlockUserBuffer.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1402A6C10 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiProbeAndLockComplete @ 0x140316E30 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     VslpUnlockPagesForTransfer @ 0x140393C04 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140393C58 (VslpLockPagesForTransfer.c)
 *     IopUnlockAndFreeMdl @ 0x1403F04DC (IopUnlockAndFreeMdl.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404E9FE0 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x1404FCA50 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404FD0F0 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x140522C54 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x140545138 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x140581CE4 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405822E0 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059E378 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405A1040 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405A10E0 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1405B0280 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MmCopyVirtualMemory @ 0x140679AB0 (MmCopyVirtualMemory.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspGetSetContextInternal @ 0x140687060 (PspGetSetContextInternal.c)
 *     CcMdlReadComplete2 @ 0x1406CF87C (CcMdlReadComplete2.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E1A68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406E3154 @ 0x1406E3154 (sub_1406E3154.c)
 *     AlpcpFreeCompletionList @ 0x1406E3BE4 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x14070FBF4 (AlpcpInitializeCompletionList.c)
 *     FsRtlpFreeMdlChain @ 0x14088EEC0 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408903A0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140890440 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x140891654 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140892A08 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x140893DC8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x1408D0C8C (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E96EC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x14090C7EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092C868 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x14095D200 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x14095D550 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095D7C0 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDereferenceControlAreaProbe @ 0x1402D104C (MiDereferenceControlAreaProbe.c)
 *     MiUnlockPageTableCharges @ 0x1402D3FC8 (MiUnlockPageTableCharges.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402F6550 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 *     MiGetBaseResidentPage @ 0x1403F4F98 (MiGetBaseResidentPage.c)
 *     MiFinishLargePageFree @ 0x1403F6268 (MiFinishLargePageFree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x14052F030 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x14052F1F0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055D590 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140769C5C (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // bp
  unsigned __int64 *v2; // rdi
  ULONG ByteOffset; // ecx
  char *StartVa; // r8
  __int64 ByteCount; // r9
  unsigned __int64 v7; // rsi
  PVOID MappedSystemVa; // rdi
  unsigned int v9; // r11d
  unsigned int v10; // eax
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
  unsigned __int64 *v28; // rsi
  int v29; // r13d
  unsigned __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // r15
  __int64 CurrentIrql; // r12
  __int64 v34; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 BaseResidentPage; // r12
  __int64 v42; // r15
  char v43; // al
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v47; // zf
  __int64 v48; // r10
  __int64 v49; // rax
  int v50; // ebp
  unsigned __int64 v51; // r8
  char v52; // al
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 v58; // rsi
  unsigned __int64 v59; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 v61; // eax
  __int64 v62; // rdx
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  unsigned __int8 v66; // r10
  _DWORD *v67; // r9
  __int64 v68; // rbx
  __int64 v69; // r14
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  int v72; // ebp
  unsigned __int64 v73; // rdi
  __int64 v74; // r15
  __int64 v75; // rsi
  __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  struct _KPRCB *v78; // r8
  __int64 v79; // rdx
  signed __int32 v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  PMDL v85; // [rsp+30h] [rbp-B8h]
  int v86; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+40h] [rbp-A8h]
  __int64 v88; // [rsp+48h] [rbp-A0h]
  unsigned __int64 *v89; // [rsp+58h] [rbp-90h]
  __int64 v90; // [rsp+60h] [rbp-88h]
  unsigned __int64 v91; // [rsp+68h] [rbp-80h]
  __int64 v92; // [rsp+70h] [rbp-78h]
  struct _EPROCESS *Process; // [rsp+78h] [rbp-70h]
  __int64 v94; // [rsp+80h] [rbp-68h]
  unsigned __int64 v95; // [rsp+88h] [rbp-60h]
  unsigned __int64 v96; // [rsp+90h] [rbp-58h]
  __int64 v97; // [rsp+98h] [rbp-50h]
  CSHORT v99; // [rsp+F8h] [rbp+10h]
  int v100; // [rsp+100h] [rbp+18h]
  int v101; // [rsp+108h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = (unsigned __int64 *)&MemoryDescriptorList[1];
  Process = MemoryDescriptorList->Process;
  v99 = MdlFlags;
  v85 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    ((void (*)(void))MiRetardMdl)();
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = (char *)MemoryDescriptorList->StartVa;
  ByteCount = MemoryDescriptorList->ByteCount;
  v7 = ((unsigned __int64)(((_WORD)StartVa + (_WORD)ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  v91 = v7;
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
      v94 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v94;
      v15 = 4;
      v95 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v96 = ((v95 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = ((v96 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = 4LL;
      v97 = v16;
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
      MiReleasePtes(&qword_140C4EDC0, v13, (unsigned int)v11);
      v7 = v91;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace((ULONG_PTR)MappedSystemVa);
    }
    v2 = (unsigned __int64 *)v85;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v27 = 0LL;
  v28 = &v2[v7];
  v29 = 1;
  v90 = 0LL;
  v89 = v28;
  v30 = 0LL;
  v100 = 1;
  v31 = 1;
  v87 = 0xFFFFFFFFFLL;
  v32 = 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v88 = CurrentIrql;
  __writecr8(2uLL);
  v34 = (unsigned __int8)v90 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v34 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    v36 = *v2;
    if ( *v2 == -1LL )
      break;
    if ( v36 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v36 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0, v36, 1uLL);
      goto LABEL_147;
    }
    v92 = 48 * v36;
    v37 = 48 * v36 - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v38 = *(_QWORD *)(v37 + 40);
      if ( (v38 & 0x1000000000LL) == 0
        && ((v38 >> 60) & 7) != 1
        && (v38 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
        && v32 != (v38 & 0xFFFFFFFFFLL) )
      {
        if ( v32 != 0xFFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * v32 - 0x58000000000LL);
          v38 = *(_QWORD *)(v37 + 40);
        }
        v87 = v38 & 0xFFFFFFFFFLL;
        v100 = 2 - ((unsigned int)MI_PFN_IS_PROTO(v37) != 0);
      }
    }
    v101 = v27;
    v39 = v27;
    v40 = v27;
    BaseResidentPage = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v101);
        while ( *(__int64 *)(v37 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
      v27 = 0LL;
    }
    v42 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v37 + 40) >> 39) & 0x3FFLL));
    v43 = *(_BYTE *)(v37 + 34);
    if ( (v43 & 0x20) != 0 && (v43 & 8) == 0 && (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v40 = *(_QWORD *)v37 - 32LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v40 + 264));
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( !v40 )
      {
        v44 = *(_QWORD *)(v37 + 16);
        if ( (v44 & 0x400) == 0 && (*(_BYTE *)(v37 + 34) & 8) == 0 )
        {
          if ( (v44 & 4) != 0 )
          {
            v30 = MI_READ_PTE_LOCK_FREE(v37 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v37 + 16) = v44 & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else
          {
            v30 = v27;
          }
        }
        v39 = BaseResidentPage;
        *(_BYTE *)(v37 + 34) |= 0x10u;
      }
      if ( (*(_QWORD *)(v37 + 40) & 0x1000000000LL) == 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v37) )
        {
          v45 = *(_QWORD *)(v37 + 16);
          if ( (v45 & 0x400) != 0 )
          {
            if ( qword_140C4DDC0 && (v45 & 0x10) == 0 )
              v45 &= ~qword_140C4DDC0;
            v39 = *(_QWORD *)(v45 >> 16);
          }
        }
      }
    }
    CachedResidentAvailable = *(unsigned __int16 *)(v37 + 32);
    if ( !(_WORD)CachedResidentAvailable )
      MiBadRefCount(v37);
    v47 = (_WORD)CachedResidentAvailable == 1;
    LOWORD(CachedResidentAvailable) = CachedResidentAvailable - 1;
    *(_WORD *)(v37 + 32) = CachedResidentAvailable;
    if ( !v47 || !MiIsPfnFileOnly(v37) )
    {
      v48 = *(_QWORD *)(v37 + 40);
      if ( (v48 & 0x1000000000LL) != 0 || (v48 & 0x2000000000000LL) != 0 )
        goto LABEL_131;
      v49 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (_WORD)CachedResidentAvailable )
      {
        if ( (_WORD)CachedResidentAvailable != 1 )
        {
          if ( (_WORD)CachedResidentAvailable != 2 || !v49 )
            goto LABEL_131;
          goto LABEL_99;
        }
        if ( !v49 )
        {
LABEL_99:
          if ( (*(_BYTE *)(v37 + 34) & 8) == 0 )
            goto LABEL_131;
        }
        v50 = 0;
      }
      else
      {
        v50 = 1;
      }
      CachedResidentAvailable = 0xFFFFF68000000000uLL;
      v51 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
      if ( v51 > 0xFFFFF6BFFFFFFF78uLL || v51 < 0xFFFFF68000000000uLL )
      {
        v52 = *(_BYTE *)(v37 + 35);
        if ( (v52 & 0x20) != 0 )
        {
          *(_BYTE *)(v37 + 35) = v52 & 0xDF;
          goto LABEL_129;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v37) && (*(_DWORD *)(v37 + 16) & 0x400LL) != 0 )
      {
        CachedResidentAvailable = 1LL;
      }
      else if ( v53 <= v54 && v53 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v37 + 35) & 0x20) != 0 )
      {
        CachedResidentAvailable = 1LL;
      }
      else if ( v50 == 1 && (v56 & 0x4000000000000000LL) != 0 )
      {
        CachedResidentAvailable = 1LL;
      }
      v57 = (v55 >> 39) & 0x3FF;
      v58 = *(_QWORD *)(qword_140C4E4C8 + 8 * v57);
      if ( (_DWORD)CachedResidentAvailable == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v57), 1LL);
      v59 = 1LL;
      if ( (ULONG_PTR *)v58 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( CachedResidentAvailable + 1 <= 0x100 )
          {
            while ( 1 )
            {
              v61 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v47 = (_DWORD)CachedResidentAvailable == v61;
              CachedResidentAvailable = v61;
              if ( v47 )
                break;
              if ( v61 == -1 || (unsigned __int64)(v61 + 1LL) > 0x100 )
                goto LABEL_124;
            }
LABEL_129:
            if ( !v50 )
              goto LABEL_131;
            goto LABEL_130;
          }
LABEL_124:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v59 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v59 )
            goto LABEL_129;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 7168), v59);
      goto LABEL_129;
    }
LABEL_130:
    MiPfnReferenceCountIsZero(v37, v92 / 48);
LABEL_131:
    if ( (*(_QWORD *)(v37 + 40) & 0x1000000000LL) != 0
      && (*(_QWORD *)(v37 + 24) & 0x4000000000000000LL) != 0
      && *(_WORD *)(v37 + 32) == 2 )
    {
      *(_QWORD *)(v37 + 24) &= ~0x4000000000000000uLL;
      BaseResidentPage = MiGetBaseResidentPage(v37, CachedResidentAvailable);
      v62 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFLL) - 1;
      *(_QWORD *)BaseResidentPage ^= (v62 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFFFFFLL;
      if ( BaseResidentPage != v37 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v62 )
        BaseResidentPage = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 )
    {
      MiReleasePageFileInfo(v42, v30, 1LL);
      v30 = 0LL;
    }
    if ( BaseResidentPage )
      MiFinishLargePageFree(BaseResidentPage, 1LL);
    if ( v39 )
      MiDereferenceControlAreaProbe(v39, 1LL);
    if ( (ULONG_PTR *)v42 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + 2144));
    MdlFlags = v99;
    v34 = -1LL;
    LOBYTE(CurrentIrql) = v88;
    v28 = v89;
    v2 = (unsigned __int64 *)v85;
    v32 = v87;
LABEL_147:
    v85 = (PMDL)++v2;
    if ( (++v90 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v2 >= v28 )
      {
        v31 = v100;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v63 = KeGetCurrentPrcb();
            v64 = v63->SchedulerAssist;
            v65 = ~(unsigned __int16)(v34 << ((unsigned __int8)CurrentIrql + 1));
            v47 = (v65 & v64[5]) == 0;
            v64[5] &= v65;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v66 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v66 <= 0xFu )
        {
          v67 = KeGetCurrentPrcb()->SchedulerAssist;
          v67[5] |= ((_DWORD)v34 << (v66 + 1)) & 4;
        }
        LOBYTE(CurrentIrql) = v66;
        v88 = v66;
      }
    }
    v31 = v100;
    v27 = 0LL;
  }
  while ( v2 < v28 );
  if ( v32 != 0xFFFFFFFFFLL )
  {
    v68 = 48 * v32 - 0x58000000000LL;
    v69 = 0LL;
    if ( v31 == 2 )
    {
      if ( (*(_BYTE *)(v68 + 34) & 7) != 6
        || (*(_QWORD *)(v68 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v70 = *(_QWORD *)(v68 + 8) | 0x8000000000000000uLL, v70 < 0xFFFFF68000000000uLL)
        || v70 > 0xFFFFF6FFFFFFFFFFuLL
        || (v71 = (__int64)(v70 << 25) >> 16, v71 < 0xFFFFF68000000000uLL)
        || v71 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = 0;
      }
      v72 = 3;
      if ( v29 )
        goto LABEL_178;
      goto LABEL_218;
    }
    v72 = 1;
    if ( !v31 )
      v72 = 4;
LABEL_178:
    if ( (*(_QWORD *)(v68 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_218:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v32 - 0x58000000000LL,
        *(_QWORD *)(v68 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v68 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v73 = 0LL;
    v74 = 0LL;
    while ( 1 )
    {
      v75 = *(_QWORD *)(v68 + 40) & 0xFFFFFFFFFLL;
      v86 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v86);
        while ( *(__int64 *)(v68 + 24) < 0 );
      }
      v76 = *(_QWORD *)(v68 + 24) ^ ((*(_QWORD *)(v68 + 24) - 0x10000LL) ^ *(_QWORD *)(v68 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v68 + 24) = v76;
      v77 = v76 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v77 >= 0x10000 )
        break;
      if ( !v69 )
        v69 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v68 + 40) >> 39) & 0x3FFLL));
      ++v73;
      if ( !v77 && (unsigned int)MiPfnShareCountIsZero(v68) != 3 )
        ++v74;
      _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v72 )
        goto LABEL_192;
      v68 = 48 * v75 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_192:
    if ( v73 )
    {
      if ( (ULONG_PTR *)v69 == &MiSystemPartition )
      {
        v78 = KeGetCurrentPrcb();
        v79 = (int)v78->CachedResidentAvailable;
        if ( (_DWORD)v79 != -1 )
        {
          if ( v73 + v79 <= 0x100 )
          {
            do
            {
              if ( v73 >= 0x80000 )
                break;
              v80 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v78->CachedResidentAvailable,
                      v73 + v79,
                      v79);
              v47 = (_DWORD)v79 == v80;
              LODWORD(v79) = v80;
              if ( v47 )
                goto LABEL_205;
            }
            while ( v80 != -1 && v73 + v80 <= 0x100 );
          }
          if ( (int)v79 > 192
            && (_DWORD)v79 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v78->CachedResidentAvailable,
                                192,
                                v79) )
          {
            v73 += (int)v79 - 192;
          }
        }
      }
      if ( v73 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 7168), v73);
    }
LABEL_205:
    if ( v74 )
      MiReturnCommit(v69, v74);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v81 = KeGetCurrentIrql();
      if ( v81 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v47 = (v84 & v83[5]) == 0;
        v83[5] &= v84;
        if ( v47 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v91);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
