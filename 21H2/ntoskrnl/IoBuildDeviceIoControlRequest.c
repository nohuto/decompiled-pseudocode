/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1402D09B0
 * Callers:
 *     IopGetSetObjectId @ 0x1405DC3FC (IopGetSetObjectId.c)
 *     NtApphelpCacheControl @ 0x1405E5590 (NtApphelpCacheControl.c)
 *     FsRtlIssueDeviceIoControl @ 0x140611370 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x14061D420 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406219D0 (FsRtlBalanceReads.c)
 *     IoVolumeDeviceToDosName @ 0x14068A7C0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406F9B50 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406F9CC0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetVolumeId @ 0x140733610 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x14077D394 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D874 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140864044 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864128 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x1408663C0 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408664A0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D960 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140892E50 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089AA88 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090F494 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14092BFC4 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14098051C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
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
