/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x140571664
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1405642E0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E7310 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 7u, a2);
  }
}
