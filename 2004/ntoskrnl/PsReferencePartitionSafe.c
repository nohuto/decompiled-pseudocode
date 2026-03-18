/*
 * XREFs of PsReferencePartitionSafe @ 0x14026ADB8
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140263D70 (MmQueryMemoryListInformation.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiScanPagefiles @ 0x1402F35B8 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402F3674 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiPartitionObjectToPartition @ 0x14031338C (MiPartitionObjectToPartition.c)
 *     MiCheckZeroFreeRebalance @ 0x14031E250 (MiCheckZeroFreeRebalance.c)
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x1403471F0 (CcGetPartitionWithCreate.c)
 *     MiWakeLargePageRebuild @ 0x14038ABE0 (MiWakeLargePageRebuild.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PsReferencePartitionByHandle @ 0x14061CDA4 (PsReferencePartitionByHandle.c)
 *     MiContractWsSwapPageFile @ 0x1406D05B8 (MiContractWsSwapPageFile.c)
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
