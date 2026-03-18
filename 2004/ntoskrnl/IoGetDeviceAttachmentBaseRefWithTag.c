/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C
 * Callers:
 *     PoStoreRequester @ 0x140276E3C (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140277450 (IoGetDeviceAttachmentBaseRef.c)
 *     PopThermalTraceRundownEvents @ 0x140278680 (PopThermalTraceRundownEvents.c)
 *     PopScanIdleList @ 0x1402DCEA0 (PopScanIdleList.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402F77F4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F824C (FsRtlReleaseFileForModWrite.c)
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140387B14 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140387CA4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140387F78 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140388164 (PopTraceThermalRequestActiveActivity.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C2228 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C22CC (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140507AC0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x14055FF20 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14056DCDC (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14056DDF4 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14056DF14 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x14056E690 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14056E7BC (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x140598778 (SmKmEtwAppendObjectName.c)
 *     PopDiagTraceThermalRequest @ 0x14070F344 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14070F930 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x14071DCB0 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407534D8 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x1407A0A1C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407AE3D4 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407AE5A0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407AE630 (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407B7438 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408E00D0 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408E45B0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408E7778 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408E8A34 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408E8B30 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F67B8 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x14098F950 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140A66D60 (IopMarkBootPartition.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14027756C (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
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
