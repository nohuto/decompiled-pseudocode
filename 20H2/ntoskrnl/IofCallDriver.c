/*
 * XREFs of IofCallDriver @ 0x140211330
 * Callers:
 *     CcSetValidData @ 0x14020467C (CcSetValidData.c)
 *     IopCallDriverReference @ 0x14020A830 (IopCallDriverReference.c)
 *     IoCallDriverWithTracing @ 0x14020D910 (IoCallDriverWithTracing.c)
 *     IoPageReadEx @ 0x14024E230 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 *     IoSynchronousCallDriver @ 0x14031D280 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x140329CA0 (IoAsynchronousPageWrite.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14032A7D0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140397CDC (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140397ED4 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x14039A480 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A69DC (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x14059C574 (SmKmIssueVolumeIo.c)
 *     RawReadWriteDeviceControl @ 0x1405D8A28 (RawReadWriteDeviceControl.c)
 *     CmpFileFlushAndPurge @ 0x1405DCDAC (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405DD5B0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405DD720 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x1405F8320 (NtApphelpCacheControl.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     IoVolumeDeviceToDosName @ 0x1405FA930 (IoVolumeDeviceToDosName.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1406366D4 (IopGetFileInformation.c)
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
 *     IopGetSetObjectId @ 0x1406A05D8 (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x1406B407C (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406B4340 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406D47F0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406DE170 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406E2C50 (FsRtlBalanceReads.c)
 *     FsRtlGetFileSize @ 0x14070AA70 (FsRtlGetFileSize.c)
 *     IopGetVolumeId @ 0x14072F200 (IopGetVolumeId.c)
 *     IopFilterResourceRequirementsCall @ 0x140749EC0 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140762AB4 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140765A64 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140778120 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x1407793F4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1407898D4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x1407BBD70 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407BBE70 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408662EC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408663D0 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140868650 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140868730 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140868E6C (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088D75C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088ECE0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140890260 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140895730 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140896910 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14089D330 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14089DAF4 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408B53F0 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408B6F80 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408EFBF8 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408F01F4 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x140911B84 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140911CD8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140912128 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092CD38 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14092E694 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092E748 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140982C1C (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AE234 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D4520 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1409E8230 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E8310 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A5A814 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A98758 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A98958 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1403981C4 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140506488 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  __int64 MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver((PADAPTER_OBJECT)DeviceObject);
    else
      return IovCallDriver((PADAPTER_OBJECT)DeviceObject);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v2;
    MajorFunction = v2->MajorFunction;
    v2->DeviceObject = DeviceObject;
    if ( (_BYTE)MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
      return IopPoHandleIrp(Irp);
    else
      return ((__int64 (__fastcall *)(PDEVICE_OBJECT))DeviceObject->DriverObject->MajorFunction[MajorFunction])(DeviceObject);
  }
}
