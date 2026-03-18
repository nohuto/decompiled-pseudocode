/*
 * XREFs of MiGetProcessPartition @ 0x1402AD1E0
 * Callers:
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406AC170 (MiAllocateProcessShadow.c)
 *     MiInSwapStore @ 0x1406D0668 (MiInSwapStore.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MmInSwapVirtualAddresses @ 0x140722550 (MmInSwapVirtualAddresses.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408CF5AC (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x1408D3DE4 (MiLogCommitRequestFailed.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D4D88 (MiFinishPlaceholderVadReplacement.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D6500 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1408D8A10 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14092C0F4 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x14099758C (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
