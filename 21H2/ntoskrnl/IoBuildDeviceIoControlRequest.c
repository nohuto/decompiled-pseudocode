/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14022C130
 * Callers:
 *     IoVolumeDeviceToDosName @ 0x140620B50 (IoVolumeDeviceToDosName.c)
 *     IopGetSetObjectId @ 0x1406813B8 (IopGetSetObjectId.c)
 *     NtApphelpCacheControl @ 0x140686430 (NtApphelpCacheControl.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406B2330 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406BE1C0 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406C2D20 (FsRtlBalanceReads.c)
 *     IoVolumeDeviceToGuidPath @ 0x140722250 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407223C0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetVolumeId @ 0x140733450 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x14077D1D4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D6B4 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140863EEC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140863FD0 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140866260 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140866340 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D800 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140892CF0 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089A928 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090F334 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F488 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14092BE64 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14098033C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return IopBuildDeviceIoControlRequest(
           IoControlCode,
           (__int64)DeviceObject,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock,
           retaddr);
}
