/*
 * XREFs of IofCallDriver @ 0x14028F780
 * Callers:
 *     IopCallDriverReference @ 0x140221CF0 (IopCallDriverReference.c)
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     CcSetValidData @ 0x14027171C (CcSetValidData.c)
 *     IoCallDriverWithTracing @ 0x140290D90 (IoCallDriverWithTracing.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 *     IoSynchronousCallDriver @ 0x14034C550 (IoSynchronousCallDriver.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140359ED0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x14039581C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140395A14 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x140398000 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A45BC (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x140598AD4 (SmKmIssueVolumeIo.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x14060EA60 (FsRtlGetFileSize.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x14063A460 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14063A5D0 (IoVolumeDeviceNameToGuidPath.c)
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 *     IopGetFileInformation @ 0x1406613F4 (IopGetFileInformation.c)
 *     NtApphelpCacheControl @ 0x140661530 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1406616D0 (IoVolumeDeviceToDosName.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     RawReadWriteDeviceControl @ 0x1406BBF48 (RawReadWriteDeviceControl.c)
 *     IopGetSetObjectId @ 0x1406D41D8 (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x1406DBEFC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407010C0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x14070C030 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1407108C0 (FsRtlBalanceReads.c)
 *     IopGetVolumeId @ 0x140721210 (IopGetVolumeId.c)
 *     IopFilterResourceRequirementsCall @ 0x14073AFB0 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140753EE0 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140756E24 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14076ADE4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14077B2D4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x1407ADE30 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407ADF30 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408608D0 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408609B4 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140862C30 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140862D10 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x14086344C (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140887C0C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088A710 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x14088FC48 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140890E20 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140897680 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408AF8C0 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408B1360 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408E9FE8 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408EA5E4 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14090BF54 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090C0A8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090C4F8 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140926F10 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14092886C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140928920 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x14097CE4C (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A82C4 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE500 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1409E2210 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E22F0 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x140A67244 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8CE7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A921A8 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A92AF8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A92CF8 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140395D04 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140502A78 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C1CA4 (IovCallDriver.c)
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
