/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A93554
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C870C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C215E8 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C21538,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C215EC |= 1u;
  }
  return 0LL;
}
