/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C
 * Callers:
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     PoStoreRequester @ 0x14036AC64 (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038ACD0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038AF44 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038B198 (PopTraceThermalZoneActiveActivity.c)
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     HalpIommuGetDeviceId @ 0x1403CD2D0 (HalpIommuGetDeviceId.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403D3464 (PopDiagTraceThermalZoneEnumeration.c)
 *     PoSetSystemWakeDevice @ 0x1405C6AF0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D36DC (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1405D3804 (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D39FC (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D3B30 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1405D4150 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D44DC (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D4604 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1405FB648 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x1407F1CDC (PiControlGetDeviceStack.c)
 *     PopFxRegisterDevice @ 0x1408236BC (PopFxRegisterDevice.c)
 *     IopQueryInterfaceRecurseUp @ 0x140846760 (IopQueryInterfaceRecurseUp.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x14084BC80 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopCheckThermalPolicy @ 0x140850E08 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x140850F5C (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140850FEC (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTraceThermalRequest @ 0x140860CFC (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14086141C (PopDiagTraceCoolingExtension.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14098C1E4 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x140990360 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x140992918 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140993810 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140993904 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A023C (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x140A4ADB0 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140B0E670 (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x1402A4064 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
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
