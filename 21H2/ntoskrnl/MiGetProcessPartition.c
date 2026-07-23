/*
 * XREFs of MiGetProcessPartition @ 0x1402BF640
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x14067C9A4 (MiDeleteVadBitmap.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 *     MiInSwapStore @ 0x1406BEA2C (MiInSwapStore.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1407045D0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1407059D0 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 *     MmInSwapVirtualAddresses @ 0x140734850 (MmInSwapVirtualAddresses.c)
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408D2D0C (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x1408D7544 (MiLogCommitRequestFailed.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D84E8 (MiFinishPlaceholderVadReplacement.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9C60 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14092F854 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x14099BB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
