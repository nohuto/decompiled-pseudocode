/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402E5C90
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402E3164 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402E4210 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1402E5C24 (MiObtainPoolCharges.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x14038D060 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x1403B73F8 (MiStoreChargeReservedPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x14054EFEC (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x1405522C0 (MiProcessVaContiguityInformation.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055CF3C (MiGetCrossPartitionCombineCharges.c)
 *     MiTransferPartitionPageRun @ 0x140562E10 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563934 (MiMakePageBad.c)
 *     MiAllocateProcessShadow @ 0x1406D073C (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x14075EB64 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DA978 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A55B98 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A65FFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v10; // r9

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit((__int64)a1, a2, 4u);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL, v10);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)MiChargeResident(a1, a2, a3, v8) )
    return 0LL;
  MiReturnCommit(a1, a2);
  return 3221225626LL;
}
