/*
 * XREFs of PsDereferencePartition @ 0x14026AD90
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140263D70 (MmQueryMemoryListInformation.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     EtwpClearPartitionContext @ 0x1402FFAC8 (EtwpClearPartitionContext.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140313410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x1403471F0 (CcGetPartitionWithCreate.c)
 *     MiRebuildLargePages @ 0x14038ACA0 (MiRebuildLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052EE3C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x14052F004 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x140542830 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x14054BD60 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x14054DF34 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140557010 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x14057EE90 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405AB540 (EtwpSetPartitionContext.c)
 *     MiCreateSection @ 0x1405FAF70 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405FB190 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     NtManagePartition @ 0x14061CA20 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406B66C4 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1406B6840 (NtAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1406B6B00 (MmAllocateVirtualMemory.c)
 *     MmGetPageFileInformation @ 0x1406D2E1C (MmGetPageFileInformation.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14075D040 (MmGetPhysicalMemoryRangesEx2.c)
 *     PspAllocatePartition @ 0x1407B9758 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089122C (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1408CD1D0 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x1408D40D4 (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x14090616C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1409099A0 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x140909B50 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x140909CC0 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
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
