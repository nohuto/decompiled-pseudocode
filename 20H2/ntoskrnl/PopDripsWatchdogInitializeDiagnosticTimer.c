/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A966E4
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C444C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C21468 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C213B8,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C2146C |= 1u;
  }
  return 0LL;
}
