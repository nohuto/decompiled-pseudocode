/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A909FC
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A70F60 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407B5C1C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C21368 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C212B8,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C2136C |= 1u;
  }
  return 0LL;
}
