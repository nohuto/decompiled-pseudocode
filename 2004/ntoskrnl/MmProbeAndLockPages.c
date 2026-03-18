/*
 * XREFs of MmProbeAndLockPages @ 0x14024D8A0
 * Callers:
 *     sub_1403E6B50 @ 0x1403E6B50 (sub_1403E6B50.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405EA910 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x1406036D0 (MmProbeAndLockProcessPages.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     AlpcpInitializeCompletionList @ 0x1406F48D8 (AlpcpInitializeCompletionList.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x14088BB04 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CFBC4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E3AD8 (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x140906BCC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140926A40 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140957790 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
