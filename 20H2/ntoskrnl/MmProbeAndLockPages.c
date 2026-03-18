/*
 * XREFs of MmProbeAndLockPages @ 0x14026AA30
 * Callers:
 *     sub_1403E97E0 @ 0x1403E97E0 (sub_1403E97E0.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MmCopyVirtualMemory @ 0x140679AB0 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x140685D90 (MmProbeAndLockProcessPages.c)
 *     PspGetSetContextInternal @ 0x140687060 (PspGetSetContextInternal.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     AlpcpInitializeCompletionList @ 0x14070FBF4 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x14079EDEC (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x140891654 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140892A08 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E96EC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x14090C7EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092C868 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095D550 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
