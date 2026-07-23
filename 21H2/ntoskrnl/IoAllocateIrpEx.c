/*
 * XREFs of IoAllocateIrpEx @ 0x14021EC80
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404EEF80 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x1405E9020 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1405E9140 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AE5C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088C3E0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x14035C7C0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C57A0 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
