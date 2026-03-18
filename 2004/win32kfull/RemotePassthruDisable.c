/*
 * XREFs of RemotePassthruDisable @ 0x1C0226DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C0226D08 (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02C0698 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbx
  __int64 v3; // r8
  PVOID v5; // r8
  HANDLE v6; // rdx
  __int64 RemoteHDEV; // rcx
  int v8; // ecx

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 26, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v5 = gConsoleShadowThinwireFileObject;
      v6 = ghConsoleShadowThinwireChannel;
      RemoteHDEV = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v5 = (PVOID)gThinwireFileObject;
      v6 = (HANDLE)ghRemoteThinwireChannel;
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v6, v5, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen(v8);
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
