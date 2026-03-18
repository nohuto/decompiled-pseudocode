/*
 * XREFs of _RemotePassthruDisable@0 @ 0x187AD9
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     _GetRemoteHDEV@8 @ 0x187A5E (_GetRemoteHDEV@8.c)
 *     _bDrvReconnect@16 @ 0x226594 (_bDrvReconnect@16.c)
 */

int __stdcall RemotePassthruDisable()
{
  int RemoteContext; // esi
  int v2; // eax

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 26, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  if ( _gbConnected )
  {
    if ( _gfRemotingConsole )
    {
      v2 = bDrvReconnect(gConsoleShadowThinwireFileObject, 1);
    }
    else
    {
      GetRemoteHDEV(_gProtocolType, *(_DWORD *)(RemoteContext + 24));
      v2 = bDrvReconnect(_gThinwireFileObject, 1);
    }
    if ( !v2 )
      return -1073086440;
    RemoteRedrawScreen();
    UpdateKeyLights(0);
  }
  return 0;
}
