/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14077C84C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140C23208);
  _InterlockedExchange(&dword_140C23180, 1);
  return KiSetTimerEx((__int64)&stru_140C23188, -300000000LL, 0, 0, (__int64)&dword_140C231C8);
}
