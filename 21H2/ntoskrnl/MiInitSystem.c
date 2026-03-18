/*
 * XREFs of MiInitSystem @ 0x140B07C00
 * Callers:
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     PsSetPagePriorityThread @ 0x14028F63C (PsSetPagePriorityThread.c)
 *     MiReleaseResourceLite @ 0x1402D8E00 (MiReleaseResourceLite.c)
 *     MiProcessKernelCfgImage @ 0x1402D99BC (MiProcessKernelCfgImage.c)
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     KeFlushCurrentTbOnly @ 0x1403AD034 (KeFlushCurrentTbOnly.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403C3F28 (MiSetSlabAllocatorPolicy.c)
 *     ExInitializePagedHeaps @ 0x1403C41C8 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403DADE0 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     VslInitializeSecureKernelCfg @ 0x14054E548 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14054E61C (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x140565974 (KdSetDbgPrintBufferSize.c)
 *     MiAcquireResourceExclusiveLite @ 0x140581D30 (MiAcquireResourceExclusiveLite.c)
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406EBCBC (MmConfigurePrefetchSeekThreshold.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C330 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
 *     MiWriteProtectSystemImages @ 0x14082B668 (MiWriteProtectSystemImages.c)
 *     MiInitializeSystemSpaceMap @ 0x14082BC44 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeMemoryEvents @ 0x14082BD64 (MiInitializeMemoryEvents.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14082CB2C (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiGenerateSecureCookie @ 0x14086305C (MiGenerateSecureCookie.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x14097F8B0 (MiProcessKernelCfgAddressTakenImports.c)
 *     MiInitializeMirroring @ 0x140B05D00 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x140B05E40 (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140B06C30 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializeHotPatches @ 0x140B0838C (MiInitializeHotPatches.c)
 *     MiAddLoaderHalIoMappings @ 0x140B08434 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B084F4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140B0856C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B085F8 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140B087BC (MiInitializeApiSets.c)
 *     MiInitializeModifiedWriterParameters @ 0x140B08894 (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x140B088E4 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x140B08D58 (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x140B08E90 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140B08F6C (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140B09078 (MiSectionInitialization.c)
 *     MiMapBBTMemory @ 0x140B092AC (MiMapBBTMemory.c)
 *     MiInitializeTbFlushing @ 0x140B092F0 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x140B09744 (MiInitializeRelocations.c)
 *     MiAllocateDummyPage @ 0x140B09B18 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140B09C28 (RtlInitializeHistoryTable.c)
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B0A424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeRetpoline @ 0x140B0A4A8 (MiInitializeRetpoline.c)
 *     MiInitializeBootProcess @ 0x140B0A508 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140B0A680 (MiInitializeSharedUserData.c)
 *     PsInitializeQuotaSystem @ 0x140B0A8A8 (PsInitializeQuotaSystem.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rax
  unsigned int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rbx
  ULONG_PTR v7; // rax
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *j; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  int Config; // eax
  ULONG_PTR v13; // rax
  _KPROCESS *Process; // rbx
  ULONG_PTR v16; // rax
  int v17; // r14d
  PKSTART_ROUTINE *i; // r15
  HANDLE ThreadHandle; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-40h] BYREF

  v20[0] = KeBalanceSetManager;
  v20[1] = KeSwapProcessOrStack;
  v20[2] = MiRebuildLargePagesThread;
  v20[3] = MiZeroPageThread;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      MiSetPageTablePfnBuddy(48 * (Process->DirectoryTableBase >> 12) - 0x220000000000LL, (__int64)Process, 0);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      if ( (MiFlags & 0x4000) == 0 || (int)VslInitializeSecurePool(qword_140C54100) >= 0 )
      {
        MiMapBBTMemory(a2);
        if ( (unsigned int)MiSectionInitialization() )
        {
          if ( (int)MiInitializeCfg() >= 0 )
          {
            if ( (unsigned int)MiCreateEnclaveRegions(a2) )
            {
              qword_140C51DC8 = 0LL;
              MiInitializeSessionIds();
              v16 = MiReservePtes((__int64)&qword_140C534C0, 4u);
              if ( v16 )
              {
                qword_140C53268 = v16;
                MiInitializeCacheFlushing();
                MiComputeOptimalZeroPath();
                if ( MiInitializeMemoryEvents(&MiSystemPartition)
                  && (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, 32LL, 0LL, 6u) >= 0 )
                {
                  dword_140C54F84 |= 4u;
                  MiInitializeModifiedWriterParameters();
                  word_140C58E80 = 0;
                  qword_140C58E90 = (__int64)&qword_140C58E88;
                  qword_140C58E88 = (__int64)&qword_140C58E88;
                  byte_140C58E82 = 6;
                  stru_140C51E68.Header.WaitListHead.Blink = &stru_140C51E68.Header.WaitListHead;
                  stru_140C51E68.Header.WaitListHead.Flink = &stru_140C51E68.Header.WaitListHead;
                  MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
                  dword_140C58E84 = 0;
                  LOWORD(stru_140C51E68.Header.Lock) = 0;
                  stru_140C51E68.Header.Size = 6;
                  stru_140C51E68.Header.SignalState = 0;
                  MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
                  MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
                  ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
                  v17 = 0;
                  for ( i = (PKSTART_ROUTINE *)v20;
                        PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                        ++i )
                  {
                    ObCloseHandle(ThreadHandle, 0);
                    if ( (unsigned int)++v17 >= 4 )
                    {
                      if ( !(unsigned int)MiInitializeMirroring() )
                        return 0;
                      qword_140C50628 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_140C53348);
                      return (int)MiInitializeApiSets(a2) >= 0 && (unsigned int)MiInitializeHotPatches(a2, 1LL);
                    }
                  }
                }
              }
            }
            else
            {
              byte_140C52B32 = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140C52A30 = MiReservePtes((__int64)&qword_140C534C0, 0x20u);
    _InterlockedIncrement(&dword_140C53348);
    if ( !(unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
      return 0;
    if ( (int)ExInitializePagedHeaps() < 0 )
      return 0;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0LL) )
      return 0;
    if ( !(unsigned __int8)PsInitializeQuotaSystem(0LL) )
      return 0;
    qword_140C50680 = MiGenerateSecureCookie();
    Seed = 305419896;
    if ( !(unsigned int)MiInitializeSharedUserData() || (int)MiInitializeBootProcess() < 0 )
      return 0;
    KeFlushCurrentTbOnly(3u);
    MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
    MiAddLoaderHalIoMappings(qword_140C54120, qword_140C54120 + 0x7FFFFFFFFFLL);
    if ( KdPrintBufferAllocateSize )
      KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
    MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
    if ( !(unsigned int)MiInitializeHotPatches(a2, 0LL) || (int)MiInitializeRetpoline() < 0 )
      return 0;
    v4 = ExGenRandom(1);
    qword_140C51858 = v4;
    dword_140C51860 = 8 * (v4 & 3) + 8;
    qword_140D68838 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( (unsigned int)dword_140D05218 > 2 )
      dword_140D05218 = 0;
    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
      return 0;
    if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
      return 0;
    qword_140D68840 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( !(unsigned int)MiInitializeDriverImages(a2) )
      return 0;
    qword_140D68848 = KeQueryPerformanceCounter(0LL).QuadPart;
    v5 = -1;
    if ( qword_140C590D0 <= 0xFFFFFFFF )
      v5 = qword_140C590D0;
    MEMORY[0xFFFFF780000002E8] = v5;
    MEMORY[0xFFFFF78000000244] = 0;
    MiInitializeSystemSpaceMap();
    qword_140C4F2F0 = 0LL;
    qword_140C51DE8 = 0LL;
    qword_140C51DF8 = 0LL;
    qword_140D68850 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( !(unsigned int)MiInitializeLoadedModuleList(a2) )
      return 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v6 = qword_140C540B0;
      v7 = MiReservePtes((__int64)&qword_140C534C0, 0x20u);
      if ( !v7 )
        return 0;
      if ( (int)VslInitializeSecureKernelCfg(v6, (__int64)(v7 << 25) >> 16) < 0 )
        return 0;
      qword_140C4F3F0 = v6;
      qword_140C4F3E8 = 0x100000000000LL;
      if ( !(unsigned int)MiMakeZeroedPageTables(
                            ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            (((v6 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            2048,
                            9) )
        return 0;
      qword_140C4F3F8 = 0LL;
      CurrentThread = KeGetCurrentThread();
      MiAcquireResourceExclusiveLite((__int64)CurrentThread);
      for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      {
        if ( ((_DWORD)j[13] & 0x2000) == 0 )
        {
          v10 = (__int64)j[6];
          if ( v10 == PsNtosImageBase )
          {
            v11 = RtlImageNtHeader(v10);
            Config = MiMarkKernelImageCfgBits((__int64)j, v11);
            *((_DWORD *)j + 26) |= 0x2000u;
          }
          else
          {
            Config = MiProcessKernelCfgImageLoadConfig((__int64)j, 0LL);
            if ( Config < 0 )
              goto LABEL_59;
            Config = MiProcessKernelCfgImage((__int64)j, 0, 0LL);
          }
          if ( Config < 0 )
LABEL_59:
            KeBugCheckEx(0x422u, Config, (ULONG_PTR)j, 0LL, 0LL);
        }
      }
      MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
      MiReleaseResourceLite((__int64)CurrentThread);
      guard_icall_bitmap = qword_140C4F3F0 - 0x3FFFE0000000000LL;
    }
    RtlInitializeHistoryTable();
    MiFlags |= 0x1000000u;
    qword_140C553A8[0] = 0LL;
    MmConfigurePrefetchSeekThreshold(32);
    PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
    MiEnablePagingTheExecutive();
    ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
    qword_140C53280 = MiAllocateDummyPage();
    qword_140C53288 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C53280 + 0x220000000000LL) >> 4);
    v13 = MiReservePtes((__int64)&qword_140C534C0, 1u);
    MmBadPointer = (PVOID)v13;
    if ( v13 )
    {
      MmBadPointer = (PVOID)((__int64)(v13 << 25) >> 16);
      if ( (unsigned int)MiInitializeRelocations() )
      {
        qword_140D68858 = KeQueryPerformanceCounter(0LL).QuadPart;
        MiInitializeTbFlushing();
        qword_140D68860 = KeQueryPerformanceCounter(0LL).QuadPart;
        qword_140C53488 = (__int64)&qword_140C53480;
        qword_140C53480 = (__int64)&qword_140C53480;
        return 1;
      }
    }
  }
  return 0;
}
