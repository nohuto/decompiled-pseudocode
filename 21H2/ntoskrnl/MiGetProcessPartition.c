/*
 * XREFs of MiGetProcessPartition @ 0x14021AD40
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140682EB0 (MiDeleteVadBitmap.c)
 *     MiAllocateProcessShadow @ 0x1406D073C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406D0824 (MiAllocateTopLevelPage.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1406ED1F0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1406EE5F0 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 *     MiInSwapStore @ 0x1407103DC (MiInSwapStore.c)
 *     MmInSwapVirtualAddresses @ 0x140734690 (MmInSwapVirtualAddresses.c)
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408D2BAC (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x1408D73E4 (MiLogCommitRequestFailed.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D8388 (MiFinishPlaceholderVadReplacement.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9B00 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1408DC010 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14092F6F4 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x14099AB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
