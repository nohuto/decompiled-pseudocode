/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14032BC04
 * Callers:
 *     PopScanIdleList @ 0x140362C84 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14056DE5C (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x140770ABC (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140770AD8 (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x140772460 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407724B4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140772514 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077258C (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140772608 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077268C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14077664C (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1408E90B0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408E9FD0 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408ED12C (PopDiagTraceIoCoalescingOff.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140998990 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x140999FC8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099AAFC (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14099BDA0 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14099BDBC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409B55D4 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409B55F0 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
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
