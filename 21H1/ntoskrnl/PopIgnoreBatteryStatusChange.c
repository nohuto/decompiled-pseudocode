/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14038A29C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C23740, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C23748);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C237C8, Executive, 0, 0, 0LL);
  }
  byte_140C237E0 = 1;
  return v0;
}
