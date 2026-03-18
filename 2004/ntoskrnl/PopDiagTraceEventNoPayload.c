/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14035B1A4
 * Callers:
 *     PopScanIdleList @ 0x1402DCEA0 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14056A42C (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x1407624AC (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1407624C8 (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x140763E50 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140763EA4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140763F04 (PopResumeApps.c)
 *     PopResumeServices @ 0x140763F7C (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140763FF8 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076407C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14076761C (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1408E3270 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408E43C0 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408E751C (PopDiagTraceIoCoalescingOff.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140992920 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099499C (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140995C40 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140995C5C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409AF664 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409AF680 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
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
