/*
 * XREFs of MmProbeAndLockPages @ 0x1402A68D0
 * Callers:
 *     sub_1403E5D10 @ 0x1403E5D10 (sub_1403E5D10.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CD204 (WbMakeUserDataPagesKernelWritable.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x140638710 (MmProbeAndLockProcessPages.c)
 *     CcMdlRead @ 0x140640770 (CcMdlRead.c)
 *     AlpcpInitializeCompletionList @ 0x140676454 (AlpcpInitializeCompletionList.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     PspGetSetContextInternal @ 0x1406F1830 (PspGetSetContextInternal.c)
 *     VslCallEnclave @ 0x14088A7E4 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CE874 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E2858 (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409058EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
