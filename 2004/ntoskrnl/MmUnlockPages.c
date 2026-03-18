/*
 * XREFs of MmUnlockPages @ 0x140283990
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x140231960 (CcCopyBytesToUserBuffer.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x140267B0C (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     ExUnlockUserBuffer @ 0x140335610 (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x140345AE0 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14035DDD8 (CcMdlWriteComplete2.c)
 *     VslpUnlockPagesForTransfer @ 0x140391744 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140391798 (VslpLockPagesForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x1404E5388 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404E6A50 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x1404F91C0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404F9860 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x14051F284 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x140541768 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x14057E2B4 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x14057E8B0 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059A8D8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x14059D5A0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14059D640 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1405AC720 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405EA910 (MmCopyVirtualMemory.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x14060F040 (CcMdlReadComplete2.c)
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406D8B78 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406DA058 @ 0x1406DA058 (sub_1406DA058.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     AlpcpInitializeCompletionList @ 0x1406F48D8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406F4DDC (AlpcpFreeCompletionList.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     FsRtlpFreeMdlChain @ 0x140889370 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A850 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A8F0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x14088BB04 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088E278 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x1408CAE4C (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CFBC4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E3AD8 (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x140906BCC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140926A40 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140957440 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140957790 (NtStartProfile.c)
 *     NtStopProfile @ 0x140957A00 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDereferenceControlAreaProbe @ 0x14025DF5C (MiDereferenceControlAreaProbe.c)
 *     MiUnlockPageTableCharges @ 0x14025E10C (MiUnlockPageTableCharges.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140326E30 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140337818 (MiDereferenceIoPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403EEC2C (MiBadRefCount.c)
 *     MiGetBaseResidentPage @ 0x1403F0A84 (MiGetBaseResidentPage.c)
 *     MiFinishLargePageFree @ 0x1403F1D54 (MiFinishLargePageFree.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x14052B660 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x14052B820 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140559BC0 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
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
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int16 v25; // r8
  __int64 v26; // rax
  volatile signed __int64 *v27; // r11
  unsigned __int64 *v28; // rsi
  int v29; // r13d
  unsigned __int64 v30; // rbx
  unsigned int v31; // r10d
  __int64 v32; // r15
  __int64 CurrentIrql; // r12
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  unsigned __int64 CurrentPrcb; // r8
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  volatile signed __int64 *v39; // r14
  __int64 v40; // rsi
  __int64 BaseResidentPage; // r12
  __int64 v42; // r15
  char v43; // al
  __int64 v44; // rsi
  __int64 v45; // rax
  bool v46; // zf
  __int64 v47; // r10
  __int64 v48; // rax
  int v49; // ebp
  char v50; // al
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r10
  __int64 v53; // r11
  __int64 v54; // r10
  __int64 v55; // rsi
  signed __int32 v56; // eax
  struct _KPRCB *v57; // r10
  int v58; // eax
  unsigned __int8 v59; // r10
  __int64 v60; // rbx
  __int64 v61; // r14
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  int v64; // ebp
  unsigned __int64 v65; // rdi
  __int64 v66; // r15
  __int64 v67; // rsi
  __int64 v68; // rdx
  struct _KPRCB *v69; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  _DWORD *SchedulerAssist; // r8
  int v75; // eax
  PMDL v76; // [rsp+30h] [rbp-B8h]
  int v77; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+40h] [rbp-A8h]
  __int64 v79; // [rsp+48h] [rbp-A0h]
  unsigned __int64 *v80; // [rsp+58h] [rbp-90h]
  __int64 v81; // [rsp+60h] [rbp-88h]
  unsigned __int64 v82; // [rsp+68h] [rbp-80h]
  __int64 v83; // [rsp+70h] [rbp-78h]
  struct _EPROCESS *Process; // [rsp+78h] [rbp-70h]
  __int64 v85; // [rsp+80h] [rbp-68h]
  unsigned __int64 v86; // [rsp+88h] [rbp-60h]
  unsigned __int64 v87; // [rsp+90h] [rbp-58h]
  __int64 v88; // [rsp+98h] [rbp-50h]
  CSHORT v90; // [rsp+F8h] [rbp+10h]
  int v91; // [rsp+100h] [rbp+18h]
  int v92; // [rsp+108h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = (unsigned __int64 *)&MemoryDescriptorList[1];
  Process = MemoryDescriptorList->Process;
  v90 = MdlFlags;
  v76 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList, 512LL);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = (char *)MemoryDescriptorList->StartVa;
  ByteCount = MemoryDescriptorList->ByteCount;
  v7 = ((unsigned __int64)(((_WORD)StartVa + (_WORD)ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  v82 = v7;
  if ( (MdlFlags & 1) != 0 )
  {
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
    v9 = 0;
    if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    {
      v10 = MiRetardMdl(MemoryDescriptorList, 512LL);
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
      v85 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v85;
      v15 = 4;
      v86 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v87 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = 4LL;
      v88 = v16;
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
      MiReleasePtes(&qword_140C4ED40, v13, (unsigned int)v11);
      v7 = v82;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace((ULONG_PTR)MappedSystemVa);
    }
    v2 = (unsigned __int64 *)v76;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v27 = 0LL;
  v28 = &v2[v7];
  v29 = 1;
  v81 = 0LL;
  v80 = v28;
  v30 = 0LL;
  v91 = 1;
  v31 = 1;
  v78 = 0xFFFFFFFFFLL;
  v32 = 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v79 = CurrentIrql;
  __writecr8(2uLL);
  v34 = (unsigned __int8)v81 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    ByteCount = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    *(_DWORD *)(ByteCount + 20) |= ((_DWORD)v34 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    v35 = *v2;
    CurrentPrcb = 0x1000000000LL;
    if ( *v2 == -1LL )
      break;
    ByteCount = 0xFFFFFFFFFLL;
    if ( v35 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v35 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, v35, 1LL);
      goto LABEL_147;
    }
    v83 = 48 * v35;
    v37 = 48 * v35 - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v38 = *(_QWORD *)(v37 + 40);
      if ( (v38 & 0x1000000000LL) == 0 && ((v38 >> 60) & 7) != 1 )
      {
        v35 = 0xFFFFFFFFDLL;
        if ( (v38 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL && v32 != (v38 & 0xFFFFFFFFFLL) )
        {
          if ( v32 != 0xFFFFFFFFFLL )
          {
            MiUnlockPageTableCharges(48 * v32 - 0x58000000000LL, v31);
            v38 = *(_QWORD *)(v37 + 40);
          }
          v78 = v38 & 0xFFFFFFFFFLL;
          v91 = 2 - ((unsigned int)MI_PFN_IS_PROTO(v37) != 0);
        }
      }
    }
    v92 = (int)v27;
    v39 = v27;
    v40 = (__int64)v27;
    BaseResidentPage = (__int64)v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v92, v35, CurrentPrcb, ByteCount);
        while ( *(__int64 *)(v37 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
      v27 = 0LL;
    }
    v42 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v37 + 40) >> 39) & 0x3FFLL));
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
            v30 = (unsigned __int64)v27;
          }
        }
        v39 = (volatile signed __int64 *)BaseResidentPage;
        *(_BYTE *)(v37 + 34) |= 0x10u;
      }
      if ( (*(_QWORD *)(v37 + 40) & 0x1000000000LL) == 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v37) )
        {
          v45 = *(_QWORD *)(v37 + 16);
          if ( (v45 & 0x400) != 0 )
          {
            if ( qword_140C4DD40 && (v45 & 0x10) == 0 )
              v45 &= ~qword_140C4DD40;
            v39 = *(volatile signed __int64 **)(v45 >> 16);
          }
        }
      }
    }
    v35 = *(unsigned __int16 *)(v37 + 32);
    if ( !(_WORD)v35 )
      MiBadRefCount(v37);
    v46 = (_WORD)v35 == 1;
    LOWORD(v35) = v35 - 1;
    *(_WORD *)(v37 + 32) = v35;
    if ( !v46 || !(unsigned int)MiIsPfnFileOnly(v37, v35, CurrentPrcb, ByteCount) )
    {
      v47 = *(_QWORD *)(v37 + 40);
      if ( (v47 & 0x1000000000LL) != 0 || (v47 & 0x2000000000000LL) != 0 )
        goto LABEL_131;
      v48 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (_WORD)v35 )
      {
        if ( (_WORD)v35 != 1 )
        {
          if ( (_WORD)v35 != 2 || !v48 )
            goto LABEL_131;
          goto LABEL_99;
        }
        if ( !v48 )
        {
LABEL_99:
          if ( (*(_BYTE *)(v37 + 34) & 8) == 0 )
            goto LABEL_131;
        }
        v49 = 0;
      }
      else
      {
        v49 = 1;
      }
      v35 = 0xFFFFF68000000000uLL;
      ByteCount = 0xFFFFF6BFFFFFFF78uLL;
      CurrentPrcb = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
      if ( CurrentPrcb > 0xFFFFF6BFFFFFFF78uLL || CurrentPrcb < 0xFFFFF68000000000uLL )
      {
        v50 = *(_BYTE *)(v37 + 35);
        if ( (v50 & 0x20) != 0 )
        {
          *(_BYTE *)(v37 + 35) = v50 & 0xDF;
          goto LABEL_129;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v37) && (*(_DWORD *)(v37 + 16) & 0x400LL) != 0 )
      {
        v35 = 1LL;
      }
      else if ( CurrentPrcb <= v51 && CurrentPrcb >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v37 + 35) & 0x20) != 0 )
      {
        v35 = 1LL;
      }
      else if ( v49 == 1 && (v53 & 0x4000000000000000LL) != 0 )
      {
        v35 = 1LL;
      }
      v54 = (v52 >> 39) & 0x3FF;
      v55 = *(_QWORD *)(qword_140C4E448 + 8 * v54);
      if ( (_DWORD)v35 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8 * v54), 1LL);
      ByteCount = 1LL;
      if ( (ULONG_PTR *)v55 == &MiSystemPartition )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v35 = *(int *)(CurrentPrcb + 33564);
        if ( (_DWORD)v35 != -1 )
        {
          if ( v35 + 1 <= 0x100 )
          {
            while ( 1 )
            {
              v56 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v35 + 1, v35);
              v46 = (_DWORD)v35 == v56;
              v35 = v56;
              if ( v46 )
                break;
              if ( v56 == -1 || (unsigned __int64)(v56 + 1LL) > 0x100 )
                goto LABEL_124;
            }
LABEL_129:
            if ( !v49 )
              goto LABEL_131;
            goto LABEL_130;
          }
LABEL_124:
          if ( (int)v35 > 192
            && (_DWORD)v35 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, v35) )
          {
            ByteCount = (int)v35 - 192 + 1LL;
          }
          if ( !ByteCount )
            goto LABEL_129;
        }
      }
      ByteCount = _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 7168), ByteCount);
      goto LABEL_129;
    }
LABEL_130:
    MiPfnReferenceCountIsZero(v37, v83 / 48);
LABEL_131:
    if ( (*(_QWORD *)(v37 + 40) & 0x1000000000LL) != 0
      && (*(_QWORD *)(v37 + 24) & 0x4000000000000000LL) != 0
      && *(_WORD *)(v37 + 32) == 2 )
    {
      *(_QWORD *)(v37 + 24) &= ~0x4000000000000000uLL;
      BaseResidentPage = MiGetBaseResidentPage(v37, v35);
      CurrentPrcb = 0xFFFFFFFFFLL;
      v35 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFLL) - 1;
      *(_QWORD *)BaseResidentPage ^= (v35 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFFFFFLL;
      if ( BaseResidentPage != v37 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v35 )
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
      MiDereferenceControlAreaProbe(v39, 1);
    if ( (ULONG_PTR *)v42 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + 2144));
    MdlFlags = v90;
    v34 = -1LL;
    LOBYTE(CurrentIrql) = v79;
    v28 = v80;
    v2 = (unsigned __int64 *)v76;
    v32 = v78;
LABEL_147:
    v76 = (PMDL)++v2;
    if ( (++v81 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v2 >= v28 )
      {
        v31 = v91;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v57 = KeGetCurrentPrcb();
            v35 = v34 << ((unsigned __int8)CurrentIrql + 1);
            ByteCount = (__int64)v57->SchedulerAssist;
            v58 = ~(unsigned __int16)v35;
            v46 = (v58 & *(_DWORD *)(ByteCount + 20)) == 0;
            CurrentPrcb = (unsigned int)v58 & *(_DWORD *)(ByteCount + 20);
            *(_DWORD *)(ByteCount + 20) = CurrentPrcb;
            if ( v46 )
              KiRemoveSystemWorkPriorityKick(v57);
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v59 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
        {
          ByteCount = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          v35 = (v34 << (v59 + 1)) & 4;
          CurrentPrcb = (unsigned int)v35 | *(_DWORD *)(ByteCount + 20);
          *(_DWORD *)(ByteCount + 20) = CurrentPrcb;
        }
        LOBYTE(CurrentIrql) = v59;
        v79 = v59;
      }
    }
    v31 = v91;
    v27 = 0LL;
  }
  while ( v2 < v28 );
  if ( v32 != 0xFFFFFFFFFLL )
  {
    v60 = 48 * v32 - 0x58000000000LL;
    v61 = 0LL;
    if ( v31 == 2 )
    {
      if ( (*(_BYTE *)(v60 + 34) & 7) != 6
        || (v35 = 0x3FFFFFFFFFFFFFFFLL, (*(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0)
        || (v62 = *(_QWORD *)(v60 + 8) | 0x8000000000000000uLL,
            CurrentPrcb = 0xFFFFF68000000000uLL,
            v62 < 0xFFFFF68000000000uLL)
        || (v35 = 0xFFFFF6FFFFFFFFFFuLL, v62 > 0xFFFFF6FFFFFFFFFFuLL)
        || (v63 = (__int64)(v62 << 25) >> 16, v63 < 0xFFFFF68000000000uLL)
        || v63 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = 0;
      }
      v64 = 3;
      if ( v29 )
        goto LABEL_178;
      goto LABEL_218;
    }
    v64 = 1;
    if ( !v31 )
      v64 = 4;
LABEL_178:
    if ( (*(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_218:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v32 - 0x58000000000LL,
        *(_QWORD *)(v60 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v65 = 0LL;
    v66 = 0LL;
    while ( 1 )
    {
      v67 = *(_QWORD *)(v60 + 40) & 0xFFFFFFFFFLL;
      v77 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v77, v35, CurrentPrcb, ByteCount);
        while ( *(__int64 *)(v60 + 24) < 0 );
      }
      v68 = *(_QWORD *)(v60 + 24) ^ ((*(_QWORD *)(v60 + 24) - 0x10000LL) ^ *(_QWORD *)(v60 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v60 + 24) = v68;
      v35 = v68 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v35 >= 0x10000 )
        break;
      if ( !v61 )
        v61 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v60 + 40) >> 39) & 0x3FFLL));
      ++v65;
      if ( !v35 && (unsigned int)MiPfnShareCountIsZero(v60, 0LL) != 3 )
        ++v66;
      _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v64 )
        goto LABEL_192;
      v60 = 48 * v67 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_192:
    if ( v65 )
    {
      if ( (ULONG_PTR *)v61 == &MiSystemPartition )
      {
        v69 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v69->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v65 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v65 >= 0x80000 )
                break;
              v71 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v69->CachedResidentAvailable,
                      v65 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v46 = (_DWORD)CachedResidentAvailable == v71;
              LODWORD(CachedResidentAvailable) = v71;
              if ( v46 )
                goto LABEL_205;
            }
            while ( v71 != -1 && v65 + v71 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v69->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v65 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v65 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 7168), v65);
    }
LABEL_205:
    if ( v66 )
      MiReturnCommit(v61, v66);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        SchedulerAssist = v73->SchedulerAssist;
        v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v46 = (v75 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v75;
        if ( v46 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v82);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
