/*
 * XREFs of MiInitSystem @ 0x140A54E5C
 * Callers:
 *     MmInitSystem @ 0x140A54D6C (MmInitSystem.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x140296ED4 (MiSetPageTablePfnBuddy.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MmUnlockPagableImageSection @ 0x140325760 (MmUnlockPagableImageSection.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     MiCreateZeroThreadContext @ 0x1403B0DF8 (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x1403B7568 (MiStoreChargeReservedPages.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B75C8 (MiSetSlabAllocatorPolicy.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 *     ExInitializePagedHeaps @ 0x1403C3F60 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBE74 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x1404FC91C (VslInitializeSecurePool.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x140622BCC (MmConfigurePrefetchSeekThreshold.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x1406A7FB0 (MmLockPagableDataSection.c)
 *     MiInitializeSystemSpaceMap @ 0x140786910 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14078697C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeMemoryEvents @ 0x1407A08D4 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x1407A1804 (MiWriteProtectSystemImages.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4DEC (TlgRegisterAggregateProviderEx.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A5488 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializePartitions @ 0x140A4499C (MiInitializePartitions.c)
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A514E4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiAddLoaderHalIoMappings @ 0x140A553A4 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A55464 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140A554E0 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A5556C (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140A55650 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x140A55728 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x140A55864 (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x140A558A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x140A55D74 (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x140A55ED8 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140A55F90 (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140A56074 (MiSectionInitialization.c)
 *     MiMapBBTMemory @ 0x140A562A8 (MiMapBBTMemory.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A562F0 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeTbFlushing @ 0x140A56330 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x140A56780 (MiInitializeRelocations.c)
 *     MiAllocateDummyPage @ 0x140A56B98 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A56CFC (RtlInitializeHistoryTable.c)
 *     MiInitializeKernelCfg @ 0x140A56E64 (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140A56E9C (MiInitializeLoadedModuleList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A574C0 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeRetpoline @ 0x140A57538 (MiInitializeRetpoline.c)
 *     MiInitializeHotPatches @ 0x140A575A0 (MiInitializeHotPatches.c)
 *     KdAllocateDynamicMemory @ 0x140A575F8 (KdAllocateDynamicMemory.c)
 *     MiInitializeBootProcess @ 0x140A58868 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140A589E0 (MiInitializeSharedUserData.c)
 *     PsInitializeQuotaSystem @ 0x140A6D13C (PsInitializeQuotaSystem.c)
 *     MiInitializeCrashDumpPtes @ 0x140A93264 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeVadSecuring @ 0x140A93310 (MiInitializeVadSecuring.c)
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
      if ( (MiFlags & 0x8000) == 0 || VslInitializeSecurePool(qword_140C4FBB8) >= 0 )
      {
        MiMapBBTMemory(a2);
        if ( (unsigned int)MiSectionInitialization() )
        {
          if ( (int)MiInitializeCfg() >= 0 )
          {
            if ( (unsigned int)MiCreateEnclaveRegions(a2) )
            {
              qword_140C4E588 = 0LL;
              qword_140C4EF48 = (__int64)&qword_140C4EF40;
              qword_140C4EF40 = (__int64)&qword_140C4EF40;
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
                    qword_140C526E8 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                    if ( qword_140C526E8 )
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
                          qword_140C4DE08 = 0LL;
                          MiWriteProtectSystemImages();
                          _InterlockedDecrement(&dword_140C4EE88);
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
              byte_140C4E83A = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TlgRegisterAggregateProviderEx(&qword_140C046D8, (unsigned __int16 *)MiTracingEnabledCallback, 0LL);
      *(_QWORD *)&qword_140C4EF20 = &qword_140C046D8;
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140C4EE88);
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
                MiAddLoaderHalIoMappings(qword_140C4FBC8, qword_140C4FBC8 + 0x7FFFFFFFFFLL);
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
                      if ( qword_140C528D0 <= 0xFFFFFFFF )
                        v4 = qword_140C528D0;
                      MEMORY[0xFFFFF780000002E8] = v4;
                      MEMORY[0xFFFFF78000000244] = 0;
                      MiInitializeSystemSpaceMap(qword_140C4CDA8);
                      qword_140C4CB78 = 0LL;
                      qword_140C4E5A8 = 0LL;
                      qword_140C4E5B8 = 0LL;
                      qword_140D58880 = KeQueryPerformanceCounter(0LL).QuadPart;
                      if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                      {
                        if ( (int)MiInitializeKernelCfg() >= 0 )
                        {
                          RtlInitializeHistoryTable();
                          MiFlags |= 0x1000000u;
                          qword_140C511D0[0] = 0LL;
                          MmConfigurePrefetchSeekThreshold(32);
                          PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                          MiEnablePagingTheExecutive();
                          ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                          MmUnlockPagableImageSection(ExPageLockHandle);
                          qword_140C4EDB0 = MiAllocateDummyPage();
                          qword_140C4EDB8 = (qword_140C4EDB0 + 0x58000000000LL) / 48;
                          v7 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v5, v6);
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
