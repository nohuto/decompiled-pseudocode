/*
 * XREFs of MmProbeAndLockPages @ 0x140319E90
 * Callers:
 *     sub_1403F9330 @ 0x1403F9330 (sub_1403F9330.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x140708890 (MmProbeAndLockProcessPages.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x1407F5914 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x14088151A (VslCallEnclave.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1409152A4 (CmpLockKeyBodyIntoMemory.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x140933A9C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     PopReadPagesFromHiberFile @ 0x14098F634 (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409AF550 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D43FC (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A06B80 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  _BYTE *v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD v15[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = MiProbeAndLockPrepare(
         (unsigned int)v15,
         (_DWORD)MemoryDescriptorList,
         LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         AccessMode != 0,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v7 = MiProbeAndLockPacket(v15);
  v8 = MiProbeAndLockComplete(v15, v7, 3LL);
  v9 = (_BYTE *)v15[16];
  v10 = v8;
  if ( v15[16] )
  {
    v11 = *(unsigned int *)(v15[16] + 52LL);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v12 = v15[14] + (v11 | ((unsigned __int64)*(unsigned __int8 *)(v15[16] + 34LL) << 31));
    v13 = v15[15];
    *(_DWORD *)(v15[16] + 52LL) ^= (v12 ^ *(_DWORD *)(v15[16] + 52LL)) & 0x7FFFFFFF;
    v9[34] = v12 >> 31;
    v14 = v13 - v15[14];
    if ( v14 )
      MiReturnFullProcessCommitment(v15[11], v14);
    MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus(v10);
}
