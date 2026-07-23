/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A94554
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C8A2C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C21628 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C21578,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C2162C |= 1u;
  }
  return 0LL;
}
