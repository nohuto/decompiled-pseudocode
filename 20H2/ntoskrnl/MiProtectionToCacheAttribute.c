/*
 * XREFs of MiProtectionToCacheAttribute @ 0x14028E480
 * Callers:
 *     MiGetHardFaultPages @ 0x140232AB4 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     MiResolvePrivateZeroFault @ 0x140271440 (MiResolvePrivateZeroFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiInitializePfn @ 0x14028E040 (MiInitializePfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x14029C170 (MiBuildMdlForMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiGetFastLargePages @ 0x1403F6384 (MiGetFastLargePages.c)
 *     MmMapMdl @ 0x140535AB0 (MmMapMdl.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiAllocateLargeZeroPages @ 0x14055BF8C (MiAllocateLargeZeroPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiProcessCrcList @ 0x140723090 (MiProcessCrcList.c)
 *     MiFindLargePageMemory @ 0x1408DC924 (MiFindLargePageMemory.c)
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
