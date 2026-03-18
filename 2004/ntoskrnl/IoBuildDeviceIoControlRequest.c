/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14027D5F0
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x14063A460 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14063A5D0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140661530 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1406616D0 (IoVolumeDeviceToDosName.c)
 *     IopGetSetObjectId @ 0x1406D41D8 (IopGetSetObjectId.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407010C0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x14070C030 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1407108C0 (FsRtlBalanceReads.c)
 *     IopGetVolumeId @ 0x140721210 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x14076ADE4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14077B2D4 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408608D0 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408609B4 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140862C30 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140862D10 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088A710 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x14088FC48 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1408976A8 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090BF54 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090C0A8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14092886C (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14097CE4C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
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
