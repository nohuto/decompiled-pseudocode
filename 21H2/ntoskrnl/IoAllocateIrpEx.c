/*
 * XREFs of IoAllocateIrpEx @ 0x1402A1700
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404EED40 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x140689B90 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetFileSize @ 0x1406D4860 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088ACFC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402ED748 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x140351A70 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C47A0 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3, retaddr);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3, retaddr);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
