/*
 * XREFs of MiInitSystem @ 0x140A521D4
 * Callers:
 *     MmInitSystem @ 0x140A520E4 (MmInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     PsSetPagePriorityThread @ 0x1402C7BC4 (PsSetPagePriorityThread.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E2F54 (MiSetPageTablePfnBuddy.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     MiCreateZeroThreadContext @ 0x1403A8398 (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x1403B43F8 (MiStoreChargeReservedPages.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B4458 (MiSetSlabAllocatorPolicy.c)
 *     KeFlushCurrentTbOnly @ 0x1403B4498 (KeFlushCurrentTbOnly.c)
 *     ExInitializePagedHeaps @ 0x1403C0C60 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C86F4 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x1404F756C (VslInitializeSecurePool.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 *     PsCreateSystemThread @ 0x1406CFB90 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1407117E4 (MmConfigurePrefetchSeekThreshold.c)
 *     MiInitializeSystemSpaceMap @ 0x140774370 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407743DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeMemoryEvents @ 0x1407884A4 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x1407893D4 (MiWriteProtectSystemImages.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14078E628 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializePartitions @ 0x140A3DBDC (MiInitializePartitions.c)
 *     MiInitializeDriverImages @ 0x140A46EB8 (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A488F4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiAddLoaderHalIoMappings @ 0x140A5271C (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A527DC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140A52858 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A528E4 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140A529C8 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x140A52AA0 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x140A52BDC (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x140A52C20 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x140A530EC (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x140A53250 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140A53308 (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140A533EC (MiSectionInitialization.c)
 *     MiMapBBTMemory @ 0x140A53620 (MiMapBBTMemory.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A53668 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeTbFlushing @ 0x140A536A8 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x140A53AF8 (MiInitializeRelocations.c)
 *     MiAllocateDummyPage @ 0x140A53F10 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A54074 (RtlInitializeHistoryTable.c)
 *     MiInitializeKernelCfg @ 0x140A541DC (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140A54214 (MiInitializeLoadedModuleList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A54824 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeRetpoline @ 0x140A5489C (MiInitializeRetpoline.c)
 *     MiInitializeHotPatches @ 0x140A548FC (MiInitializeHotPatches.c)
 *     KdAllocateDynamicMemory @ 0x140A54954 (KdAllocateDynamicMemory.c)
 *     MiInitializeBootProcess @ 0x140A55BC4 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140A55D3C (MiInitializeSharedUserData.c)
 *     PsInitializeQuotaSystem @ 0x140A6898C (PsInitializeQuotaSystem.c)
 *     MiInitializeCrashDumpPtes @ 0x140A8F704 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeVadSecuring @ 0x140A8F7B0 (MiInitializeVadSecuring.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rax
  int v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  ULONG_PTR v7; // rax
  _KPROCESS *CurrentProcess; // rbx
  int v10; // ebp
  PKSTART_ROUTINE *i; // r14
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-30h] BYREF

  ThreadHandle = 0LL;
  v13[0] = KeBalanceSetManager;
  v13[1] = KeSwapProcessOrStack;
  v13[2] = MiRebuildLargePagesThread;
  v13[3] = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      CurrentProcess = PsGetCurrentProcess();
      MiSetPageTablePfnBuddy(
        48 * (CurrentProcess->DirectoryTableBase >> 12) - 0x58000000000LL,
        (__int64)CurrentProcess,
        0);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiHotAddBootDeferredDescriptors();
      if ( (MiFlags & 0x8000) == 0 || VslInitializeSecurePool(qword_140C4F978) >= 0 )
      {
        MiMapBBTMemory(a2);
        if ( (unsigned int)MiSectionInitialization() )
        {
          if ( (int)MiInitializeCfg() >= 0 )
          {
            if ( (unsigned int)MiCreateEnclaveRegions(a2) )
            {
              qword_140C4E348 = 0LL;
              qword_140C4ED08 = (__int64)&qword_140C4ED00;
              qword_140C4ED00 = (__int64)&qword_140C4ED00;
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
                    qword_140C524A8 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                    if ( qword_140C524A8 )
                    {
                      v10 = 0;
                      for ( i = (PKSTART_ROUTINE *)v13;
                            PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                            ++i )
                      {
                        ObCloseHandle(ThreadHandle, 0);
                        if ( (unsigned int)++v10 >= 4 )
                        {
                          if ( !(unsigned int)MiInitializeMirroring() )
                            return 0;
                          qword_140C4DBC8 = 0LL;
                          MiWriteProtectSystemImages();
                          _InterlockedDecrement(&dword_140C4EC48);
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
              byte_140C4E5FA = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TlgRegisterAggregateProviderEx(&qword_140C04698, (unsigned __int16 *)MiTracingEnabledCallback, 0LL);
      *(_QWORD *)&qword_140C4ECE0 = &qword_140C04698;
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140C4EC48);
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
                MiAddLoaderHalIoMappings(qword_140C4F988, qword_140C4F988 + 0x7FFFFFFFFFLL);
                KdAllocateDynamicMemory();
                MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
                MiInitializeHotPatches(a2);
                if ( (int)MiInitializeRetpoline() >= 0 )
                {
                  qword_140D56868 = KeQueryPerformanceCounter(0LL).QuadPart;
                  if ( (unsigned int)dword_140CFB1D8 > 2 )
                    dword_140CFB1D8 = 0;
                  if ( ((MiFlags & 4) == 0 || (int)MiCreateSlabAllocationsFromKernelHal() >= 0)
                    && (int)MiCreateSlabAllocationsFromLoaderBlock(a2) >= 0 )
                  {
                    qword_140D56870 = KeQueryPerformanceCounter(0LL).QuadPart;
                    if ( (unsigned int)MiInitializeDriverImages(a2) )
                    {
                      qword_140D56878 = KeQueryPerformanceCounter(0LL).QuadPart;
                      v4 = -1;
                      if ( qword_140C52690 <= 0xFFFFFFFF )
                        v4 = qword_140C52690;
                      MEMORY[0xFFFFF780000002E8] = v4;
                      MEMORY[0xFFFFF78000000244] = 0;
                      MiInitializeSystemSpaceMap(qword_140C4CB68);
                      qword_140C4C938 = 0LL;
                      qword_140C4E368 = 0LL;
                      qword_140C4E378 = 0LL;
                      qword_140D56880 = KeQueryPerformanceCounter(0LL).QuadPart;
                      if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                      {
                        if ( (int)MiInitializeKernelCfg() >= 0 )
                        {
                          RtlInitializeHistoryTable();
                          MiFlags |= 0x1000000u;
                          qword_140C50F90 = 0LL;
                          MmConfigurePrefetchSeekThreshold(32);
                          PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                          MiEnablePagingTheExecutive();
                          ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                          MmUnlockPagableImageSection(ExPageLockHandle);
                          qword_140C4EB70 = MiAllocateDummyPage();
                          qword_140C4EB78 = (qword_140C4EB70 + 0x58000000000LL) / 48;
                          v7 = MiReservePtes((__int64)&qword_140C4ED40, 1u, v5, v6);
                          MmBadPointer = (PVOID)v7;
                          if ( v7 )
                          {
                            MmBadPointer = (PVOID)((__int64)(v7 << 25) >> 16);
                            if ( (unsigned int)MiInitializeRelocations() )
                            {
                              qword_140D56888 = KeQueryPerformanceCounter(0LL).QuadPart;
                              MiInitializeTbFlushing();
                              qword_140D56890 = KeQueryPerformanceCounter(0LL).QuadPart;
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
