/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140342880
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1406D3ACC (IopGetSetObjectId.c)
 *     IoVolumeDeviceToDosName @ 0x140710B90 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140780D40 (NtApphelpCacheControl.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407FA460 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1407FC880 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x14080AB40 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x14080C5C8 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14081C234 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140908124 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140908208 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x14090A480 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14090A560 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140930280 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x14093449C (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x140935C64 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14093F428 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x1409B4F34 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B5088 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1409D6368 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140A3437C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
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
