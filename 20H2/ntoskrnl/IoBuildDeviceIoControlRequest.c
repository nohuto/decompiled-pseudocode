/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14020A090
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x1405DD5B0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405DD720 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x1405F8320 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1405FA930 (IoVolumeDeviceToDosName.c)
 *     IopGetSetObjectId @ 0x1406A05D8 (IopGetSetObjectId.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406D47F0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406DE170 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406E2C50 (FsRtlBalanceReads.c)
 *     IopGetVolumeId @ 0x14072F200 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x1407793F4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1407898D4 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408662EC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408663D0 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140868650 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140868730 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140890260 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140895730 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089D358 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x140911B84 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140911CD8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14092E694 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140982C1C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
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
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
