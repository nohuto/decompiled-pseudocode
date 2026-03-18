/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14078AE4C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140C236C8);
  _InterlockedExchange(&dword_140C23640, 1);
  return KiSetTimerEx((__int64)&stru_140C23648, -300000000LL, 0, 0, (__int64)&dword_140C23688);
}
