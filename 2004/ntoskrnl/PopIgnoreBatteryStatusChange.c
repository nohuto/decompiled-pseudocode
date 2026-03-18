/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14038B30C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C23180, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C23188);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C23208, Executive, 0, 0, 0LL);
  }
  byte_140C23220 = 1;
  return v0;
}
