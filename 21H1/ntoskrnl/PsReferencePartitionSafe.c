/*
 * XREFs of PsReferencePartitionSafe @ 0x1402D4758
 * Callers:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiScanPagefiles @ 0x1402402B8 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x140240374 (MiCheckTrimUnusedPageFileRegions.c)
 *     MmQueryMemoryListInformation @ 0x1402BCDA0 (MmQueryMemoryListInformation.c)
 *     MiCheckZeroFreeRebalance @ 0x1402EAA00 (MiCheckZeroFreeRebalance.c)
 *     CcGetPartitionWithCreate @ 0x14030A8F0 (CcGetPartitionWithCreate.c)
 *     MiPartitionObjectToPartition @ 0x1403426CC (MiPartitionObjectToPartition.c)
 *     MiWakeLargePageRebuild @ 0x140389B70 (MiWakeLargePageRebuild.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MiContractWsSwapPageFile @ 0x140655F58 (MiContractWsSwapPageFile.c)
 *     PsReferencePartitionByHandle @ 0x1406624C4 (PsReferencePartitionByHandle.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 24));
  v1 = *(_QWORD *)(a1 + 24);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
