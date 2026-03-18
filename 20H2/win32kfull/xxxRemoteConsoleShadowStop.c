/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C0226A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     DrvReleaseHDEV @ 0x1C0273418 (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C02BEDAC (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteConsoleShadowStop()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *RemoteContext; // rbx
  __int64 v3; // r8
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // ebx
  _QWORD DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v9[10]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v10[268]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v9, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  v9[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v9[3]) = 23;
  LOBYTE(v9[6]) = -1;
  memset(v10, 0, 0xDCuLL);
  memset(&v10[56], 0, 0x348uLL);
  *(_OWORD *)&DestinationString[1] = 0LL;
  RemoteContext = (_QWORD *)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 10, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, &v10[57]);
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)&v10[57]);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v10[17]) = 220;
  v10[18] = 1572896;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(v6, v5, 9, 11, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString[1], v10, 0LL, 268435457LL, 0LL, 0, v9) )
  {
    v7 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, v9);
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
    v7 = 0;
  }
  if ( gConsoleShadowVideoFileObject )
  {
    ObfDereferenceObject(gConsoleShadowVideoFileObject);
    gConsoleShadowVideoFileObject = 0LL;
  }
  if ( gConsoleShadowThinwireFileObject )
  {
    ObfDereferenceObject(gConsoleShadowThinwireFileObject);
    gConsoleShadowThinwireFileObject = 0LL;
  }
  if ( gpConsoleShadowBeepDevice )
  {
    ObfDereferenceObject(gpConsoleShadowBeepDevice);
    gpConsoleShadowBeepDevice = 0LL;
  }
  if ( gpConsoleShadowDisplayChangeEvent )
  {
    ObfDereferenceObject(gpConsoleShadowDisplayChangeEvent);
    gpConsoleShadowDisplayChangeEvent = 0LL;
  }
  gConsoleShadowhDev = 0LL;
  return v7;
}
