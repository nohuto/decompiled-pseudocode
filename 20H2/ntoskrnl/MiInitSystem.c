/*
 * XREFs of MiInitSystem @ 0x140A52854
 * Callers:
 *     MmInitSystem @ 0x140A52764 (MmInitSystem.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x140249634 (PsSetPagePriorityThread.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     MmUnlockPagableImageSection @ 0x14031C790 (MmUnlockPagableImageSection.c)
 *     MiSetPageTablePfnBuddy @ 0x140336A64 (MiSetPageTablePfnBuddy.c)
 *     MiCreateZeroThreadContext @ 0x1403AAD88 (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x1403B5DB8 (MiStoreChargeReservedPages.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B5E18 (MiSetSlabAllocatorPolicy.c)
 *     KeFlushCurrentTbOnly @ 0x1403B5E58 (KeFlushCurrentTbOnly.c)
 *     ExInitializePagedHeaps @ 0x1403C33D0 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB334 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x1404FADFC (VslInitializeSecurePool.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     MmLockPagableDataSection @ 0x1406B9550 (MmLockPagableDataSection.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406E432C (MmConfigurePrefetchSeekThreshold.c)
 *     PsCreateSystemThread @ 0x1406EE030 (PsCreateSystemThread.c)
 *     MiInitializeSystemSpaceMap @ 0x140782970 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeMemoryEvents @ 0x1407961B4 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x1407970E4 (MiWriteProtectSystemImages.c)
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14079AD68 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializePartitions @ 0x140A43E7C (MiInitializePartitions.c)
 *     MiInitializeDriverImages @ 0x140A4D154 (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A4EB84 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiAddLoaderHalIoMappings @ 0x140A52D9C (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A52E5C (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140A52ED8 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A52F64 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140A53048 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x140A53120 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x140A5325C (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x140A532A0 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x140A5376C (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x140A538D0 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140A53988 (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140A53A6C (MiSectionInitialization.c)
 *     MiMapBBTMemory @ 0x140A53CA0 (MiMapBBTMemory.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A53CE8 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeTbFlushing @ 0x140A53D28 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x140A54178 (MiInitializeRelocations.c)
 *     MiAllocateDummyPage @ 0x140A54590 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A546F4 (RtlInitializeHistoryTable.c)
 *     MiInitializeKernelCfg @ 0x140A5485C (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140A54894 (MiInitializeLoadedModuleList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A54EA4 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeRetpoline @ 0x140A54F1C (MiInitializeRetpoline.c)
 *     MiInitializeHotPatches @ 0x140A54F7C (MiInitializeHotPatches.c)
 *     KdAllocateDynamicMemory @ 0x140A54FD4 (KdAllocateDynamicMemory.c)
 *     MiInitializeBootProcess @ 0x140A56244 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140A563BC (MiInitializeSharedUserData.c)
 *     PsInitializeQuotaSystem @ 0x140A6F1BC (PsInitializeQuotaSystem.c)
 *     MiInitializeCrashDumpPtes @ 0x140A95404 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeVadSecuring @ 0x140A954B0 (MiInitializeVadSecuring.c)
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
        0);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiHotAddBootDeferredDescriptors();
      if ( (MiFlags & 0x8000) == 0 || VslInitializeSecurePool(qword_140C4F9F8) >= 0 )
      {
        MiMapBBTMemory(a2);
        if ( (unsigned int)MiSectionInitialization() )
        {
          if ( (int)MiInitializeCfg() >= 0 )
          {
            if ( (unsigned int)MiCreateEnclaveRegions(a2) )
            {
              qword_140C4E3C8 = 0LL;
              qword_140C4ED88 = (__int64)&qword_140C4ED80;
              qword_140C4ED80 = (__int64)&qword_140C4ED80;
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
                    qword_140C52528 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                    if ( qword_140C52528 )
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
                          qword_140C4DC48 = 0LL;
                          MiWriteProtectSystemImages();
                          _InterlockedDecrement(&dword_140C4ECC8);
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
              byte_140C4E67A = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TlgRegisterAggregateProviderEx(&qword_140C04698, (unsigned __int16 *)MiTracingEnabledCallback, 0LL);
      *(_QWORD *)&qword_140C4ED60 = &qword_140C04698;
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140C4ECC8);
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
                MiAddLoaderHalIoMappings(qword_140C4FA08, qword_140C4FA08 + 0x7FFFFFFFFFLL);
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
                      if ( qword_140C52710 <= 0xFFFFFFFF )
                        v4 = qword_140C52710;
                      MEMORY[0xFFFFF780000002E8] = v4;
                      MEMORY[0xFFFFF78000000244] = 0;
                      MiInitializeSystemSpaceMap(qword_140C4CBE8);
                      qword_140C4C9B8 = 0LL;
                      qword_140C4E3E8 = 0LL;
                      qword_140C4E3F8 = 0LL;
                      qword_140D58880 = KeQueryPerformanceCounter(0LL).QuadPart;
                      if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                      {
                        if ( (int)MiInitializeKernelCfg() >= 0 )
                        {
                          RtlInitializeHistoryTable();
                          MiFlags |= 0x1000000u;
                          qword_140C51010 = 0LL;
                          MmConfigurePrefetchSeekThreshold(32);
                          PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                          MiEnablePagingTheExecutive();
                          ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                          MmUnlockPagableImageSection(ExPageLockHandle);
                          qword_140C4EBF0 = MiAllocateDummyPage();
                          qword_140C4EBF8 = (qword_140C4EBF0 + 0x58000000000LL) / 48;
                          v5 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
                          MmBadPointer = (PVOID)v5;
                          if ( v5 )
                          {
                            MmBadPointer = (PVOID)((__int64)(v5 << 25) >> 16);
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
