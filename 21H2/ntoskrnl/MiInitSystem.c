/*
 * XREFs of MiInitSystem @ 0x140A53E5C
 * Callers:
 *     MmInitSystem @ 0x140A53D6C (MmInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E5B84 (MiSetPageTablePfnBuddy.c)
 *     PsSetPagePriorityThread @ 0x1402F75E4 (PsSetPagePriorityThread.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MmUnlockPagableImageSection @ 0x14031AA10 (MmUnlockPagableImageSection.c)
 *     PsGetCurrentProcess @ 0x14033B600 (PsGetCurrentProcess.c)
 *     MiCreateZeroThreadContext @ 0x1403B0C88 (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x1403B73F8 (MiStoreChargeReservedPages.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B7458 (MiSetSlabAllocatorPolicy.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7498 (KeFlushCurrentTbOnly.c)
 *     ExInitializePagedHeaps @ 0x1403C3B30 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBD04 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x1404FC99C (VslInitializeSecurePool.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406C400C (MmConfigurePrefetchSeekThreshold.c)
 *     PsCreateSystemThread @ 0x1406D0140 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x1406D0CD0 (MmLockPagableDataSection.c)
 *     MiInitializeSystemSpaceMap @ 0x140786750 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407867BC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeMemoryEvents @ 0x1407A06D4 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x1407A1604 (MiWriteProtectSystemImages.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4BEC (TlgRegisterAggregateProviderEx.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A5288 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializePartitions @ 0x140A4399C (MiInitializePartitions.c)
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A504E4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiAddLoaderHalIoMappings @ 0x140A543A4 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A54464 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140A544E0 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A5456C (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140A54650 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x140A54864 (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x140A54D74 (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140A54F90 (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140A55074 (MiSectionInitialization.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A552F0 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeTbFlushing @ 0x140A55330 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x140A55780 (MiInitializeRelocations.c)
 *     MiAllocateDummyPage @ 0x140A55B98 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A55CFC (RtlInitializeHistoryTable.c)
 *     MiInitializeKernelCfg @ 0x140A55E64 (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A564C0 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 *     MiInitializeHotPatches @ 0x140A565A0 (MiInitializeHotPatches.c)
 *     KdAllocateDynamicMemory @ 0x140A565F8 (KdAllocateDynamicMemory.c)
 *     MiInitializeBootProcess @ 0x140A57868 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 *     PsInitializeQuotaSystem @ 0x140A6C13C (PsInitializeQuotaSystem.c)
 *     MiInitializeCrashDumpPtes @ 0x140A92264 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeVadSecuring @ 0x140A92310 (MiInitializeVadSecuring.c)
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
        0LL);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiHotAddBootDeferredDescriptors();
      if ( (MiFlags & 0x8000) == 0 || VslInitializeSecurePool(qword_140C4FB78) >= 0 )
      {
        MiMapBBTMemory(a2);
        if ( (unsigned int)MiSectionInitialization() )
        {
          if ( (int)MiInitializeCfg() >= 0 )
          {
            if ( (unsigned int)MiCreateEnclaveRegions(a2) )
            {
              qword_140C4E548 = 0LL;
              qword_140C4EF08 = (__int64)&qword_140C4EF00;
              qword_140C4EF00 = (__int64)&qword_140C4EF00;
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
                    qword_140C526A8 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                    if ( qword_140C526A8 )
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
                          qword_140C4DDC8 = 0LL;
                          MiWriteProtectSystemImages();
                          _InterlockedDecrement(&dword_140C4EE48);
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
              byte_140C4E7FA = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TlgRegisterAggregateProviderEx(&qword_140C046D8, (unsigned __int16 *)MiTracingEnabledCallback, 0LL);
      *(_QWORD *)&qword_140C4EEE0 = &qword_140C046D8;
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140C4EE48);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() >= 0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        if ( (unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4u, 0LL) )
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
                MiAddLoaderHalIoMappings(qword_140C4FB88, qword_140C4FB88 + 0x7FFFFFFFFFLL);
                KdAllocateDynamicMemory();
                MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
                MiInitializeHotPatches(a2);
                if ( (int)MiInitializeRetpoline() >= 0 )
                {
                  qword_140D58868 = KeQueryPerformanceCounter(0LL).QuadPart;
                  if ( (unsigned int)dword_140CFB1D8 > 2 )
                    dword_140CFB1D8 = 0;
                  if ( ((MiFlags & 4) == 0 || (int)MiCreateSlabAllocationsFromKernelHal() >= 0)
                    && (int)MiCreateSlabAllocationsFromLoaderBlock(a2) >= 0 )
                  {
                    qword_140D58870 = KeQueryPerformanceCounter(0LL).QuadPart;
                    if ( (unsigned int)MiInitializeDriverImages(a2) )
                    {
                      qword_140D58878 = KeQueryPerformanceCounter(0LL).QuadPart;
                      v4 = -1;
                      if ( qword_140C52890 <= 0xFFFFFFFF )
                        v4 = qword_140C52890;
                      MEMORY[0xFFFFF780000002E8] = v4;
                      MEMORY[0xFFFFF78000000244] = 0;
                      MiInitializeSystemSpaceMap(qword_140C4CD68);
                      qword_140C4CB38 = 0LL;
                      qword_140C4E568 = 0LL;
                      qword_140C4E578 = 0LL;
                      qword_140D58880 = KeQueryPerformanceCounter(0LL).QuadPart;
                      if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                      {
                        if ( (int)MiInitializeKernelCfg() >= 0 )
                        {
                          RtlInitializeHistoryTable();
                          MiFlags |= 0x1000000u;
                          qword_140C51190 = 0LL;
                          MmConfigurePrefetchSeekThreshold(32);
                          PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                          MiEnablePagingTheExecutive();
                          ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                          MmUnlockPagableImageSection(ExPageLockHandle);
                          qword_140C4ED70 = MiAllocateDummyPage();
                          qword_140C4ED78 = (qword_140C4ED70 + 0x58000000000LL) / 48;
                          v7 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v5, v6);
                          MmBadPointer = (PVOID)v7;
                          if ( v7 )
                          {
                            MmBadPointer = (PVOID)((__int64)(v7 << 25) >> 16);
                            if ( (unsigned int)MiInitializeRelocations() )
                            {
                              qword_140D58888 = KeQueryPerformanceCounter(0LL).QuadPart;
                              MiInitializeTbFlushing();
                              qword_140D58890 = KeQueryPerformanceCounter(0LL).QuadPart;
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
