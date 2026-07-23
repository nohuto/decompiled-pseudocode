/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C
 * Callers:
 *     PopScanIdleList @ 0x14026EAB8 (PopScanIdleList.c)
 *     PoStoreRequester @ 0x1402710E8 (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140271700 (IoGetDeviceAttachmentBaseRef.c)
 *     PopThermalTraceRundownEvents @ 0x140272BF4 (PopThermalTraceRundownEvents.c)
 *     FsRtlReleaseFileForModWrite @ 0x140276504 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140276F3C (FsRtlAcquireFileForModWriteEx.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038A574 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038A704 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A9D8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038ABC4 (PopTraceThermalRequestActiveActivity.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C55CC (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050D160 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140565610 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14057335C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140573474 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140573594 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573D10 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140573E3C (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14059DE78 (SmKmEtwAppendObjectName.c)
 *     PopDiagTraceThermalRequest @ 0x140620A64 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140621040 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x14072FD30 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x140765548 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x1407B4EDC (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407C0C34 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407C0E00 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407C0E90 (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407CA248 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408E3870 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408E7B20 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408EACE8 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408EBFA4 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408EC0A0 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F9CD8 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x14099390C (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140A62890 (IopMarkBootPartition.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14027181C (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
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
