/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1402042E0
 * Callers:
 *     NtApphelpCacheControl @ 0x1405DB230 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1405DB3D0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuidPath @ 0x140687FE0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140688150 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetSetObjectId @ 0x1406B5B58 (IopGetSetObjectId.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406DE430 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406E8230 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406ECDE0 (FsRtlBalanceReads.c)
 *     IopGetVolumeId @ 0x14071F350 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140768A04 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140778EC4 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14085F57C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x14085F660 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140861910 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408619F0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1408893F0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x14088E928 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140896388 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090ACA4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090ADF8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1409275BC (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14097BAAC (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
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
