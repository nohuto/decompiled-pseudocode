/*
 * XREFs of ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546
 * Callers:
 *     _NtUserCanBrokerForceForeground@4 @ 0x118DA (_NtUserCanBrokerForceForeground@4.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _NtUserSetWindowArrangement@16 @ 0x169EA1 (_NtUserSetWindowArrangement@16.c)
 * Callees:
 *     _IsForegroundLocked@0 @ 0x195B8 (_IsForegroundLocked@0.c)
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

char __fastcall CheckCanonicalForegroundAccess(char a1)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // esi
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( !IsForegroundLocked() || *(_DWORD *)(ThreadWin32Thread + 232) == _gppiInputProvider )
  {
    if ( (*(_BYTE *)(ThreadWin32Thread + 264) & 0x2C) != 0 || CanForceForeground(*(_DWORD *)(ThreadWin32Thread + 232)) )
      return 1;
    if ( _gptiForeground )
    {
      if ( *(_DWORD *)(_gptiForeground + 340) <= 0x400u )
        v4 = *(_DWORD *)(_gptiForeground + 352);
      else
        LOBYTE(v4) = 0;
      if ( (v4 & 0x40) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(2, 53, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
        return 1;
      }
    }
    if ( (a1 & 4) != 0 )
      return 1;
  }
  return 0;
}
