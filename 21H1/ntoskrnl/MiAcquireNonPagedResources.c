/*
 * XREFs of MiAcquireNonPagedResources @ 0x140328924
 * Callers:
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x140326FF0 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1403279C4 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1403288B8 (MiObtainPoolCharges.c)
 *     MiGetFileHashPage @ 0x140389630 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x1403B2600 (MiStoreChargeReservedPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140533B00 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x1405494CC (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055744C (MiGetCrossPartitionCombineCharges.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14055DE44 (MiMakePageBad.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140747544 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D6028 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A4E210 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5E5DC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeGapFrames @ 0x140A5F0F0 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v10; // r9

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4u);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL, v10);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)MiChargeResident(a1, a2, a3, v8) )
    return 0LL;
  MiReturnCommit(a1, a2);
  return 3221225626LL;
}
