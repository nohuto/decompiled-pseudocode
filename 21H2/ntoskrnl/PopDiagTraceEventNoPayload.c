/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140256CA0
 * Callers:
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1405D0668 (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x1407FE600 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1407FE61C (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x1407FFCB0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407FFD04 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407FFD64 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407FFDDC (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1407FFE58 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407FFEBC (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140808C74 (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x14098F180 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x140990100 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1409927E0 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1409932A0 (PopDiagTraceSuspendResumeNotification.c)
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140A51CA4 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140A52F10 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140A52F2C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140A6BCB0 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140A6BCCC (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
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
