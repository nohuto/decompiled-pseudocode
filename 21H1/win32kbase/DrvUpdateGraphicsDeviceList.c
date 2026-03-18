/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C0093390
 * Callers:
 *     DrvInitConsole @ 0x1C0055864 (DrvInitConsole.c)
 *     UpdateGraphicsDeviceList @ 0x1C0093320 (UpdateGraphicsDeviceList.c)
 *     DrvSetGraphicsDevices @ 0x1C00C1100 (DrvSetGraphicsDevices.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01252E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01263B4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C000E2F4 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C000E3E0 (DrvCleanupOneGraphicsDevice.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0049078 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     bSetDeviceSessionUsage @ 0x1C00492D0 (bSetDeviceSessionUsage.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C004AF88 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C004D3A0 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0094060 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00942F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0096544 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00978D8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CAA50 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CBAEC (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00CC63C (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  BOOL v4; // r12d
  int v5; // r13d
  __int64 v6; // rax
  char v7; // di
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 i; // rcx
  __int64 v13; // rax
  int v15; // eax
  struct tagGRAPHICS_DEVICE *v16; // rsi
  wchar_t *v17; // rdi
  __int64 v18; // rcx
  char *v19; // rbx
  int v20; // esi
  __int64 v21; // rcx
  struct _DEVICE_OBJECT *v22; // rcx
  __int64 v23; // rax
  struct _DEVICE_OBJECT *v24; // r14
  __int64 v25; // rdi
  wchar_t *v26; // rcx
  int PruneFlag; // eax
  int v28; // ecx
  unsigned int v29; // ecx
  bool v30; // zf
  wchar_t *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  wchar_t *v35; // rcx
  unsigned int v36; // r8d
  int v37; // edx
  unsigned int v38; // edx
  __int64 v39; // r9
  __int64 v40; // r8
  PVOID v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  const wchar_t *v45; // r9
  HANDLE v46; // rax
  wchar_t *v47; // rax
  HANDLE RegistryHandleFromDeviceMap; // rax
  __int64 *v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  struct _DEVICE_OBJECT *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v64; // [rsp+50h] [rbp-B0h]
  NTSTATUS DeviceObjectPointer; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v66[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+5Ch] [rbp-A4h]
  unsigned int v68; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v69; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v70; // [rsp+68h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  __int128 InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  __int128 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+B0h] [rbp-50h]
  __int128 v78; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v79; // [rsp+C8h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v82; // [rsp+128h] [rbp+28h]
  int v83; // [rsp+130h] [rbp+30h]
  __int128 v84; // [rsp+138h] [rbp+38h]
  __int128 v85; // [rsp+148h] [rbp+48h]
  __int64 v86; // [rsp+158h] [rbp+58h]

  v3 = (int)a1;
  v67 = a1;
  v4 = gProtocolType == 0;
  v69 = 0;
  DeviceObject = 0LL;
  v77 = 0LL;
  v5 = 1;
  FileObject = 0LL;
  P = 0LL;
  DeviceObjectPointer = 0;
  DeviceRegKey = 0LL;
  InputBuffer = 0LL;
  v76 = 0LL;
  v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = v3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v64 = 0;
  v7 = 0;
  if ( v4 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    v8 = gcLocalNextGlobalVirtualOutputNumber;
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    v8 = gcRemoteNextGlobalVirtualOutputNumber;
  }
  gcNextGlobalVirtualOutputNumber = v8;
  if ( v4 )
  {
    v68 = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v69;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v68;
    QueryTable.DefaultLength = 4;
    v86 = 0LL;
    v82 = 0LL;
    v83 = 0;
    v84 = 0LL;
    v85 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v68 = 0;
    DeviceObjectPointer = ((__int64 (__fastcall *)(unsigned int *, unsigned int *))qword_1C0252B60)(&v68, &v69);
    if ( DeviceObjectPointer < 0 )
    {
      v54 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v54 + 24) = DeviceObjectPointer;
      WdLogEvent5_WdError(v54);
      v69 = gcNextGlobalDeviceNumber;
    }
    v55 = gcNextGlobalDeviceNumber;
    if ( v68 > gcNextGlobalDeviceNumber )
    {
      v55 = v68;
      gcNextGlobalDeviceNumber = v68;
    }
    if ( v69 >= v55 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v53);
  }
  else
  {
    if ( gProtocolType != -1 )
      v69 = gRemoteContext - 1;
    if ( dword_1C0253240 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      DeviceObjectPointer = updated;
      if ( updated < 0 )
        return 0LL;
    }
  }
  while ( 2 )
  {
    if ( gProtocolType == -1 )
      goto LABEL_8;
    v9 = gcNextGlobalDeviceNumber;
    if ( gcNextGlobalDeviceNumber > v69 )
    {
      v7 = v64;
      goto LABEL_8;
    }
    if ( !(_DWORD)v3 )
    {
      v61 = WdLogNewEntry5_WdTrace(0xFFFFLL);
      WdLogEvent5_WdTrace(v61);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( v4 )
      {
        v15 = StringCchPrintfW((wchar_t *)&QueryTable, 50LL, L"\\Device\\Video%d", v9);
        goto LABEL_19;
      }
      v45 = L"RemoteVideo";
    }
    else
    {
      v45 = (const wchar_t *)qword_1C0253238;
    }
    LODWORD(Environment) = v9;
    v15 = StringCchPrintfW((wchar_t *)&QueryTable, 50LL, L"\\Device\\%s%d", v45, Environment);
LABEL_19:
    if ( v15 < 0 )
      return 0LL;
    v16 = gpRemoteGraphicsDeviceListLast;
    v17 = gpGraphicsDeviceList;
    if ( v4 )
      v16 = gpLocalGraphicsDeviceListLast;
    while ( v17 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v17, 0x40uLL) )
      {
        ++gcNextGlobalDeviceNumber;
        goto LABEL_75;
      }
      if ( v17 == (wchar_t *)v16 )
        break;
      v17 = (wchar_t *)*((_QWORD *)v17 + 16);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
LABEL_27:
      v7 = v64;
      v19 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
      LODWORD(v3) = v67;
      if ( !v19 )
        continue;
      *((_DWORD *)v19 + 54) = 0;
      *((_QWORD *)v19 + 28) = 0LL;
      *((_QWORD *)v19 + 17) = DeviceObject;
      *((_WORD *)v19 + 110) = gProtocolType;
      *((_QWORD *)v19 + 34) = 0LL;
      if ( !v4 )
        *((_DWORD *)v19 + 40) |= 0x4000000u;
      *((_QWORD *)v19 + 29) = FileObject;
      if ( v4 || gRemoteSessionUseWddm )
        *((_DWORD *)v19 + 65) = 0;
      v20 = 0;
      if ( !v4 && !gRemoteSessionUseWddm )
      {
        *((_QWORD *)v19 + 31) = 0xFFFFFFFFLL;
        *((_DWORD *)v19 + 64) = gcNextGlobalDeviceNumber;
        *((_QWORD *)v19 + 30) = 0LL;
        goto LABEL_45;
      }
      v77 = 0LL;
      *((_QWORD *)&InputBuffer + 1) = VideoPortCallout;
      *(_QWORD *)&InputBuffer = v19;
      v76 = 0LL;
      DeviceObjectPointer = GreDeviceIoControlImpl(
                              *((PDEVICE_OBJECT *)v19 + 17),
                              0x23201Fu,
                              &InputBuffer,
                              0x28u,
                              &InputBuffer,
                              0x28u,
                              &v68,
                              1u,
                              1);
      if ( DeviceObjectPointer < 0 )
      {
        v58 = WdLogNewEntry5_WdTrace(v21);
        *(_QWORD *)(v58 + 24) = DeviceObjectPointer;
      }
      else
      {
        if ( (_DWORD)v76 )
          *((_DWORD *)v19 + 40) |= 0x40000000u;
        if ( (v77 & 0xC0000001) == 0 )
        {
          if ( (v77 & 0x20000000) != 0 )
            *((_DWORD *)v19 + 40) |= 0x100000u;
          v22 = (struct _DEVICE_OBJECT *)*((_QWORD *)v19 + 17);
          *((_QWORD *)v19 + 18) = *((_QWORD *)&v76 + 1);
          *((_DWORD *)v19 + 64) = 0;
          v78 = 0LL;
          v79 = 0LL;
          DeviceObjectPointer = GreDeviceIoControlImpl(v22, 0x232033u, 0LL, 0, &v78, 0x20u, &v68, 1u, 1);
          if ( DeviceObjectPointer < 0 )
          {
            if ( v4 )
              goto LABEL_45;
          }
          else
          {
            if ( (_DWORD)v78 != 2 )
            {
              v59 = ((__int64 (*)(void))WdLogNewEntry5_WdAssertion)();
              WdLogEvent5_WdAssertion(v59);
            }
            if ( gRemoteTerminalLuid == *((_QWORD *)&v79 + 1) )
            {
              v23 = *((_QWORD *)&v78 + 1);
              if ( *((_QWORD *)&v78 + 1) )
              {
                *((_DWORD *)v19 + 40) |= 0x800000u;
                *((_QWORD *)v19 + 30) = v23;
                *((_DWORD *)v19 + 64) = DWORD1(v78);
                *((_QWORD *)v19 + 31) = v79;
LABEL_45:
                DeviceObjectPointer = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                if ( DeviceObjectPointer < 0 )
                {
                  if ( (*((_DWORD *)v19 + 40) & 0x20000000) != 0 )
                  {
                    v60 = (struct _DEVICE_OBJECT *)*((_QWORD *)v19 + 18);
                    if ( v60 )
                    {
                      DeviceObjectPointer = IoOpenDeviceRegistryKey(v60, 2u, 0x2000000u, &DeviceRegKey);
                      if ( DeviceObjectPointer >= 0 )
                      {
                        DrvGetDeviceConfigurationInformation(v19, (PCWSTR)DeviceRegKey, 1);
                        ZwClose(DeviceRegKey);
                      }
                    }
                  }
                }
                else
                {
                  v24 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                  ExFreePoolWithTag(P, 0);
                  DeviceObjectPointer = IoOpenDeviceRegistryKey(v24, 2u, 0x2000000u, &DeviceRegKey);
                  if ( DeviceObjectPointer >= 0 )
                  {
                    v70 = 0LL;
                    LODWORD(v25) = 0;
                    if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v70, 8u, &v68, 1u, 1) >= 0 )
                    {
                      if ( v70 )
                      {
                        v20 = 1;
                        if ( (*(_DWORD *)v70 & 0x20000000) != 0 )
                        {
                          do
                            v25 = (unsigned int)(v25 + 1);
                          while ( (*((_DWORD *)v70 + 5 * v25) & 0x20000000) != 0 );
                        }
                      }
                    }
                    DrvGetDeviceConfigurationInformation(v19, (PCWSTR)DeviceRegKey, 1);
                    if ( v20 )
                    {
                      if ( (_DWORD)v25 )
                      {
                        *((_DWORD *)v19 + 54) = v25;
                        *((_QWORD *)v19 + 28) = PALLOCMEM2((unsigned int)(20 * v25), 0x76646747u, 1);
                        v39 = (unsigned int)v25;
                        v40 = 0LL;
                        do
                        {
                          *(_DWORD *)(v40 + *((_QWORD *)v19 + 28)) = 0;
                          v41 = v70;
                          if ( (*(_DWORD *)((_BYTE *)v70 + v40) & 1) != 0 )
                          {
                            *(_DWORD *)(v40 + *((_QWORD *)v19 + 28)) |= 1u;
                            v41 = v70;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v41 + v40) & 2) == 0 )
                          {
                            *(_DWORD *)(v40 + *((_QWORD *)v19 + 28)) |= 2u;
                            v41 = v70;
                          }
                          if ( *(int *)((char *)v41 + v40) >= 0 )
                          {
                            *(_DWORD *)(v40 + *((_QWORD *)v19 + 28)) |= 0x80000000;
                            v41 = v70;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v41 + v40) & 0x40000000) == 0 )
                          {
                            *(_DWORD *)(v40 + *((_QWORD *)v19 + 28)) |= 0x40000000u;
                            v41 = v70;
                          }
                          *(_DWORD *)(v40 + *((_QWORD *)v19 + 28) + 4) = *(_DWORD *)((char *)v41 + v40 + 4);
                          *(_QWORD *)(v40 + *((_QWORD *)v19 + 28) + 8) = *(_QWORD *)((char *)v70 + v40 + 8);
                          *(_BYTE *)(v40 + *((_QWORD *)v19 + 28) + 16) = *((_BYTE *)v70 + v40 + 16);
                          v40 += 20LL;
                          --v39;
                        }
                        while ( v39 );
                      }
                      ExFreePoolWithTag(v70, 0);
                    }
                    ZwClose(DeviceRegKey);
                  }
                  ObfDereferenceObject(v24);
                }
                swprintf_s((wchar_t *)v19, 0x20uLL, (const wchar_t *)&QueryTable);
                ++gcNextGlobalDeviceNumber;
                if ( DeviceObjectPointer >= 0
                  || (v46 = DrvGetRegistryHandleFromDeviceMap(
                              (unsigned __int16 *)v19,
                              0,
                              0LL,
                              0LL,
                              0,
                              &DeviceObjectPointer),
                      DeviceRegKey = v46,
                      DeviceObjectPointer >= 0)
                  && (DrvGetDeviceConfigurationInformation(v19, (PCWSTR)v46, 0),
                      ZwClose(DeviceRegKey),
                      DeviceObjectPointer >= 0) )
                {
                  if ( !*((_QWORD *)v19 + 26) )
                  {
                    v47 = (wchar_t *)PALLOCMEM2(0x20uLL, 0x73726447u, 0);
                    *((_QWORD *)v19 + 26) = v47;
                    if ( v47 )
                    {
                      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                                      (unsigned __int16 *)v19,
                                                      0,
                                                      0LL,
                                                      v47,
                                                      0x10u,
                                                      &DeviceObjectPointer);
                      DeviceRegKey = RegistryHandleFromDeviceMap;
                      if ( RegistryHandleFromDeviceMap )
                        ZwClose(RegistryHandleFromDeviceMap);
                    }
                    else
                    {
                      DeviceObjectPointer = -1073741670;
                    }
                  }
                }
                v26 = (wchar_t *)(v19 + 64);
                if ( (*((_DWORD *)v19 + 40) & 8) != 0 )
                {
                  ++gcNextGlobalVirtualOutputNumber;
                  swprintf_s(v26, 0x20uLL, L"\\\\.\\DISPLAYV%d");
                }
                else
                {
                  ++gcNextGlobalPhysicalOutputNumber;
                  swprintf_s(v26, 0x20uLL, L"\\\\.\\DISPLAY%d");
                }
                PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v19);
                v28 = *((_DWORD *)v19 + 40);
                if ( PruneFlag )
                  v29 = v28 & 0xFFF7FFFF;
                else
                  v29 = v28 | 0x80000;
                *((_DWORD *)v19 + 40) = v29;
                if ( (unsigned int)bSetDeviceSessionUsage((__int64)v19, 1) )
                {
                  if ( v4 || gRemoteSessionUseWddm )
                    goto LABEL_63;
                  goto LABEL_129;
                }
                if ( !v4 && !gRemoteSessionUseWddm )
                {
LABEL_129:
                  *((_QWORD *)v19 + 35) = 0LL;
                  v49 = (__int64 *)(v19 + 296);
                  if ( dword_1C0253240 )
                    v50 = qword_1C0253244;
                  else
                    v50 = 0LL;
                  *v49 = v50;
                  *((_QWORD *)v19 + 38) = 0LL;
                  v66[0] = 0;
                  if ( (int)((__int64 (__fastcall *)(char *, __int64 *, char *, char *, _BYTE *))qword_1C02529C8)(
                              v19 + 280,
                              v49,
                              v19 + 304,
                              v19 + 288,
                              v66) >= 0 )
                  {
                    v51 = *((_DWORD *)v19 + 41);
                    if ( v66[0] )
                      v52 = v51 | 4;
                    else
                      v52 = v51 & 0xFFFFFFFB;
                    *((_DWORD *)v19 + 41) = v52;
                    DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v19);
                  }
                  if ( DeviceObjectPointer < 0 && !gRemoteSessionUseWddm )
                  {
                    DrvCleanupOneGraphicsDevice((__int64)v19);
                    --gcNextGlobalPhysicalOutputNumber;
                    v5 = 0;
                    v7 = v64;
                    goto LABEL_68;
                  }
LABEL_63:
                  if ( gpGraphicsDeviceList )
                    *((_QWORD *)gpGraphicsDeviceListLast + 16) = v19;
                  else
                    gpGraphicsDeviceList = (wchar_t *)v19;
                  v30 = (*((_DWORD *)v19 + 40) & 0x800000) == 0;
                  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v19;
                  if ( !v30 )
                    DrvAddAdapterLuid(*(struct _LUID *)(v19 + 248));
                  v7 = 1;
                  v64 = 1;
                  goto LABEL_68;
                }
                DrvCleanupOneGraphicsDevice((__int64)v19);
LABEL_75:
                v7 = v64;
LABEL_68:
                LODWORD(v3) = v67;
                continue;
              }
            }
          }
LABEL_159:
          DrvCleanupOneGraphicsDevice((__int64)v19);
          ++gcNextGlobalDeviceNumber;
          goto LABEL_75;
        }
        DeviceObjectPointer = -1073741637;
        v58 = WdLogNewEntry5_WdTrace(v21);
        *(_QWORD *)(v58 + 24) = (unsigned int)v77;
        *(_QWORD *)(v58 + 32) = DeviceObjectPointer;
      }
      WdLogEvent5_WdTrace(v58);
      goto LABEL_159;
    }
    break;
  }
  if ( v4 || gRemoteSessionUseWddm || gRemoteContext != 1 )
  {
    v34 = WdLogNewEntry5_WdTrace(v18);
    *(_QWORD *)(v34 + 24) = DeviceObjectPointer;
    WdLogEvent5_WdTrace(v34);
    ++gcNextGlobalDeviceNumber;
    goto LABEL_75;
  }
  FileObject = ::FileObject;
  if ( ::FileObject )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject);
    DeviceObject = RelatedDeviceObject;
    if ( FileObject )
    {
      if ( RelatedDeviceObject )
      {
        DeviceObjectPointer = 0;
        FileObject = 0LL;
        goto LABEL_27;
      }
    }
  }
  v7 = v64;
  DeviceObjectPointer = -1073741772;
LABEL_8:
  if ( !v4 && !gRemoteSessionUseWddm )
  {
    v35 = gpGraphicsDeviceList;
    v36 = 0;
    while ( v35 )
    {
      v37 = *((_DWORD *)v35 + 40);
      if ( (v37 & 0x4000000) != 0 )
      {
        v38 = v37 & 0xFFFFFFFB;
        *((_DWORD *)v35 + 40) = v38;
        *((_DWORD *)v35 + 65) = v36 < gRemoteContext;
        if ( v36 == dword_1C0253204 )
          *((_DWORD *)v35 + 40) = v38 | 4;
        ++v36;
      }
      v35 = (wchar_t *)*((_QWORD *)v35 + 16);
    }
  }
  DrvSetDisconnectedGraphicsDevice(v4);
  v11 = WdLogNewEntry5_WdTrace(v10);
  WdLogEvent5_WdTrace(v11);
  if ( v7 )
    DrvSortGraphicsDeviceList();
  if ( v4 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v31 = gpGraphicsDeviceList;
    v32 = 0LL;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v33 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v31 )
    {
      if ( (*((_DWORD *)v31 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v31 + 64);
        v32 = (unsigned int)(v32 + 1);
        if ( (unsigned int)i > 0x10 || ((1 << i) & (unsigned int)v33) != 0 )
          goto LABEL_176;
        v33 = (1 << i) | (unsigned int)v33;
      }
      v31 = (wchar_t *)*((_QWORD *)v31 + 16);
    }
    i = (unsigned int)v32;
    if ( (_DWORD)v33 == (1 << v32) - 1 )
      goto LABEL_13;
LABEL_176:
    v62 = WdLogNewEntry5_WdAssertion(i, v31, v33, v32);
    WdLogEvent5_WdAssertion(v62);
  }
LABEL_13:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v44 = WdLogNewEntry5_WdEvent(i, v42, v43);
      WdLogEvent5_WdEvent(v44);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = (unsigned __int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
        {
          if ( (*(_DWORD *)(i + 160) & 8) != 0 )
            *(_DWORD *)(i + 260) = 0;
        }
      }
    }
  }
  v13 = WdLogNewEntry5_WdTrace(i);
  *(_QWORD *)(v13 + 24) = v5;
  WdLogEvent5_WdTrace(v13);
  return (unsigned int)v5;
}
