/*
 * XREFs of MiAcquireNonPagedResources @ 0x140336B70
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x14033404C (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1403350F0 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x140336B04 (MiObtainPoolCharges.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x14038C940 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x1403B5DB8 (MiStoreChargeReservedPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x14054D4EC (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055B46C (MiGetCrossPartitionCombineCharges.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140561E64 (MiMakePageBad.c)
 *     MiAllocateProcessShadow @ 0x1406EDB40 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140757CA4 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DD1B8 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A54590 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A649DC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r8d

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4u);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)MiChargeResident(a1, a2, a3) )
    return 0LL;
  MiReturnCommit(a1, a2);
  return 3221225626LL;
}
