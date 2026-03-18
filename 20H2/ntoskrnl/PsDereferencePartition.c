/*
 * XREFs of PsDereferencePartition @ 0x140263688
 * Callers:
 *     MmQueryMemoryListInformation @ 0x14024C9D0 (MmQueryMemoryListInformation.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     CcGetPartitionWithCreate @ 0x1403188C0 (CcGetPartitionWithCreate.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1403341D0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     PsGetNextPartition @ 0x14033B800 (PsGetNextPartition.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     EtwpClearPartitionContext @ 0x140360480 (EtwpClearPartitionContext.c)
 *     MiRebuildLargePages @ 0x14038CFA0 (MiRebuildLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053280C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1405329D4 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x140539A84 (MiObtainFreePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x140546200 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x14054F730 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x140551904 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055A9E0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x1405828C0 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405AF0A0 (EtwpSetPartitionContext.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14065EABC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     NtManagePartition @ 0x1406603E0 (NtManagePartition.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     MmAllocateVirtualMemory @ 0x14067C130 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x14067D390 (NtAllocateVirtualMemory.c)
 *     MiCreateSection @ 0x14067F4D0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14067F6F0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14069A68C (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x1406DE9BC (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076B7A0 (MmGetPhysicalMemoryRangesEx2.c)
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140896D1C (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1408D3010 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x1408D9F14 (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x14090BD8C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090F5C0 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14090F770 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14090F8E0 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
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
