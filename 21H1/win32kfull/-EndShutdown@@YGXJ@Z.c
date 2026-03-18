/*
 * XREFs of ?EndShutdown@@YGXJ@Z @ 0xD40DC
 * Callers:
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 * Callees:
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     ?NotifyLogon@@YGHK@Z @ 0xD4198 (-NotifyLogon@@YGHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // [esp+0h] [ebp-Ch]

  gpidEndSession = 0;
  _gdwThreadEndSession = 0;
  *(_DWORD *)(_gpsi + 1836) &= ~1u;
  v1 = *(_DWORD *)(_grpwinstaLogoff + 32) & 0xFFFFFFF7;
  *(_DWORD *)(_grpwinstaLogoff + 32) = v1;
  if ( a1 < 0 )
  {
    if ( _gptiShutdownNotify )
    {
      _PostThreadMessage(_gptiShutdownNotify, 22, 0, 0);
      _gptiShutdownNotify = 0;
      v1 = *(_DWORD *)(_grpwinstaLogoff + 32);
    }
    *(_DWORD *)(_grpwinstaLogoff + 32) = gdwLocks | v1 & 0xFFFFFFFD;
    NotifyLogon(v2);
  }
  else
  {
    _gptiShutdownNotify = 0;
    NotifyLogon(v2);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !_gProtocolType )
    {
      if ( _gSqmIsOptedIn )
        SqmPowerState();
      PTPTelemetry::Usage::HandlePTPTelemetry();
    }
  }
  UnlockObjectAssignment(_grpwinstaLogoff);
}
