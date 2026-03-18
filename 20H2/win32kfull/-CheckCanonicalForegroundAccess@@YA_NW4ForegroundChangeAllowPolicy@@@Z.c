/*
 * XREFs of ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C002D0F0
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0006C30 (NtUserCanBrokerForceForeground.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C02028C0 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsForegroundLocked @ 0x1C002D180 (IsForegroundLocked.c)
 *     CanForceForeground @ 0x1C003BA20 (CanForceForeground.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

bool __fastcall CheckCanonicalForegroundAccess(char a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int v8; // edx

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  LOBYTE(v7) = 0;
  if ( (unsigned int)IsForegroundLocked(v4, v3, v5, ThreadWin32Thread) && *(_QWORD *)(v6 + 424) != gppiInputProvider )
    return 0;
  if ( (*(_DWORD *)(v6 + 488) & 0x2C) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v6 + 424)) )
    return 1;
  if ( gptiForeground )
  {
    if ( *(_DWORD *)(gptiForeground + 632LL) <= 0x400u )
      v7 = *(_DWORD *)(gptiForeground + 648LL);
    if ( (v7 & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(gptiForeground, v8, 2, 53, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
      return 1;
    }
  }
  return (a1 & 4) != 0;
}
