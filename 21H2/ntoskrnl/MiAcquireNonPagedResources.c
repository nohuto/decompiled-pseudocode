/*
 * XREFs of MiAcquireNonPagedResources @ 0x140296FE0
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402944B4 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x140295560 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x140296F74 (MiObtainPoolCharges.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x14038D1B0 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x1403B7568 (MiStoreChargeReservedPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140539860 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x14054F22C (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x140552500 (MiProcessVaContiguityInformation.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055D17C (MiGetCrossPartitionCombineCharges.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x14075ED24 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A56B98 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A66FFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeGapFrames @ 0x140A67B10 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4LL);
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
  MiReturnCommit(a1, a2, v8, v9);
  return 3221225626LL;
}
