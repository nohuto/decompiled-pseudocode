/*
 * XREFs of _xxxRemoteConsoleShadowStart@12 @ 0x187F2C
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?FindMirrorDriver@@YGJPBGPAU_DISPLAY_DEVICEW@@@Z @ 0x187789 (-FindMirrorDriver@@YGJPBGPAU_DISPLAY_DEVICEW@@@Z.c)
 *     _bDrvReconnect@16 @ 0x226594 (_bDrvReconnect@16.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRemoteConsoleShadowStart(_DWORD *a1, const WCHAR *a2, int a3)
{
  void *v3; // eax
  void *v4; // ecx
  NTSTATUS MirrorDriver; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // edx
  _DWORD *v8; // ecx
  HANDLE v9; // eax
  int *v10; // esi
  int v11; // edi
  PVOID RemoteContext; // [esp+Ch] [ebp-464h] BYREF
  PVOID Object; // [esp+10h] [ebp-460h] BYREF
  PVOID v15; // [esp+14h] [ebp-45Ch] BYREF
  PVOID v16; // [esp+18h] [ebp-458h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-454h] BYREF
  const WCHAR *v18; // [esp+24h] [ebp-44Ch]
  _DWORD *v19; // [esp+28h] [ebp-448h]
  int v20; // [esp+2Ch] [ebp-444h]
  int v21; // [esp+30h] [ebp-440h]
  int v22; // [esp+34h] [ebp-43Ch]
  int v23; // [esp+38h] [ebp-438h]
  int v24; // [esp+3Ch] [ebp-434h]
  _DWORD v25[56]; // [esp+40h] [ebp-430h] BYREF
  WCHAR v26[422]; // [esp+120h] [ebp-350h] BYREF

  v18 = a2;
  v20 = a3;
  v19 = a1;
  memset(v25, 0, 0xDCu);
  memset(v26, 0, 0x348u);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RemoteContext = (PVOID)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 12, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( _gbConnected && !_gProtocolType )
  {
    gConsoleShadowhDev = 0;
    _gfRemotingConsole = 0;
    gpConsoleShadowThinWireCache = _ThinWireCache;
    ghConsoleShadowVideoChannel = (HANDLE)a1[7];
    ghConsoleShadowBeepChannel = (HANDLE)a1[8];
    ghConsoleShadowKeyboardChannel = (HANDLE)a1[10];
    v3 = (void *)a1[11];
    _gRemoteClientKeyboardType[0] = a1[60];
    ghConsoleShadowThinwireChannel = v3;
    _gRemoteClientKeyboardType[1] = a1[61];
    _gRemoteClientKeyboardType[2] = a1[62];
    _gbClientDoubleClickSupport = a1[53];
    _gfEnableWindowsKey = a1[54];
    v4 = (void *)a1[12];
    Object = 0;
    MirrorDriver = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0);
    _gpConsoleShadowDisplayChangeEvent = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_20;
    v15 = 0;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0, 0, &v15, 0);
    if ( MirrorDriver < 0 )
      goto LABEL_20;
    gConsoleShadowVideoFileObject = v15;
    IoGetRelatedDeviceObject((PFILE_OBJECT)v15);
    v16 = 0;
    v6 = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0, 0, &v16, 0);
    v7 = v16;
    MirrorDriver = v6;
    gConsoleShadowThinwireFileObject = v16;
    if ( v6 < 0 )
      goto LABEL_20;
    v8 = RemoteContext;
    RemoteContext = 0;
    G_SaveRemoteVideoFileObject = (struct _FILE_OBJECT *)v8[2];
    G_SaveRemoteConnectionFileObject = (struct _FILE_OBJECT *)v8[3];
    G_SavePerformanceStatistics = (unsigned __int8 *)v8[5];
    G_SaveRemoteConnectionChannel = (void *)v8[4];
    v8[2] = gConsoleShadowVideoFileObject;
    v8[5] = gpConsoleShadowThinWireCache;
    v8[4] = ghConsoleShadowThinwireChannel;
    v9 = ghConsoleShadowBeepChannel;
    v8[3] = v7;
    MirrorDriver = ObReferenceObjectByHandle(v9, 0, 0, 0, &RemoteContext, 0);
    gpConsoleShadowBeepDevice = RemoteContext;
    if ( MirrorDriver < 0 )
      goto LABEL_20;
    MirrorDriver = FindMirrorDriver(v18, (int)v26);
    if ( MirrorDriver >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, &v26[2]);
      v25[18] = &loc_1C0020;
      LOWORD(v25[17]) = 220;
      v25[42] = v19[55];
      v10 = (int *)(*_gpDispInfo + 12);
      v21 = *v10++;
      v22 = *v10++;
      v23 = *v10;
      v24 = v10[1];
      v11 = v20;
      v25[43] = v23 - v21;
      v25[19] = v21;
      v25[44] = v24 - v22;
      v25[20] = v22;
      if ( xxxUserChangeDisplaySettings(&DestinationString, v25, 0, 268435457, 0, 0, v20)
        || xxxUserChangeDisplaySettings(0, 0, 0, 0, 0, 0, v11) )
      {
        MirrorDriver = -1073741823;
      }
      else
      {
        gConsoleShadowhDev = DrvGetHDEV(&DestinationString);
        if ( !gConsoleShadowhDev || (_gfRemotingConsole = 1, !bDrvReconnect(gConsoleShadowThinwireFileObject, 0)) )
        {
          MirrorDriver = -1073741823;
          goto LABEL_20;
        }
        HDXDrvEscape(gConsoleShadowhDev, 2, _gptmrWD, 4);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(9, 13, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
    }
    if ( MirrorDriver >= 0 )
      return MirrorDriver;
LABEL_20:
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
    return MirrorDriver;
  }
  return -1073741823;
}
