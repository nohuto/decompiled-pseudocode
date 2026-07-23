/*
 * XREFs of PpDevCfgInit @ 0x140A4A920
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406A7068 (PiDmEnumObjectsWithCallback.c)
 *     _PnpCtxRegOpenKey @ 0x1406ADE68 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406B1148 (_PnpCtxRegQueryValue.c)
 *     RtlIsStateSeparationEnabled @ 0x1406E2F30 (RtlIsStateSeparationEnabled.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PipOpenServiceEnumKeys @ 0x14072827C (PipOpenServiceEnumKeys.c)
 *     PiDevCfgSetObjectProperty @ 0x14072A97C (PiDevCfgSetObjectProperty.c)
 *     PiDrvDbEnumNodes @ 0x1408B1978 (PiDrvDbEnumNodes.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B26D4 (PiDrvDbQuerySyncNodesUpdated.c)
 */

__int64 PpDevCfgInit()
{
  char v0; // di
  __int64 v1; // rcx
  int ObjectProperties; // ebx
  int v3; // eax
  char v4; // al
  __int64 v5; // rcx
  int SyncNodesUpdated; // eax
  int MatchingChangeStamp; // [rsp+30h] [rbp-D8h]
  int v9; // [rsp+68h] [rbp-A0h] BYREF
  int v10; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v11; // [rsp+70h] [rbp-98h] BYREF
  int v12; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v13; // [rsp+78h] [rbp-90h] BYREF
  int v14; // [rsp+7Ch] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v16; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v17; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v18[16]; // [rsp+A8h] [rbp-60h] BYREF

  v10 = 0;
  v11 = 0;
  v0 = 0;
  LOWORD(v9) = 0;
  *(_DWORD *)(&v17.MaximumLength + 1) = 0;
  v16 = 0LL;
  Handle = 0LL;
  v14 = 0;
  v12 = 0;
  memset(v18, 0, 0x78uLL);
  v18[0] = DEVPKEY_DriverDatabase_ConfigMode;
  LODWORD(v18[1]) = 7;
  v18[2] = &v10;
  LODWORD(v18[3]) = 4;
  v18[5] = DEVPKEY_DriverDatabase_ConfigOptions;
  LODWORD(v18[6]) = 7;
  v18[7] = &v11;
  v18[10] = DEVPKEY_DriverDatabase_Updated;
  v18[12] = &v9;
  LODWORD(v18[8]) = 4;
  LODWORD(v18[11]) = 17;
  LODWORD(v18[13]) = 1;
  ObjectProperties = PiDevCfgQueryObjectProperties(v1, (__int64)L"SYSTEM", 7u, 0LL, (__int64)v18, 3u);
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v18[4]) >= 0 )
      v10 = (v10 & 3) != 0 ? v10 : 0;
    else
      v10 = 3;
    v3 = v11;
    *(_DWORD *)&v17.Length = 1835034;
    if ( SLODWORD(v18[9]) < 0 )
      v3 = 0;
    v11 = v3;
    v4 = v9;
    if ( SLODWORD(v18[14]) < 0 )
      v4 = 0;
    LOBYTE(v9) = v4;
    v17.Buffer = L"DeviceInstall";
    if ( PipOpenServiceEnumKeys(&v17, 0x20019u, &v16, 0LL, 0) >= 0 )
    {
      if ( (int)PnpCtxRegOpenKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v16,
                  (__int64)L"Parameters",
                  0,
                  0x20019u,
                  (__int64)&Handle) >= 0 )
      {
        v13 = 4;
        if ( (int)PnpCtxRegQueryValue(v5, Handle, L"DriverUpdatesPending", &v12, &v14, &v13) >= 0
          && v12 == 4
          && v13 == 4
          && v14 )
        {
          ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
        }
        ZwClose(Handle);
      }
      ZwClose(v16);
      PiDevCfgFlags |= 2u;
    }
    PiDevCfgMode = v10;
    PiDevCfgOptions = v11;
    if ( v10 )
    {
      if ( (PiDevCfgFlags & 2) == 0 || (v11 & 0x20) != 0 )
      {
        SyncNodesUpdated = PiDrvDbQuerySyncNodesUpdated(0, (char *)&v9 + 1);
        v0 = BYTE1(v9);
        if ( SyncNodesUpdated >= 0 )
        {
          if ( BYTE1(v9) )
            PiDevCfgFlags |= 1u;
        }
      }
      if ( (_BYTE)v9 == 0xFF )
        PiDevCfgFlags |= 1u;
    }
    if ( (PiDevCfgFlags & 1) != 0 )
    {
      if ( !RtlIsStateSeparationEnabled() || (ObjectProperties = PiDrvDbEnumNodes(), ObjectProperties >= 0) )
      {
        ObjectProperties = PiDmEnumObjectsWithCallback(
                             1u,
                             (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDevCfgInitDeviceCallback,
                             0LL);
        if ( ObjectProperties >= 0 )
        {
          if ( (_BYTE)v9 == 0xFF )
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              0LL,
              (__int64)L"SYSTEM",
              7u,
              0LL,
              MatchingChangeStamp,
              (__int64)DEVPKEY_DriverDatabase_Updated,
              0,
              0LL,
              0,
              0);
          if ( v0 )
            PiDrvDbQuerySyncNodesUpdated(1, 0LL);
        }
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
