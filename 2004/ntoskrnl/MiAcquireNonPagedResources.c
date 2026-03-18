/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402E25C4
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402E1DB8 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402E1ED8 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1402E2558 (MiObtainPoolCharges.c)
 *     MiGetFileHashPage @ 0x14038A6A0 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x1403B43F8 (MiStoreChargeReservedPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140534150 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x140549B1C (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140557A9C (MiGetCrossPartitionCombineCharges.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14055E494 (MiMakePageBad.c)
 *     MiAllocateProcessShadow @ 0x1406AC170 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x1407490C4 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D7378 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A53F10 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5D67C (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeGapFrames @ 0x140A6225C (MiInitializeGapFrames.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
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
