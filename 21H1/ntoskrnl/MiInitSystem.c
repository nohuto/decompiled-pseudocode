/*
 * XREFs of MiInitSystem @ 0x140A4C4D4
 * Callers:
 *     MmInitSystem @ 0x140A4C3E4 (MmInitSystem.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x140234D94 (PsSetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 *     MiSetPageTablePfnBuddy @ 0x1403292B4 (MiSetPageTablePfnBuddy.c)
 *     MiCreateZeroThreadContext @ 0x1403AE7B8 (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x1403B2600 (MiStoreChargeReservedPages.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B2658 (MiSetSlabAllocatorPolicy.c)
 *     KeFlushCurrentTbOnly @ 0x1403B2698 (KeFlushCurrentTbOnly.c)
 *     ExInitializePagedHeaps @ 0x1403BFDA0 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C78E4 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x1404F6F1C (VslInitializeSecurePool.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140655530 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406EDE54 (MmConfigurePrefetchSeekThreshold.c)
 *     MmLockPagableDataSection @ 0x1406EF480 (MmLockPagableDataSection.c)
 *     MiInitializeSystemSpaceMap @ 0x140771F60 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140771FCC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeMemoryEvents @ 0x140782B20 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x140783A44 (MiWriteProtectSystemImages.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14078C758 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeDriverImages @ 0x140A4165C (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A43094 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializePartitions @ 0x140A449A4 (MiInitializePartitions.c)
 *     MiAddLoaderHalIoMappings @ 0x140A4CA1C (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A4CADC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140A4CB58 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A4CBE4 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140A4CCC8 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x140A4CDA0 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x140A4CEDC (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x140A4CF20 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x140A4D3EC (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x140A4D550 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140A4D608 (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140A4D6EC (MiSectionInitialization.c)
 *     MiMapBBTMemory @ 0x140A4D920 (MiMapBBTMemory.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A4D968 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeTbFlushing @ 0x140A4D9A8 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x140A4DDF8 (MiInitializeRelocations.c)
 *     MiAllocateDummyPage @ 0x140A4E210 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A4E374 (RtlInitializeHistoryTable.c)
 *     MiInitializeKernelCfg @ 0x140A4E4DC (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140A4E514 (MiInitializeLoadedModuleList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A4EB24 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 *     MiInitializeHotPatches @ 0x140A4EBFC (MiInitializeHotPatches.c)
 *     KdAllocateDynamicMemory @ 0x140A4EC54 (KdAllocateDynamicMemory.c)
 *     MiInitializeBootProcess @ 0x140A4FEC4 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140A5003C (MiInitializeSharedUserData.c)
 *     PsInitializeQuotaSystem @ 0x140A6850C (PsInitializeQuotaSystem.c)
 *     MiInitializeCrashDumpPtes @ 0x140A90114 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeVadSecuring @ 0x140A901C0 (MiInitializeVadSecuring.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rax
  int v4; // eax
  ULONG_PTR v5; // rax
  _KPROCESS *CurrentProcess; // rbx
  int v8; // ebp
  PKSTART_ROUTINE *i; // r14
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  ThreadHandle = 0LL;
  v11[0] = KeBalanceSetManager;
  v11[1] = KeSwapProcessOrStack;
  v11[2] = MiRebuildLargePagesThread;
  v11[3] = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      CurrentProcess = PsGetCurrentProcess();
      MiSetPageTablePfnBuddy(
        48 * (CurrentProcess->DirectoryTableBase >> 12) - 0x58000000000LL,
        (__int64)CurrentProcess,
        0LL);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiHotAddBootDeferredDescriptors();
      if ( (MiFlags & 0x8000) == 0 || VslInitializeSecurePool(qword_140C4FAB8) >= 0 )
      {
        MiMapBBTMemory(a2);
        if ( (unsigned int)MiSectionInitialization() )
        {
          if ( (int)MiInitializeCfg() >= 0 )
          {
            if ( (unsigned int)MiCreateEnclaveRegions(a2) )
            {
              qword_140C4E488 = 0LL;
              qword_140C4EE48 = (__int64)&qword_140C4EE40;
              qword_140C4EE40 = (__int64)&qword_140C4EE40;
              MiInitializeSessionIds();
              if ( (unsigned int)MiInitializePartitions(1) )
              {
                MiInitializeCacheFlushing();
                MiComputeOptimalZeroPath();
                if ( MiInitializeMemoryEvents(&MiSystemPartition) )
                {
                  if ( (unsigned int)MiStoreChargeReservedPages() )
                  {
                    MiInitializeModifiedWriterParameters();
                    qword_140C525A8 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                    if ( qword_140C525A8 )
                    {
                      v8 = 0;
                      for ( i = (PKSTART_ROUTINE *)v11;
                            PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                            ++i )
                      {
                        ObCloseHandle(ThreadHandle, 0);
                        if ( (unsigned int)++v8 >= 4 )
                        {
                          if ( !(unsigned int)MiInitializeMirroring() )
                            return 0;
                          qword_140C4DD08 = 0LL;
                          MiWriteProtectSystemImages();
                          _InterlockedDecrement(&dword_140C4ED88);
                          return (int)MiInitializeApiSets(a2) >= 0;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              byte_140C4E73A = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TlgRegisterAggregateProviderEx(&qword_140C04658, (unsigned __int16 *)MiTracingEnabledCallback, 0LL);
      *(_QWORD *)&qword_140C4EE20 = &qword_140C04658;
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140C4ED88);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() >= 0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        if ( (unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0LL) )
        {
          if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
          {
            MiInitializeVadSecuring();
            Seed = 305419896;
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (int)MiInitializeBootProcess() >= 0 )
              {
                KeFlushCurrentTbOnly(3u);
                MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
                MiAddLoaderHalIoMappings(qword_140C4FAC8, qword_140C4FAC8 + 0x7FFFFFFFFFLL);
                KdAllocateDynamicMemory();
                MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
                MiInitializeHotPatches(a2);
                if ( (int)MiInitializeRetpoline() >= 0 )
                {
                  qword_140D55868 = KeQueryPerformanceCounter(0LL).QuadPart;
                  if ( (unsigned int)dword_140CFB1D8 > 2 )
                    dword_140CFB1D8 = 0;
                  if ( ((MiFlags & 4) == 0 || (int)MiCreateSlabAllocationsFromKernelHal() >= 0)
                    && (int)MiCreateSlabAllocationsFromLoaderBlock(a2) >= 0 )
                  {
                    qword_140D55870 = KeQueryPerformanceCounter(0LL).QuadPart;
                    if ( (unsigned int)MiInitializeDriverImages(a2) )
                    {
                      qword_140D55878 = KeQueryPerformanceCounter(0LL).QuadPart;
                      v4 = -1;
                      if ( qword_140C52790 <= 0xFFFFFFFF )
                        v4 = qword_140C52790;
                      MEMORY[0xFFFFF780000002E8] = v4;
                      MEMORY[0xFFFFF78000000244] = 0;
                      MiInitializeSystemSpaceMap(qword_140C4CCA8);
                      qword_140C4CA78 = 0LL;
                      qword_140C4E4A8 = 0LL;
                      qword_140C4E4B8 = 0LL;
                      qword_140D55880 = KeQueryPerformanceCounter(0LL).QuadPart;
                      if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                      {
                        if ( (int)MiInitializeKernelCfg() >= 0 )
                        {
                          RtlInitializeHistoryTable();
                          MiFlags |= 0x1000000u;
                          qword_140C51090 = 0LL;
                          MmConfigurePrefetchSeekThreshold(32);
                          PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                          MiEnablePagingTheExecutive();
                          ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                          MmUnlockPagableImageSection(ExPageLockHandle);
                          qword_140C4ECB0 = MiAllocateDummyPage();
                          qword_140C4ECB8 = (qword_140C4ECB0 + 0x58000000000LL) / 48;
                          v5 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
                          MmBadPointer = (PVOID)v5;
                          if ( v5 )
                          {
                            MmBadPointer = (PVOID)((__int64)(v5 << 25) >> 16);
                            if ( (unsigned int)MiInitializeRelocations() )
                            {
                              qword_140D55888 = KeQueryPerformanceCounter(0LL).QuadPart;
                              MiInitializeTbFlushing();
                              qword_140D55890 = KeQueryPerformanceCounter(0LL).QuadPart;
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
