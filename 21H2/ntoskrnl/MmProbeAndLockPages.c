/*
 * XREFs of MmProbeAndLockPages @ 0x1402AE010
 * Callers:
 *     sub_1403EA2C0 @ 0x1403EA2C0 (sub_1403EA2C0.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     AlpcpInitializeCompletionList @ 0x1405D96A0 (AlpcpInitializeCompletionList.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MmProbeAndLockProcessPages @ 0x140689680 (MmProbeAndLockProcessPages.c)
 *     CcMdlRead @ 0x1406AAE90 (CcMdlRead.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x14088ED54 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140890138 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E704C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x14090A0FC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A198 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
