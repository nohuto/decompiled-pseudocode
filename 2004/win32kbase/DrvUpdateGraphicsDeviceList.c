/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0
 * Callers:
 *     DrvInitConsole @ 0x1C002B6A4 (DrvInitConsole.c)
 *     DrvSetGraphicsDevices @ 0x1C005E570 (DrvSetGraphicsDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C00B4A30 (UpdateGraphicsDeviceList.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F350 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0023234 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0023320 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0056EF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     bSetDeviceSessionUsage @ 0x1C0057150 (bSetDeviceSessionUsage.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0058C78 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C005AE1C (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00B2A14 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00B3BDC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00B5770 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CB1E0 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CC39C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00CCEEC (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  struct _DEVICE_OBJECT *v27; // r14
  __int64 v28; // rdi
  wchar_t *v29; // rcx
  int PruneFlag; // eax
  int v31; // ecx
  unsigned int v32; // ecx
  bool v33; // zf
  wchar_t *v34; // rdx
  unsigned int v35; // r9d
  __int64 v36; // r8
  __int64 v37; // rax
  wchar_t *v38; // rcx
  unsigned int v39; // r8d
  int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // r9
  __int64 v43; // r8
  PVOID v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  const wchar_t *v48; // r9
  HANDLE v49; // rax
  wchar_t *v50; // rax
  HANDLE RegistryHandleFromDeviceMap; // rax
  __int64 *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
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

  v3 = (int)a1;
  v73 = a1;
  v4 = gProtocolType == 0;
  v75 = 0;
  DeviceObject = 0LL;
  v83 = 0LL;
  v5 = 1;
  FileObject = 0LL;
  P = 0LL;
  DeviceObjectPointer = 0;
  DeviceRegKey = 0LL;
  InputBuffer = 0LL;
  v82 = 0LL;
  v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = v3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v70 = 0;
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
  else if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v74 = 0;
    DeviceObjectPointer = ((__int64 (__fastcall *)(unsigned int *, unsigned int *))qword_1C024CB40)(&v74, &v75);
    if ( DeviceObjectPointer < 0 )
    {
      v60 = WdLogNewEntry5_WdError(v57, v56, v58);
      *(_QWORD *)(v60 + 24) = DeviceObjectPointer;
      WdLogEvent5_WdError(v60);
      v75 = gcNextGlobalDeviceNumber;
    }
    v61 = gcNextGlobalDeviceNumber;
    if ( v74 > gcNextGlobalDeviceNumber )
    {
      v61 = v74;
      gcNextGlobalDeviceNumber = v74;
    }
    if ( v75 >= v61 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58, v59);
  }
  else
  {
    if ( gProtocolType != -1 )
      v75 = gRemoteContext - 1;
    if ( dword_1C024D230 )
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
      v7 = v70;
      goto LABEL_8;
    }
    if ( !(_DWORD)v3 )
    {
      v67 = WdLogNewEntry5_WdTrace(0xFFFFLL);
      WdLogEvent5_WdTrace(v67);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( v4 )
      {
        v15 = StringCchPrintfW((wchar_t *)&QueryTable, 50LL, L"\\Device\\Video%d", v9);
        goto LABEL_19;
      }
      v48 = L"RemoteVideo";
    }
    else
    {
      v48 = (const wchar_t *)qword_1C024D228;
    }
    LODWORD(Environment) = v9;
    v15 = StringCchPrintfW((wchar_t *)&QueryTable, 50LL, L"\\Device\\%s%d", v48, Environment);
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
      v7 = v70;
      v19 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
      LODWORD(v3) = v73;
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
      v83 = 0LL;
      *((_QWORD *)&InputBuffer + 1) = VideoPortCallout;
      *(_QWORD *)&InputBuffer = v19;
      v82 = 0LL;
      DeviceObjectPointer = GreDeviceIoControlImpl(
                              *((PDEVICE_OBJECT *)v19 + 17),
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
        v64 = WdLogNewEntry5_WdTrace(v21);
        *(_QWORD *)(v64 + 24) = DeviceObjectPointer;
      }
      else
      {
        if ( (_DWORD)v82 )
          *((_DWORD *)v19 + 40) |= 0x40000000u;
        if ( (v83 & 0xC0000001) == 0 )
        {
          if ( (v83 & 0x20000000) != 0 )
            *((_DWORD *)v19 + 40) |= 0x100000u;
          v22 = (struct _DEVICE_OBJECT *)*((_QWORD *)v19 + 17);
          *((_QWORD *)v19 + 18) = *((_QWORD *)&v82 + 1);
          *((_DWORD *)v19 + 64) = 0;
          v84 = 0LL;
          v85 = 0LL;
          DeviceObjectPointer = GreDeviceIoControlImpl(v22, 0x232033u, 0LL, 0, &v84, 0x20u, &v74, 1u, 1);
          if ( DeviceObjectPointer < 0 )
          {
            if ( v4 )
              goto LABEL_45;
          }
          else
          {
            if ( (_DWORD)v84 != 2 )
            {
              v65 = WdLogNewEntry5_WdAssertion(v24, v23, v25);
              WdLogEvent5_WdAssertion(v65);
            }
            if ( gRemoteTerminalLuid == *((_QWORD *)&v85 + 1) )
            {
              v26 = *((_QWORD *)&v84 + 1);
              if ( *((_QWORD *)&v84 + 1) )
              {
                *((_DWORD *)v19 + 40) |= 0x800000u;
                *((_QWORD *)v19 + 30) = v26;
                *((_DWORD *)v19 + 64) = DWORD1(v84);
                *((_QWORD *)v19 + 31) = v85;
LABEL_45:
                DeviceObjectPointer = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                if ( DeviceObjectPointer < 0 )
                {
                  if ( (*((_DWORD *)v19 + 40) & 0x20000000) != 0 )
                  {
                    v66 = (struct _DEVICE_OBJECT *)*((_QWORD *)v19 + 18);
                    if ( v66 )
                    {
                      DeviceObjectPointer = IoOpenDeviceRegistryKey(v66, 2u, 0x2000000u, &DeviceRegKey);
                      if ( DeviceObjectPointer >= 0 )
                      {
                        DrvGetDeviceConfigurationInformation((__int64 *)v19, (WCHAR *)DeviceRegKey, 1);
                        ZwClose(DeviceRegKey);
                      }
                    }
                  }
                }
                else
                {
                  v27 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                  ExFreePoolWithTag(P, 0);
                  DeviceObjectPointer = IoOpenDeviceRegistryKey(v27, 2u, 0x2000000u, &DeviceRegKey);
                  if ( DeviceObjectPointer >= 0 )
                  {
                    v76 = 0LL;
                    LODWORD(v28) = 0;
                    if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v76, 8u, &v74, 1u, 1) >= 0 )
                    {
                      if ( v76 )
                      {
                        v20 = 1;
                        if ( (*(_DWORD *)v76 & 0x20000000) != 0 )
                        {
                          do
                            v28 = (unsigned int)(v28 + 1);
                          while ( (*((_DWORD *)v76 + 5 * v28) & 0x20000000) != 0 );
                        }
                      }
                    }
                    DrvGetDeviceConfigurationInformation((__int64 *)v19, (WCHAR *)DeviceRegKey, 1);
                    if ( v20 )
                    {
                      if ( (_DWORD)v28 )
                      {
                        *((_DWORD *)v19 + 54) = v28;
                        *((_QWORD *)v19 + 28) = PALLOCMEM2((unsigned int)(20 * v28), 0x76646747u, 1);
                        v42 = (unsigned int)v28;
                        v43 = 0LL;
                        do
                        {
                          *(_DWORD *)(v43 + *((_QWORD *)v19 + 28)) = 0;
                          v44 = v76;
                          if ( (*(_DWORD *)((_BYTE *)v76 + v43) & 1) != 0 )
                          {
                            *(_DWORD *)(v43 + *((_QWORD *)v19 + 28)) |= 1u;
                            v44 = v76;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v44 + v43) & 2) == 0 )
                          {
                            *(_DWORD *)(v43 + *((_QWORD *)v19 + 28)) |= 2u;
                            v44 = v76;
                          }
                          if ( *(int *)((char *)v44 + v43) >= 0 )
                          {
                            *(_DWORD *)(v43 + *((_QWORD *)v19 + 28)) |= 0x80000000;
                            v44 = v76;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v44 + v43) & 0x40000000) == 0 )
                          {
                            *(_DWORD *)(v43 + *((_QWORD *)v19 + 28)) |= 0x40000000u;
                            v44 = v76;
                          }
                          *(_DWORD *)(v43 + *((_QWORD *)v19 + 28) + 4) = *(_DWORD *)((char *)v44 + v43 + 4);
                          *(_QWORD *)(v43 + *((_QWORD *)v19 + 28) + 8) = *(_QWORD *)((char *)v76 + v43 + 8);
                          *(_BYTE *)(v43 + *((_QWORD *)v19 + 28) + 16) = *((_BYTE *)v76 + v43 + 16);
                          v43 += 20LL;
                          --v42;
                        }
                        while ( v42 );
                      }
                      ExFreePoolWithTag(v76, 0);
                    }
                    ZwClose(DeviceRegKey);
                  }
                  ObfDereferenceObject(v27);
                }
                swprintf_s((wchar_t *)v19, 0x20uLL, (const wchar_t *)&QueryTable);
                ++gcNextGlobalDeviceNumber;
                if ( DeviceObjectPointer >= 0
                  || (v49 = DrvGetRegistryHandleFromDeviceMap(
                              (unsigned __int16 *)v19,
                              0,
                              0LL,
                              0LL,
                              0,
                              &DeviceObjectPointer),
                      DeviceRegKey = v49,
                      DeviceObjectPointer >= 0)
                  && (DrvGetDeviceConfigurationInformation((__int64 *)v19, (WCHAR *)v49, 0),
                      ZwClose(DeviceRegKey),
                      DeviceObjectPointer >= 0) )
                {
                  if ( !*((_QWORD *)v19 + 26) )
                  {
                    v50 = (wchar_t *)PALLOCMEM2(0x20uLL, 0x73726447u, 0);
                    *((_QWORD *)v19 + 26) = v50;
                    if ( v50 )
                    {
                      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                                      (unsigned __int16 *)v19,
                                                      0,
                                                      0LL,
                                                      v50,
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
                v29 = (wchar_t *)(v19 + 64);
                if ( (*((_DWORD *)v19 + 40) & 8) != 0 )
                {
                  ++gcNextGlobalVirtualOutputNumber;
                  swprintf_s(v29, 0x20uLL, L"\\\\.\\DISPLAYV%d");
                }
                else
                {
                  ++gcNextGlobalPhysicalOutputNumber;
                  swprintf_s(v29, 0x20uLL, L"\\\\.\\DISPLAY%d");
                }
                PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v19);
                v31 = *((_DWORD *)v19 + 40);
                if ( PruneFlag )
                  v32 = v31 & 0xFFF7FFFF;
                else
                  v32 = v31 | 0x80000;
                *((_DWORD *)v19 + 40) = v32;
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
                  v52 = (__int64 *)(v19 + 296);
                  if ( dword_1C024D230 )
                    v53 = qword_1C024D234;
                  else
                    v53 = 0LL;
                  *v52 = v53;
                  *((_QWORD *)v19 + 38) = 0LL;
                  v72[0] = 0;
                  if ( (int)((__int64 (__fastcall *)(char *, __int64 *, char *, char *, _BYTE *))qword_1C024C9A8)(
                              v19 + 280,
                              v52,
                              v19 + 304,
                              v19 + 288,
                              v72) >= 0 )
                  {
                    v54 = *((_DWORD *)v19 + 41);
                    if ( v72[0] )
                      v55 = v54 | 4;
                    else
                      v55 = v54 & 0xFFFFFFFB;
                    *((_DWORD *)v19 + 41) = v55;
                    DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v19);
                  }
                  if ( DeviceObjectPointer < 0 && !gRemoteSessionUseWddm )
                  {
                    DrvCleanupOneGraphicsDevice((__int64)v19);
                    --gcNextGlobalPhysicalOutputNumber;
                    v5 = 0;
                    v7 = v70;
                    goto LABEL_68;
                  }
LABEL_63:
                  if ( gpGraphicsDeviceList )
                    *((_QWORD *)gpGraphicsDeviceListLast + 16) = v19;
                  else
                    gpGraphicsDeviceList = (wchar_t *)v19;
                  v33 = (*((_DWORD *)v19 + 40) & 0x800000) == 0;
                  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v19;
                  if ( !v33 )
                    DrvAddAdapterLuid(*(struct _LUID *)(v19 + 248));
                  v7 = 1;
                  v70 = 1;
                  goto LABEL_68;
                }
                DrvCleanupOneGraphicsDevice((__int64)v19);
LABEL_75:
                v7 = v70;
LABEL_68:
                LODWORD(v3) = v73;
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
        v64 = WdLogNewEntry5_WdTrace(v21);
        *(_QWORD *)(v64 + 24) = (unsigned int)v83;
        *(_QWORD *)(v64 + 32) = DeviceObjectPointer;
      }
      WdLogEvent5_WdTrace(v64);
      goto LABEL_159;
    }
    break;
  }
  if ( v4 || gRemoteSessionUseWddm || gRemoteContext != 1 )
  {
    v37 = WdLogNewEntry5_WdTrace(v18);
    *(_QWORD *)(v37 + 24) = DeviceObjectPointer;
    WdLogEvent5_WdTrace(v37);
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
  v7 = v70;
  DeviceObjectPointer = -1073741772;
LABEL_8:
  if ( !v4 && !gRemoteSessionUseWddm )
  {
    v38 = gpGraphicsDeviceList;
    v39 = 0;
    while ( v38 )
    {
      v40 = *((_DWORD *)v38 + 40);
      if ( (v40 & 0x4000000) != 0 )
      {
        v41 = v40 & 0xFFFFFFFB;
        *((_DWORD *)v38 + 40) = v41;
        *((_DWORD *)v38 + 65) = v39 < gRemoteContext;
        if ( v39 == dword_1C024D1F4 )
          *((_DWORD *)v38 + 40) = v41 | 4;
        ++v39;
      }
      v38 = (wchar_t *)*((_QWORD *)v38 + 16);
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
    v34 = gpGraphicsDeviceList;
    v35 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v36 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v34 )
    {
      if ( (*((_DWORD *)v34 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v34 + 64);
        ++v35;
        if ( (unsigned int)i > 0x10 || ((1 << i) & (unsigned int)v36) != 0 )
          goto LABEL_176;
        v36 = (1 << i) | (unsigned int)v36;
      }
      v34 = (wchar_t *)*((_QWORD *)v34 + 16);
    }
    i = v35;
    if ( (_DWORD)v36 == (1 << v35) - 1 )
      goto LABEL_13;
LABEL_176:
    v68 = WdLogNewEntry5_WdAssertion(i, v34, v36);
    WdLogEvent5_WdAssertion(v68);
  }
LABEL_13:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v47 = WdLogNewEntry5_WdEvent(i, v45, v46);
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
  v13 = WdLogNewEntry5_WdTrace(i);
  *(_QWORD *)(v13 + 24) = v5;
  WdLogEvent5_WdTrace(v13);
  return (unsigned int)v5;
}
