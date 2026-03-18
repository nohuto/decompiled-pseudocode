/*
 * XREFs of MiGetProcessPartition @ 0x14027C520
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x1406247E0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140625BE0 (MiDecommitRegion.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x1406602C0 (MiDeleteVadBitmap.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 *     MiAllocateProcessShadow @ 0x1406EDB40 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MiInSwapStore @ 0x1406F0CBC (MiInSwapStore.c)
 *     MmInSwapVirtualAddresses @ 0x140730660 (MmInSwapVirtualAddresses.c)
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408D53EC (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x1408D9C24 (MiLogCommitRequestFailed.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408DABC8 (MiFinishPlaceholderVadReplacement.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408DC340 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x140931F24 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x14099D5CC (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
