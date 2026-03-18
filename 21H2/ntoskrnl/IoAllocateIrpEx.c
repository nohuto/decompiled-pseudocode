/*
 * XREFs of IoAllocateIrpEx @ 0x14022CFA0
 * Callers:
 *     FsRtlGetFileExtents @ 0x140540EA0 (FsRtlGetFileExtents.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1406A443C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14092D730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x140A8D17C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020B830 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1402AACD0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140A7FE00 (IovAllocateIrp.c)
 *     VfTargetDriversIsEnabled @ 0x140A8ACE8 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  __int64 v5; // rsi
  int IsEnabled; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp != 2 )
  {
    if ( ViVerifyAllDrivers == 1 )
      return IovAllocateIrp(a1, a2, a3, retaddr);
    IsEnabled = VfTargetDriversIsEnabled(retaddr);
    LOBYTE(a3) = v3;
    LOBYTE(a2) = v4;
    if ( IsEnabled )
    {
      a1 = v5;
      return IovAllocateIrp(a1, a2, a3, retaddr);
    }
  }
  return IopAllocateIrpWithExtension(a1, a2);
}
