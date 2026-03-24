/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14028350C
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140254F94 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402559CC (FsRtlAcquireFileForModWriteEx.c)
 *     PopScanIdleList @ 0x140280878 (PopScanIdleList.c)
 *     PoStoreRequester @ 0x140282E3C (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402834F0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopThermalTraceRundownEvents @ 0x14028459C (PopThermalTraceRundownEvents.c)
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038A424 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038A5B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A888 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038AA74 (PopTraceThermalRequestActiveActivity.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C50F8 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C519C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050CF20 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1405653D0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14057311C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140573234 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140573354 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573AD0 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140573BFC (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14059DC48 (SmKmEtwAppendObjectName.c)
 *     PopDiagTraceThermalRequest @ 0x1406C1DA4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406C2380 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x14072FB64 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x140765388 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x1407B578C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407C0714 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407C08E0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407C0970 (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407C9F28 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408E3710 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408E79C0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408EAB88 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408EBE44 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408EBF40 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F9B78 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x14099290C (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x14028360C (IopGetDeviceAttachmentBase.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *DeviceAttachmentBase; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return DeviceAttachmentBase;
}
