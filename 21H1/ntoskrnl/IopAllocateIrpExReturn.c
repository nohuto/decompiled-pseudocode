/*
 * XREFs of IopAllocateIrpExReturn @ 0x140252F80
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140253450 (IopAllocateIrpMustSucceed.c)
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateBackpocketIrp @ 0x1404FA650 (IopAllocateBackpocketIrp.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14033F4AC (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C1790 (IovAllocateIrp.c)
 */

__int64 IopAllocateIrpExReturn()
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate();
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension();
  return IovAllocateIrp();
}
