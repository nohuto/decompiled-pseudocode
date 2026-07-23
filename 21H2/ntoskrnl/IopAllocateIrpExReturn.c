/*
 * XREFs of IopAllocateIrpExReturn @ 0x14035C790
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140298BE0 (IopBuildAsynchronousFsdRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x14035C630 (IopAllocateIrpMustSucceed.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140500050 (IopAllocateBackpocketIrp.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x1405FA4E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14060CF80 (NtNotifyChangeDirectoryFileEx.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x140644AD0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730E70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x140894040 (IoVerifyVolume.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x14035C7C0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C57A0 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, a4);
}
