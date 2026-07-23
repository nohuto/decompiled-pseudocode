/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14024B6D4
 * Callers:
 *     PopScanIdleList @ 0x14026EAB8 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14056FAAC (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x140774B4C (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140774B68 (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x1407765D0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776624 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140776684 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407766FC (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140776778 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407767FC (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14077A7BC (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1408E6A10 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408E7930 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408EAA8C (PopDiagTraceIoCoalescingOff.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x1409960D0 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140998CEC (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140999F90 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140999FAC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409B3404 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409B3420 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
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
