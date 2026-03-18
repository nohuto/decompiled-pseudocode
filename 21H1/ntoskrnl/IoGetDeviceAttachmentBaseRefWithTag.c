/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x14033C340 (PopThermalTraceRundownEvents.c)
 *     PoStoreRequester @ 0x14033CA94 (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14033DE00 (IoGetDeviceAttachmentBaseRef.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1403537D4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035422C (FsRtlReleaseFileForModWrite.c)
 *     PopScanIdleList @ 0x14035C514 (PopScanIdleList.c)
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140386BA4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140386D34 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140387008 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1403871F4 (PopTraceThermalRequestActiveActivity.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C140C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140507470 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x14055F8D0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14056D68C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14056D7A4 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14056D8C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x14056E040 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14056E16C (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x140598088 (SmKmEtwAppendObjectName.c)
 *     PopDiagTraceThermalRequest @ 0x1406EB910 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406EBE10 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x14071BD30 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x14074EE48 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x14079CA3C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407AB274 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407AB440 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407AB4D0 (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407B42C8 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408DEE70 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408E3330 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408E64F8 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408E77B4 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408E78B0 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F54C8 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x14098EBFC (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140A53F30 (IopMarkBootPartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x14033DF1C (IopGetDeviceAttachmentBase.c)
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
