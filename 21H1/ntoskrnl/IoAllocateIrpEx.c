/*
 * XREFs of IoAllocateIrpEx @ 0x1402F6690
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404E95A0 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x140643C90 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1406BABEC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406BAEB0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1408868EC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140887E70 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE4F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14033F4AC (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C1790 (IovAllocateIrp.c)
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
