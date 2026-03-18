/*
 * XREFs of IofCallDriver @ 0x1402AC2D0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     CcSetValidData @ 0x14023F3E8 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopQueueQuerySetIrp @ 0x1403A4264 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1403A4EC4 (PopDequeueQuerySetIrp.c)
 *     PoCallDriver @ 0x1403A6C60 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403B4174 (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x1405FB99C (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpGetVolumeClusterSize @ 0x14068BEAC (CmpGetVolumeClusterSize.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1406A443C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1406D3ACC (IopGetSetObjectId.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140710B90 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     IopFilterResourceRequirementsCall @ 0x140748D6C (IopFilterResourceRequirementsCall.c)
 *     RawReadWriteDeviceControl @ 0x14074BBC4 (RawReadWriteDeviceControl.c)
 *     PnpAsynchronousCall @ 0x14074C5A8 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     NtApphelpCacheControl @ 0x140780D40 (NtApphelpCacheControl.c)
 *     WmipForwardWmiIrp @ 0x140783A9C (WmipForwardWmiIrp.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407FA460 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1407FC880 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x14080AB40 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14080C5C8 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14081C234 (FsRtlIssueFileNotificationFsctl.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     PopThermalWorker @ 0x140850980 (PopThermalWorker.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140908124 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140908208 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x14090A480 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14090A560 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x14090AD84 (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14092D730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140930280 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x14093449C (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x140935C64 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14093F400 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x14095A544 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x140994E28 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x140995414 (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x140999A80 (PopFanWorker.c)
 *     RawPerformDevIoCtrl @ 0x1409B4F34 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B5088 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B54D8 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D48D8 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1409D6368 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D6428 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140A3437C (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x140A8D17C (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140A9E460 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140A9E540 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140B0EB5C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140B55478 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B55668 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1403A374C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  __int64 MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver(DeviceObject);
    else
      return IovCallDriver(DeviceObject);
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
