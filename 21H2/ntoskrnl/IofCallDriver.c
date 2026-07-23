/*
 * XREFs of IofCallDriver @ 0x14035C710
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     IoSynchronousCallDriver @ 0x14023D110 (IoSynchronousCallDriver.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14024A300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopCallDriverReference @ 0x1402D0580 (IopCallDriverReference.c)
 *     CcSetValidData @ 0x1402F75BC (CcSetValidData.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     IoCallDriverWithTracing @ 0x14035E5F0 (IoCallDriverWithTracing.c)
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140398494 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x14039AA40 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A73EC (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x14059E1D4 (SmKmIssueVolumeIo.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x1405DC3FC (IopGetSetObjectId.c)
 *     NtApphelpCacheControl @ 0x1405E5590 (NtApphelpCacheControl.c)
 *     FsRtlSetFileSize @ 0x1405E9020 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1405E9140 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     FsRtlIssueDeviceIoControl @ 0x140611370 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x14061D420 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406219D0 (FsRtlBalanceReads.c)
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14068A7C0 (IoVolumeDeviceToDosName.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     RawReadWriteDeviceControl @ 0x1406C8A38 (RawReadWriteDeviceControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406F9B50 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406F9CC0 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     IopGetVolumeId @ 0x140733610 (IopGetVolumeId.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x1407692CC (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14077D394 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D874 (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x1407C0690 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140864044 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864128 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x1408663C0 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408664A0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140866BDC (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AE5C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088C3E0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D960 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140892E50 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140894040 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14089AA60 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408B2B20 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408B45C0 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408ED558 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408EDB54 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14090F494 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090FA38 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A668 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14092BFC4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092C078 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x14098051C (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AC064 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1409E6220 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E6300 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x140A62AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A95C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A965E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A967E8 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140398784 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140507F40 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C5CB4 (IovCallDriver.c)
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
