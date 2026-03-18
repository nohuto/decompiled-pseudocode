/*
 * XREFs of MiGetProcessPartition @ 0x14021A6D0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x14062DDB0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14062F1B0 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MiInSwapStore @ 0x140656008 (MiInSwapStore.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
 *     MmInSwapVirtualAddresses @ 0x140720690 (MmInSwapVirtualAddresses.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408CE25C (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x1408D2A94 (MiLogCommitRequestFailed.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D3A38 (MiFinishPlaceholderVadReplacement.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D51B0 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1408D76C0 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14092AE44 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x1409961BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
