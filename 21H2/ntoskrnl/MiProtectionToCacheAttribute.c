/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1402E6690
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x140218D98 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     MiGetHardFaultPages @ 0x1402990D4 (MiGetHardFaultPages.c)
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 *     MiPrefetchPreallocatePages @ 0x140539860 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  if ( !a1 )
    return 3LL;
  if ( a1 == 31 )
    return 1LL;
  if ( a1 >> 3 == 3 )
  {
    if ( (a1 & 7) == 0 )
      return 1LL;
    return 2LL;
  }
  else
  {
    return a1 >> 3 != 1;
  }
}
