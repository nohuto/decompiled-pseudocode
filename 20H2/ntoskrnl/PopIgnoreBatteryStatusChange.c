/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14038D650
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C23640, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C23648);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C236C8, Executive, 0, 0, 0LL);
  }
  byte_140C236E0 = 1;
  return v0;
}
