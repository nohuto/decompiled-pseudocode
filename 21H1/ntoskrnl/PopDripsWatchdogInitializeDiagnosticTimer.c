/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A913F4
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407B2AAC (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C215A8 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C214F8,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C215AC |= 1u;
  }
  return 0LL;
}
