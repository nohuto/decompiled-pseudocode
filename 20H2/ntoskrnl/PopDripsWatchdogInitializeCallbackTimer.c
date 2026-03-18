/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140A9665C
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C444C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx

  v0 = PopDripsCallbackInterval;
  if ( PopDripsCallbackInterval || (v0 = PopDirectedDripsTimeout) != 0 )
  {
    dword_140C21360 = v0;
    PopInitializeTimer(
      (__int64)&unk_140C212B0,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogCallbackWorker,
      (__int64)&PopDripsWatchdogContext);
    if ( PopDripsWatchdogDebounceInterval )
      PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
    if ( PopDripsWatchdogDebounceTickInterval == 1 )
      PopDripsWatchdogDebounceTickInterval = 2;
    dword_140C21364 |= 1u;
  }
  return 0LL;
}
