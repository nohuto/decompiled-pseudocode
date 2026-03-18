/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140A90974
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A70F60 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407B5C1C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx

  v0 = PopDripsCallbackInterval;
  if ( PopDripsCallbackInterval || (v0 = PopDirectedDripsTimeout) != 0 )
  {
    dword_140C21260 = v0;
    PopInitializeTimer(
      (__int64)&unk_140C211B0,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogCallbackWorker,
      (__int64)&PopDripsWatchdogContext);
    if ( PopDripsWatchdogDebounceInterval )
      PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
    if ( PopDripsWatchdogDebounceTickInterval == 1 )
      PopDripsWatchdogDebounceTickInterval = 2;
    dword_140C21264 |= 1u;
  }
  return 0LL;
}
