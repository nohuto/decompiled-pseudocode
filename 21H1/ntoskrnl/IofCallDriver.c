/*
 * XREFs of IofCallDriver @ 0x140252F00
 * Callers:
 *     IoCallDriverWithTracing @ 0x140254510 (IoCallDriverWithTracing.c)
 *     IopCallDriverReference @ 0x14027AD40 (IopCallDriverReference.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     CcSetValidData @ 0x1402E0DAC (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     IoSynchronousCallDriver @ 0x14030EE80 (IoSynchronousCallDriver.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14031C300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140394C4C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140394E44 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x1403973F0 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A3E5C (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x1405983E4 (SmKmIssueVolumeIo.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     NtApphelpCacheControl @ 0x1405DB230 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1405DB3D0 (IoVolumeDeviceToDosName.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x140643C90 (FsRtlGetFileSize.c)
 *     RawReadWriteDeviceControl @ 0x140652488 (RawReadWriteDeviceControl.c)
 *     WmipForwardWmiIrp @ 0x1406818BC (WmipForwardWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1406877D0 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140687970 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x140687FE0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140688150 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetSetObjectId @ 0x1406B5B58 (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x1406BABEC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406BAEB0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406DE430 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406E8230 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406ECDE0 (FsRtlBalanceReads.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     IopGetVolumeId @ 0x14071F350 (IopGetVolumeId.c)
 *     IopFilterResourceRequirementsCall @ 0x140739430 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x14074F850 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14075478C (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x140768A04 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140778EC4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x1407AACD0 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407AADD0 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14085F57C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x14085F660 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140861910 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408619F0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x14086212C (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1408868EC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140887E70 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1408893F0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x14088E928 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140896360 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408AE5A0 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408B0040 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408E8D68 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408E9364 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14090ACA4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090ADF8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090B248 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140925C60 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1409275BC (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140927670 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x14097BAAC (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A7464 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE4F0 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1409E21B0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E2290 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A54414 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A933E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A935E8 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140395134 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140502428 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C1C94 (IovCallDriver.c)
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
