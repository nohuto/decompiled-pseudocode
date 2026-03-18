/*
 * XREFs of IopAllocateIrpExReturn @ 0x1402AACA0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateIrpMustSucceed @ 0x1402AA860 (IopAllocateIrpMustSucceed.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404183E0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140556050 (IopAllocateBackpocketIrp.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020B830 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1402AACD0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140A7FE00 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
