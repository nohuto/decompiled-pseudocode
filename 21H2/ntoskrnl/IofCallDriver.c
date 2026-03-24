/*
 * XREFs of IofCallDriver @ 0x1403519C0
 * Callers:
 *     IopCallDriverReference @ 0x14022BD00 (IopCallDriverReference.c)
 *     IoSynchronousCallDriver @ 0x1402BECC0 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x1402CB1EC (IoAsynchronousPageWrite.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1402CBBB0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoSynchronousPageWriteEx @ 0x14031BE0C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14031C130 (IoPageReadEx.c)
 *     IoCallDriverWithTracing @ 0x1403538A0 (IoCallDriverWithTracing.c)
 *     CcSetValidData @ 0x140361EF4 (CcSetValidData.c)
 *     PopDequeueQuerySetIrp @ 0x14039814C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140398344 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x14039A8F0 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A729C (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x14059DFA4 (SmKmIssueVolumeIo.c)
 *     IopGetFileInformation @ 0x140620A14 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140620B50 (IoVolumeDeviceToDosName.c)
 *     WmipForwardWmiIrp @ 0x1406396EC (WmipForwardWmiIrp.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     IopGetSetObjectId @ 0x1406813B8 (IopGetSetObjectId.c)
 *     NtApphelpCacheControl @ 0x140686430 (NtApphelpCacheControl.c)
 *     FsRtlSetFileSize @ 0x140689B90 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406B2330 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406BE1C0 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1406C2D20 (FsRtlBalanceReads.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x1406D4860 (FsRtlGetFileSize.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     RawReadWriteDeviceControl @ 0x14071AD48 (RawReadWriteDeviceControl.c)
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071DDD8 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14071DFF0 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x140722250 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407223C0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetVolumeId @ 0x140733450 (IopGetVolumeId.c)
 *     IopFilterResourceRequirementsCall @ 0x140750A80 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140765D84 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14076910C (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14077D1D4 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D6B4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x1407C0170 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407C0270 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140863EEC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140863FD0 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140866260 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140866340 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140866A7C (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088ACFC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D800 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopSetRemoteLink @ 0x140892CF0 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140893EE0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14089A900 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14089B0C4 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408B29C0 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408B4460 (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408ED3F8 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408ED9F4 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14090F334 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F488 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090F8D8 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A508 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14092BE64 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092BF18 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x14098033C (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB134 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1510 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1409E5220 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E5300 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x140A61AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A955E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A957E8 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140398634 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140507FC0 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C4CB4 (IovCallDriver.c)
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
