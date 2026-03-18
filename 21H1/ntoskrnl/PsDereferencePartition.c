/*
 * XREFs of PsDereferencePartition @ 0x1402D4730
 * Callers:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MmQueryMemoryListInformation @ 0x1402BCDA0 (MmQueryMemoryListInformation.c)
 *     CcGetPartitionWithCreate @ 0x14030A8F0 (CcGetPartitionWithCreate.c)
 *     EtwpClearPartitionContext @ 0x14033FEF8 (EtwpClearPartitionContext.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140342750 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebuildLargePages @ 0x140389C30 (MiRebuildLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052E7EC (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x14052E9B4 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x1405421E0 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x14054B710 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x14054D8E4 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405569C0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x14057E850 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405AAE50 (EtwpSetPartitionContext.c)
 *     MiCreateSection @ 0x14062FFB0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1406301D0 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14064D6E4 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x14064D860 (NtAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x14064DB20 (MmAllocateVirtualMemory.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     NtManagePartition @ 0x140662140 (NtManagePartition.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E2D20 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmGetPageFileInformation @ 0x14070458C (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14075AC10 (MmGetPhysicalMemoryRangesEx2.c)
 *     PspAllocatePartition @ 0x1407B65E8 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14088FF0C (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x1408D2D84 (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x140904E8C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1409086F0 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x1409088A0 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x140908A10 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 64);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
