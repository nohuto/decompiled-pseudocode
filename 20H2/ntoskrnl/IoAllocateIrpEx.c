/*
 * XREFs of IoAllocateIrpEx @ 0x1403064E0
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404ED460 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x1406B407C (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406B4340 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetFileSize @ 0x14070AA70 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088D75C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088ECE0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D4520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1402113E0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14031F2B8 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C77B0 (IovAllocateIrp.c)
 */

PVOID __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return (PVOID)IopAllocateIrpWithExtension(a1, a2, a3, retaddr);
  return (PVOID)IovAllocateIrp(a1, a2, a3, retaddr);
}
