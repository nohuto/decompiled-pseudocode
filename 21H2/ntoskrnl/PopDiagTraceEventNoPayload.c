/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1402CD1D4
 * Callers:
 *     PopScanIdleList @ 0x140280878 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14056F86C (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x14077498C (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1407749A8 (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x140776410 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776464 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407764C4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077653C (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1407765B8 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077663C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14077A5FC (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1408E68B0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408E77D0 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408EA92C (PopDiagTraceIoCoalescingOff.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x1409950D0 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140997CEC (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140998F90 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140998FAC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409B24D4 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409B24F0 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
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
