/*
 * XREFs of IoAllocateIrpEx @ 0x140333530
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404E9BD0 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x14060EA60 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1406DBEFC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140887C0C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE500 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14026FE70 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x14028F830 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C17A0 (IovAllocateIrp.c)
 */

PVOID __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return (PVOID)IopAllocateIrpWithExtension(a1, a2);
  return (PVOID)IovAllocateIrp(a1, a2, a3, retaddr);
}
