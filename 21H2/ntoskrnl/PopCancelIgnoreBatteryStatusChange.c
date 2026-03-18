/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x14081CFDC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140C22AA8);
  _InterlockedExchange(&dword_140C22A20, 1);
  return KiSetTimerEx((unsigned __int64)&stru_140C22A28, -300000000LL, 0, 0, (__int64)&dword_140C22A68);
}
