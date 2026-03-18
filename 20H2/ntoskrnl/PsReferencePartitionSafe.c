/*
 * XREFs of PsReferencePartitionSafe @ 0x1402636B0
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x1402310F0 (MiCheckZeroFreeRebalance.c)
 *     MmQueryMemoryListInformation @ 0x14024C9D0 (MmQueryMemoryListInformation.c)
 *     MiScanPagefiles @ 0x140265F58 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x140266014 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     CcGetPartitionWithCreate @ 0x1403188C0 (CcGetPartitionWithCreate.c)
 *     MiPartitionObjectToPartition @ 0x140336E60 (MiPartitionObjectToPartition.c)
 *     PsGetNextPartition @ 0x14033B800 (PsGetNextPartition.c)
 *     MiWakeLargePageRebuild @ 0x14038CEE0 (MiWakeLargePageRebuild.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x140539A84 (MiObtainFreePages.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140660764 (PsReferencePartitionByHandle.c)
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     MiContractWsSwapPageFile @ 0x1406F0C78 (MiContractWsSwapPageFile.c)
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
