/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14077A43C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14077A5E4 (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140C237C8);
  _InterlockedExchange(&dword_140C23740, 1);
  return KiSetTimerEx((__int64)&stru_140C23748, -300000000LL, 0, 0, (__int64)&dword_140C23788);
}
