/*
 * XREFs of MiGetProcessPartition @ 0x14032A72C
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 *     MiInSwapStore @ 0x1406EBCCC (MiInSwapStore.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1407BC9B0 (MiDecommitRegion.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MiAllocateProcessShadow @ 0x1407F1A10 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MiSessionCreate @ 0x1407F3718 (MiSessionCreate.c)
 *     MiReturnVadCharges @ 0x140977F8C (MiReturnVadCharges.c)
 *     MiCreateVsmEnclave @ 0x140979D48 (MiCreateVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 *     MiLogCommitRequestFailed @ 0x14097F2B0 (MiLogCommitRequestFailed.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14097FF40 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140980040 (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x1409DA178 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
