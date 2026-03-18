/*
 * XREFs of _xxxRemoteConsoleShadowStop@0 @ 0x1882F1
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _DrvReleaseHDEV@4 @ 0x1D1591 (_DrvReleaseHDEV@4.c)
 *     _bDrvDisconnect@12 @ 0x2263A6 (_bDrvDisconnect@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRemoteConsoleShadowStop()
{
  _DWORD *RemoteContext; // esi
  int v2; // edi
  union _LARGE_INTEGER CurrentTime; // [esp+10h] [ebp-480h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+18h] [ebp-478h] BYREF
  _DWORD v5[16]; // [esp+20h] [ebp-470h] BYREF
  _DWORD v6[267]; // [esp+60h] [ebp-430h] BYREF

  memset(v5, 0, sizeof(v5));
  EtwActivityIdControl(3u, (LPGUID)&v5[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v5[14] = CurrentTime;
  v5[5] = 23;
  LOBYTE(v5[11]) = -1;
  memset(v6, 0, 0xDCu);
  memset(&v6[56], 0, 0x348u);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RemoteContext = (_DWORD *)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 10, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  if ( !gConsoleShadowhDev )
    return -1073741823;
  bDrvDisconnect(_gpepCSRSS);
  DrvGetHdevName(gConsoleShadowhDev, &v6[57]);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)&v6[57]);
  DrvReleaseHDEV();
  _gfRemotingConsole = 0;
  LOWORD(v6[17]) = 220;
  v6[18] = &loc_180020;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 11, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( xxxUserChangeDisplaySettings(&DestinationString, v6, 0, 268435457, 0, 0, v5) )
  {
    v2 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0, 0, 0, 0, 0, 0, v5);
    v2 = 0;
    RemoteContext[2] = G_SaveRemoteVideoFileObject;
    RemoteContext[3] = G_SaveRemoteConnectionFileObject;
    RemoteContext[5] = G_SavePerformanceStatistics;
    RemoteContext[4] = G_SaveRemoteConnectionChannel;
  }
  if ( gConsoleShadowVideoFileObject )
  {
    ObfDereferenceObject(gConsoleShadowVideoFileObject);
    gConsoleShadowVideoFileObject = 0;
  }
  if ( gConsoleShadowThinwireFileObject )
  {
    ObfDereferenceObject(gConsoleShadowThinwireFileObject);
    gConsoleShadowThinwireFileObject = 0;
  }
  if ( gpConsoleShadowBeepDevice )
  {
    ObfDereferenceObject(gpConsoleShadowBeepDevice);
    gpConsoleShadowBeepDevice = 0;
  }
  if ( _gpConsoleShadowDisplayChangeEvent )
  {
    ObfDereferenceObject(_gpConsoleShadowDisplayChangeEvent);
    _gpConsoleShadowDisplayChangeEvent = 0;
  }
  gConsoleShadowhDev = 0;
  return v2;
}
