/*
 * XREFs of MiProtectionToCacheAttribute @ 0x140241E40
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140210120 (MiResolvePrivateZeroFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildMdlForMappedFileFault @ 0x14023DDD0 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x140241770 (MiCreateSharedZeroPages.c)
 *     MiInitializePfn @ 0x140241A00 (MiInitializePfn.c)
 *     MiInitializeTransitionPfn @ 0x14026E22C (MiInitializeTransitionPfn.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiAllocateContiguousMemory @ 0x140294F3C (MiAllocateContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiGetHardFaultPages @ 0x1402E7D84 (MiGetHardFaultPages.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 *     MmMapMdl @ 0x1405375B0 (MmMapMdl.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x140555970 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiProcessCrcList @ 0x140726B20 (MiProcessCrcList.c)
 *     MiFindLargePageMemory @ 0x1408DA0E4 (MiFindLargePageMemory.c)
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
