/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x140330ADC (PopThermalTraceRundownEvents.c)
 *     FsRtlReleaseFileForModWrite @ 0x140344298 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140344550 (FsRtlAcquireFileForModWriteEx.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140361820 (IoGetDeviceAttachmentBaseRef.c)
 *     PoStoreRequester @ 0x140361B40 (PoStoreRequester.c)
 *     PopScanIdleList @ 0x140362C84 (PopScanIdleList.c)
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140389CD4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140389E64 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A138 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038A324 (PopTraceThermalRequestActiveActivity.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C4998 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C4A3C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050B3F0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140563900 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14057170C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140571824 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140571944 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405720C0 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405721EC (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14059C218 (SmKmEtwAppendObjectName.c)
 *     PopDiagTraceThermalRequest @ 0x1406E1B60 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406E2170 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x14072BB4C (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407620B8 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x1407AFD4C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407BC314 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407BC4E0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407BC570 (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407C5CC4 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408E5F10 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408EA1C0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408ED388 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408EE644 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408EE740 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408FC3C8 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x14099590C (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14036193C (IopGetDeviceAttachmentBase.c)
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
