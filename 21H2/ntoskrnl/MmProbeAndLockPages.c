/*
 * XREFs of MmProbeAndLockPages @ 0x140209710
 * Callers:
 *     sub_1403EA150 @ 0x1403EA150 (sub_1403EA150.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x14061FA10 (MmProbeAndLockProcessPages.c)
 *     AlpcpInitializeCompletionList @ 0x14067EC00 (AlpcpInitializeCompletionList.c)
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x140683180 (ExLockUserBuffer.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     CcMdlRead @ 0x1406D3BB0 (CcMdlRead.c)
 *     ExInitializeLeapSecondData @ 0x1407A8EAC (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x14088EBF4 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14088FFD8 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C955C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6EEC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x140909F9C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A038 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095ADD0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF40 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
