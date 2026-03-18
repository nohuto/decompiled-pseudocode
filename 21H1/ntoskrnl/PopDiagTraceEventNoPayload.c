/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14031D664
 * Callers:
 *     PopScanIdleList @ 0x14035C514 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x140569DDC (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x140760BCC (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140760BE8 (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x140762570 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407625C4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140762624 (PopResumeApps.c)
 *     PopResumeServices @ 0x14076269C (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140762718 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076279C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140765C5C (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1408E1FF0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408E3140 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408E629C (PopDiagTraceIoCoalescingOff.c)
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099335C (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140994600 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14099461C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409AE804 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409AE820 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
