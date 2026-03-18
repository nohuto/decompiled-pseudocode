/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C00522D0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0053230 (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C00957D0 (DrvInitConsole.c)
 *     DrvSetGraphicsDevices @ 0x1C00979D0 (DrvSetGraphicsDevices.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D000 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C000FEB0 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0013030 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00139BC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00521C8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0052FA0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0086924 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0086A10 (DrvCleanupOneGraphicsDevice.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00B6A58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00B8938 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00BAF5C (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CA1A0 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CB5AC (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00CC0FC (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1)
{
  __int64 v1; // rsi
  BOOL v2; // r12d
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // di
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  wchar_t *v13; // rdx
  unsigned __int64 i; // rcx
  __int64 v15; // rax
  int v17; // eax
  struct tagGRAPHICS_DEVICE *v18; // rsi
  wchar_t *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *v22; // rbx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _DEVICE_OBJECT *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _DEVICE_OBJECT *v30; // r14
  __int64 v31; // rdi
  wchar_t *v32; // rcx
  int PruneFlag; // eax
  int v34; // ecx
  unsigned int v35; // ecx
  bool v36; // zf
  unsigned int v37; // r9d
  int v38; // r8d
  __int64 v39; // rax
  wchar_t *v40; // rcx
  unsigned int v41; // r8d
  int v42; // edx
  unsigned int v43; // edx
  __int64 v44; // r9
  __int64 v45; // r8
  PVOID v46; // rdx
  __int64 v47; // rax
  const wchar_t *v48; // r9
  void *v49; // rax
  void *v50; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  struct _DEVICE_OBJECT *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v70; // [rsp+50h] [rbp-B0h]
  NTSTATUS DeviceObjectPointer; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v72[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v73; // [rsp+5Ch] [rbp-A4h]
  unsigned int v74; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v75; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v76; // [rsp+68h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  __int128 InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+B0h] [rbp-50h]
  __int128 v84; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v88; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+130h] [rbp+30h]
  __int128 v90; // [rsp+138h] [rbp+38h]
  __int128 v91; // [rsp+148h] [rbp+48h]
  __int64 v92; // [rsp+158h] [rbp+58h]

  v1 = a1;
  v73 = a1;
  v2 = gProtocolType == 0;
  v75 = 0;
  DeviceObject = 0LL;
  v83 = 0LL;
  v3 = 1;
  FileObject = 0LL;
  P = 0LL;
  DeviceObjectPointer = 0;
  DeviceRegKey = 0LL;
  InputBuffer = 0LL;
  v82 = 0LL;
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = v1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  v70 = 0;
  v6 = 0;
  if ( v2 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    v7 = gcLocalNextGlobalVirtualOutputNumber;
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    v7 = gcRemoteNextGlobalVirtualOutputNumber;
  }
  gcNextGlobalVirtualOutputNumber = v7;
  if ( v2 )
  {
    v74 = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v75;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v74;
    QueryTable.DefaultLength = 4;
    v92 = 0LL;
    v88 = 0LL;
    v89 = 0;
    v90 = 0LL;
    v91 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else if ( (unsigned int)UserIsWddmConnectedSession(4LL, v5) )
  {
    v74 = 0;
    DeviceObjectPointer = ((__int64 (__fastcall *)(unsigned int *, unsigned int *))qword_1C024AB40)(&v74, &v75);
    if ( DeviceObjectPointer < 0 )
    {
      v59 = WdLogNewEntry5_WdError(v56, v8, v57);
      *(_QWORD *)(v59 + 24) = DeviceObjectPointer;
      WdLogEvent5_WdError(v59, v60);
      v75 = gcNextGlobalDeviceNumber;
    }
    v61 = gcNextGlobalDeviceNumber;
    if ( v74 > gcNextGlobalDeviceNumber )
    {
      v61 = v74;
      gcNextGlobalDeviceNumber = v74;
    }
    if ( v75 >= v61 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, v8, v57, v58);
  }
  else
  {
    if ( gProtocolType != -1 )
      v75 = gRemoteContext - 1;
    if ( dword_1C024B240 )
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
    if ( gcNextGlobalDeviceNumber > v75 )
    {
      v6 = v70;
      goto LABEL_8;
    }
    if ( !(_DWORD)v1 )
    {
      v67 = WdLogNewEntry5_WdTrace(0xFFFFLL, v8);
      WdLogEvent5_WdTrace(v67);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(0xFFFFLL, v8) )
    {
      if ( v2 )
      {
        v17 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d", v9);
        goto LABEL_19;
      }
      v48 = L"RemoteVideo";
    }
    else
    {
      v48 = (const wchar_t *)qword_1C024B238;
    }
    LODWORD(Environment) = v9;
    v17 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", v48, Environment);
LABEL_19:
    if ( v17 < 0 )
      return 0LL;
    v18 = gpRemoteGraphicsDeviceListLast;
    v19 = gpGraphicsDeviceList;
    if ( v2 )
      v18 = gpLocalGraphicsDeviceListLast;
    while ( v19 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v19, 0x40uLL) )
      {
        ++gcNextGlobalDeviceNumber;
        goto LABEL_75;
      }
      if ( v19 == (wchar_t *)v18 )
        break;
      v19 = (wchar_t *)*((_QWORD *)v19 + 16);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
LABEL_27:
      v6 = v70;
      v22 = (char *)PALLOCMEM2(0x138uLL, 1986291527LL, 1);
      LODWORD(v1) = v73;
      if ( !v22 )
        continue;
      *((_DWORD *)v22 + 54) = 0;
      *((_QWORD *)v22 + 28) = 0LL;
      *((_QWORD *)v22 + 17) = DeviceObject;
      *((_WORD *)v22 + 110) = gProtocolType;
      *((_QWORD *)v22 + 34) = 0LL;
      if ( !v2 )
        *((_DWORD *)v22 + 40) |= 0x4000000u;
      *((_QWORD *)v22 + 29) = FileObject;
      if ( v2 || gRemoteSessionUseWddm )
        *((_DWORD *)v22 + 65) = 0;
      v23 = 0;
      if ( !v2 && !gRemoteSessionUseWddm )
      {
        *((_QWORD *)v22 + 31) = 0xFFFFFFFFLL;
        *((_DWORD *)v22 + 64) = gcNextGlobalDeviceNumber;
        *((_QWORD *)v22 + 30) = 0LL;
        goto LABEL_45;
      }
      v83 = 0LL;
      *((_QWORD *)&InputBuffer + 1) = VideoPortCallout;
      *(_QWORD *)&InputBuffer = v22;
      v82 = 0LL;
      DeviceObjectPointer = GreDeviceIoControlImpl(
                              *((PDEVICE_OBJECT *)v22 + 17),
                              0x23201Fu,
                              &InputBuffer,
                              0x28u,
                              &InputBuffer,
                              0x28u,
                              &v74,
                              1u,
                              1);
      if ( DeviceObjectPointer < 0 )
      {
        v64 = WdLogNewEntry5_WdTrace(v25, v24);
        *(_QWORD *)(v64 + 24) = DeviceObjectPointer;
      }
      else
      {
        if ( (_DWORD)v82 )
          *((_DWORD *)v22 + 40) |= 0x40000000u;
        if ( (v83 & 0xC0000001) == 0 )
        {
          if ( (v83 & 0x20000000) != 0 )
            *((_DWORD *)v22 + 40) |= 0x100000u;
          v26 = (struct _DEVICE_OBJECT *)*((_QWORD *)v22 + 17);
          *((_QWORD *)v22 + 18) = *((_QWORD *)&v82 + 1);
          *((_DWORD *)v22 + 64) = 0;
          v84 = 0LL;
          v85 = 0LL;
          DeviceObjectPointer = GreDeviceIoControlImpl(v26, 0x232033u, 0LL, 0, &v84, 0x20u, &v74, 1u, 1);
          if ( DeviceObjectPointer < 0 )
          {
            if ( v2 )
              goto LABEL_45;
          }
          else
          {
            if ( (_DWORD)v84 != 2 )
            {
              v65 = WdLogNewEntry5_WdAssertion(v28, v27);
              WdLogEvent5_WdAssertion(v65);
            }
            if ( gRemoteTerminalLuid == *((_QWORD *)&v85 + 1) )
            {
              v29 = *((_QWORD *)&v84 + 1);
              if ( *((_QWORD *)&v84 + 1) )
              {
                *((_DWORD *)v22 + 40) |= 0x800000u;
                *((_QWORD *)v22 + 30) = v29;
                *((_DWORD *)v22 + 64) = DWORD1(v84);
                *((_QWORD *)v22 + 31) = v85;
LABEL_45:
                DeviceObjectPointer = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                if ( DeviceObjectPointer < 0 )
                {
                  if ( (*((_DWORD *)v22 + 40) & 0x20000000) != 0 )
                  {
                    v66 = (struct _DEVICE_OBJECT *)*((_QWORD *)v22 + 18);
                    if ( v66 )
                    {
                      DeviceObjectPointer = IoOpenDeviceRegistryKey(v66, 2u, 0x2000000u, &DeviceRegKey);
                      if ( DeviceObjectPointer >= 0 )
                      {
                        DrvGetDeviceConfigurationInformation(v22, (WCHAR *)DeviceRegKey, 1);
                        ZwClose(DeviceRegKey);
                      }
                    }
                  }
                }
                else
                {
                  v30 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                  ExFreePoolWithTag(P, 0);
                  DeviceObjectPointer = IoOpenDeviceRegistryKey(v30, 2u, 0x2000000u, &DeviceRegKey);
                  if ( DeviceObjectPointer >= 0 )
                  {
                    v76 = 0LL;
                    LODWORD(v31) = 0;
                    if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v76, 8u, &v74, 1u, 1) >= 0 )
                    {
                      if ( v76 )
                      {
                        v23 = 1;
                        if ( (*(_DWORD *)v76 & 0x20000000) != 0 )
                        {
                          do
                            v31 = (unsigned int)(v31 + 1);
                          while ( (*((_DWORD *)v76 + 5 * v31) & 0x20000000) != 0 );
                        }
                      }
                    }
                    DrvGetDeviceConfigurationInformation(v22, (WCHAR *)DeviceRegKey, 1);
                    if ( v23 )
                    {
                      if ( (_DWORD)v31 )
                      {
                        *((_DWORD *)v22 + 54) = v31;
                        *((_QWORD *)v22 + 28) = PALLOCMEM2((unsigned int)(20 * v31), 1986291527LL, 1);
                        v44 = (unsigned int)v31;
                        v45 = 0LL;
                        do
                        {
                          *(_DWORD *)(v45 + *((_QWORD *)v22 + 28)) = 0;
                          v46 = v76;
                          if ( (*(_DWORD *)((_BYTE *)v76 + v45) & 1) != 0 )
                          {
                            *(_DWORD *)(v45 + *((_QWORD *)v22 + 28)) |= 1u;
                            v46 = v76;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v46 + v45) & 2) == 0 )
                          {
                            *(_DWORD *)(v45 + *((_QWORD *)v22 + 28)) |= 2u;
                            v46 = v76;
                          }
                          if ( *(int *)((char *)v46 + v45) >= 0 )
                          {
                            *(_DWORD *)(v45 + *((_QWORD *)v22 + 28)) |= 0x80000000;
                            v46 = v76;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v46 + v45) & 0x40000000) == 0 )
                          {
                            *(_DWORD *)(v45 + *((_QWORD *)v22 + 28)) |= 0x40000000u;
                            v46 = v76;
                          }
                          *(_DWORD *)(v45 + *((_QWORD *)v22 + 28) + 4) = *(_DWORD *)((char *)v46 + v45 + 4);
                          *(_QWORD *)(v45 + *((_QWORD *)v22 + 28) + 8) = *(_QWORD *)((char *)v76 + v45 + 8);
                          *(_BYTE *)(v45 + *((_QWORD *)v22 + 28) + 16) = *((_BYTE *)v76 + v45 + 16);
                          v45 += 20LL;
                          --v44;
                        }
                        while ( v44 );
                      }
                      ExFreePoolWithTag(v76, 0);
                    }
                    ZwClose(DeviceRegKey);
                  }
                  ObfDereferenceObject(v30);
                }
                swprintf_s((wchar_t *)v22, 0x20uLL, (const wchar_t *)&QueryTable);
                ++gcNextGlobalDeviceNumber;
                if ( DeviceObjectPointer >= 0
                  || (v49 = (void *)DrvGetRegistryHandleFromDeviceMap(v22, 0LL, 0LL, 0LL, 0, &DeviceObjectPointer),
                      DeviceRegKey = v49,
                      DeviceObjectPointer >= 0)
                  && (DrvGetDeviceConfigurationInformation(v22, (WCHAR *)v49, 0),
                      ZwClose(DeviceRegKey),
                      DeviceObjectPointer >= 0) )
                {
                  if ( !*((_QWORD *)v22 + 26) )
                  {
                    v50 = PALLOCMEM2(0x20uLL, 1936876615LL, 0);
                    *((_QWORD *)v22 + 26) = v50;
                    if ( v50 )
                    {
                      RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(
                                                              v22,
                                                              0LL,
                                                              0LL,
                                                              v50,
                                                              16,
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
                v32 = (wchar_t *)(v22 + 64);
                if ( (*((_DWORD *)v22 + 40) & 8) != 0 )
                {
                  ++gcNextGlobalVirtualOutputNumber;
                  swprintf_s(v32, 0x20uLL, L"\\\\.\\DISPLAYV%d");
                }
                else
                {
                  ++gcNextGlobalPhysicalOutputNumber;
                  swprintf_s(v32, 0x20uLL, L"\\\\.\\DISPLAY%d");
                }
                PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v22);
                v34 = *((_DWORD *)v22 + 40);
                if ( PruneFlag )
                  v35 = v34 & 0xFFF7FFFF;
                else
                  v35 = v34 | 0x80000;
                *((_DWORD *)v22 + 40) = v35;
                if ( (unsigned int)bSetDeviceSessionUsage((__int64)v22, 1) )
                {
                  if ( v2 || gRemoteSessionUseWddm )
                    goto LABEL_63;
                  goto LABEL_129;
                }
                if ( !v2 && !gRemoteSessionUseWddm )
                {
LABEL_129:
                  *((_QWORD *)v22 + 35) = 0LL;
                  v52 = (__int64 *)(v22 + 296);
                  if ( dword_1C024B240 )
                    v53 = qword_1C024B244;
                  else
                    v53 = 0LL;
                  *v52 = v53;
                  *((_QWORD *)v22 + 38) = 0LL;
                  v72[0] = 0;
                  if ( (int)((__int64 (__fastcall *)(char *, __int64 *, char *, char *, _BYTE *))qword_1C024A9A8)(
                              v22 + 280,
                              v52,
                              v22 + 304,
                              v22 + 288,
                              v72) >= 0 )
                  {
                    v54 = *((_DWORD *)v22 + 41);
                    if ( v72[0] )
                      v55 = v54 | 4;
                    else
                      v55 = v54 & 0xFFFFFFFB;
                    *((_DWORD *)v22 + 41) = v55;
                    DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v22);
                  }
                  if ( DeviceObjectPointer < 0 && !gRemoteSessionUseWddm )
                  {
                    DrvCleanupOneGraphicsDevice(v22);
                    --gcNextGlobalPhysicalOutputNumber;
                    v3 = 0;
                    v6 = v70;
                    goto LABEL_68;
                  }
LABEL_63:
                  if ( gpGraphicsDeviceList )
                    *((_QWORD *)gpGraphicsDeviceListLast + 16) = v22;
                  else
                    gpGraphicsDeviceList = (wchar_t *)v22;
                  v36 = (*((_DWORD *)v22 + 40) & 0x800000) == 0;
                  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v22;
                  if ( !v36 )
                    DrvAddAdapterLuid(*(struct _LUID *)(v22 + 248));
                  v6 = 1;
                  v70 = 1;
                  goto LABEL_68;
                }
                DrvCleanupOneGraphicsDevice(v22);
LABEL_75:
                v6 = v70;
LABEL_68:
                LODWORD(v1) = v73;
                continue;
              }
            }
          }
LABEL_159:
          DrvCleanupOneGraphicsDevice(v22);
          ++gcNextGlobalDeviceNumber;
          goto LABEL_75;
        }
        DeviceObjectPointer = -1073741637;
        v64 = WdLogNewEntry5_WdTrace(v25, v24);
        *(_QWORD *)(v64 + 24) = (unsigned int)v83;
        *(_QWORD *)(v64 + 32) = DeviceObjectPointer;
      }
      WdLogEvent5_WdTrace(v64);
      goto LABEL_159;
    }
    break;
  }
  if ( v2 || gRemoteSessionUseWddm || gRemoteContext != 1 )
  {
    v39 = WdLogNewEntry5_WdTrace(v21, v20);
    *(_QWORD *)(v39 + 24) = DeviceObjectPointer;
    WdLogEvent5_WdTrace(v39);
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
  v6 = v70;
  DeviceObjectPointer = -1073741772;
LABEL_8:
  if ( !v2 && !gRemoteSessionUseWddm )
  {
    v40 = gpGraphicsDeviceList;
    v41 = 0;
    while ( v40 )
    {
      v42 = *((_DWORD *)v40 + 40);
      if ( (v42 & 0x4000000) != 0 )
      {
        v43 = v42 & 0xFFFFFFFB;
        *((_DWORD *)v40 + 40) = v43;
        *((_DWORD *)v40 + 65) = v41 < gRemoteContext;
        if ( v41 == dword_1C024B204 )
          *((_DWORD *)v40 + 40) = v43 | 4;
        ++v41;
      }
      v40 = (wchar_t *)*((_QWORD *)v40 + 16);
    }
  }
  DrvSetDisconnectedGraphicsDevice(v2);
  v12 = WdLogNewEntry5_WdTrace(v11, v10);
  WdLogEvent5_WdTrace(v12);
  if ( v6 )
    DrvSortGraphicsDeviceList();
  if ( v2 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v13 = gpGraphicsDeviceList;
    v37 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v38 = 0;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v13 )
    {
      if ( (*((_DWORD *)v13 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v13 + 64);
        ++v37;
        if ( (unsigned int)i > 0x10 || ((1 << i) & v38) != 0 )
          goto LABEL_176;
        v38 |= 1 << i;
      }
      v13 = (wchar_t *)*((_QWORD *)v13 + 16);
    }
    i = v37;
    if ( v38 == (1 << v37) - 1 )
      goto LABEL_13;
LABEL_176:
    v68 = WdLogNewEntry5_WdAssertion(i, v13);
    WdLogEvent5_WdAssertion(v68);
  }
LABEL_13:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v47 = WdLogNewEntry5_WdEvent();
      WdLogEvent5_WdEvent(v47);
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
  v15 = WdLogNewEntry5_WdTrace(i, v13);
  *(_QWORD *)(v15 + 24) = v3;
  WdLogEvent5_WdTrace(v15);
  return (unsigned int)v3;
}
