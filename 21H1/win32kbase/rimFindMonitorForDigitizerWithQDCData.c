/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C00A37A8 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C016CEB0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPanelId @ 0x1C0022628 (RIMGetPanelId.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0095300 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00CC5CC (_wcsnicmp.c)
 *     wcsnlen @ 0x1C00CC79C (wcsnlen.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     UserLogError @ 0x1C01444C0 (UserLogError.c)
 *     RIMGetContainerId @ 0x1C01664BC (RIMGetContainerId.c)
 *     RIMGetDisplayMonitor @ 0x1C016D028 (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r14
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // r12
  __int64 v20; // rcx
  ULONG v21; // r8d
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  unsigned __int16 *v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // esi
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  __int64 result; // rax
  __int64 *v38; // rcx
  int v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+38h] [rbp-C8h]
  int v41; // [rsp+40h] [rbp-C0h]
  int v42; // [rsp+44h] [rbp-BCh]
  int v43; // [rsp+48h] [rbp-B8h]
  unsigned int v44; // [rsp+4Ch] [rbp-B4h]
  __int64 v45; // [rsp+50h] [rbp-B0h]
  struct _DEVICE_OBJECT *v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  _DWORD *v51; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v53; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v54[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h]
  int v56; // [rsp+B0h] [rbp-50h]
  _DWORD v57[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int128 v58; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v59; // [rsp+D0h] [rbp-30h]
  _DWORD v60[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+F0h] [rbp-10h]
  _WORD v63[206]; // [rsp+F4h] [rbp-Ch] BYREF
  wchar_t Src[64]; // [rsp+290h] [rbp+190h] BYREF

  v3 = 0;
  v5 = a2;
  v7 = 0LL;
  v53 = 0LL;
  if ( !*(_DWORD *)(a1 + 1336) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !v5 )
    goto LABEL_95;
  v40 = 0LL;
  a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v50 = 0LL;
  v11 = 0LL;
  v47 = 0LL;
  v12 = 0LL;
  v48 = 0LL;
  v13 = 0LL;
  v49 = 0LL;
  v14 = 0;
  v51 = 0LL;
  v45 = 0LL;
  v43 = 0;
  v39 = 0;
  v42 = 0;
  v41 = 0;
  v59 = 0LL;
  v44 = 0;
  if ( !*(_DWORD *)v5 )
    goto LABEL_13;
  while ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
  {
LABEL_21:
    Object = 0LL;
    v46 = 0LL;
    v19 = 200LL * v3;
    v58 = 0LL;
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C0252A08)(
                v19 + *(_QWORD *)(v5 + 8) + 16LL,
                *(unsigned int *)(v19 + *(_QWORD *)(v5 + 8) + 28),
                &Object,
                &v46) >= 0 )
    {
      if ( (int)RIMGetContainerId(v46, &v58, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      RIMGetPanelId(v46, Src, v21);
      ObfDereferenceObject(Object);
    }
    memset(v63, 0, 0x190uLL);
    v22 = *(_QWORD *)(v5 + 8);
    v61 = *(_QWORD *)(v19 + v22 + 16);
    v62 = *(_DWORD *)(v19 + v22 + 28);
    v60[1] = 420;
    v60[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v60) >= 0 && v63[72] )
    {
      v23 = &v63[72];
      do
      {
        v24 = *(unsigned __int16 *)((char *)v23 + a1 + 1612 - (_QWORD)&v63[72]);
        v25 = *v23 - (_DWORD)v24;
        if ( v25 )
          break;
        ++v23;
      }
      while ( (_DWORD)v24 );
      if ( !v25 )
      {
        if ( v9 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
        v40 = v19 + *(_QWORD *)(v5 + 8);
      }
      v26 = &v63[72];
      do
      {
        v27 = *(unsigned __int16 *)((char *)v26 + a1 + 1356 - (_QWORD)&v63[72]);
        v28 = *v26 - (_DWORD)v27;
        if ( v28 )
          break;
        ++v26;
      }
      while ( (_DWORD)v27 );
      if ( !v28 )
      {
        if ( v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
        v50 = v19 + *(_QWORD *)(v5 + 8);
      }
    }
    v29 = *(_QWORD *)(a1 + 2104) - v58;
    if ( !v29 )
      v29 = *(_QWORD *)(a1 + 2112) - *((_QWORD *)&v58 + 1);
    if ( !v29 )
    {
      v30 = v59 - *(_QWORD *)(a1 + 2104);
      if ( (_QWORD)v59 == *(_QWORD *)(a1 + 2104) )
        v30 = *((_QWORD *)&v59 + 1) - *(_QWORD *)(a1 + 2112);
      if ( v30 )
      {
        ++v42;
        v51 = (_DWORD *)(v19 + *(_QWORD *)(v5 + 8));
      }
    }
    v31 = wcsnlen((const wchar_t *)(a1 + 2124), 0x39uLL);
    v32 = wcsnlen(Src, 0x39uLL);
    if ( v31 && v31 == v32 && !wcsnicmp((const wchar_t *)(a1 + 2124), Src, 0x39uLL) )
    {
      v13 = v19 + *(_QWORD *)(v5 + 8);
      ++v41;
      v45 = v13;
    }
    else
    {
      v13 = v45;
    }
    if ( *(_DWORD *)(a1 + 1352) == 6 )
    {
      v33 = (_DWORD *)(v19 + *(_QWORD *)(v5 + 8));
      if ( *(_DWORD *)(a1 + 1868) == v33[4] && *(_DWORD *)(a1 + 1872) == v33[5] && *(_DWORD *)(a1 + 1876) == v33[6] )
        v7 = v19 + *(_QWORD *)(v5 + 8);
    }
    v8 = (_DWORD *)(v19 + *(_QWORD *)(v5 + 8));
    v34 = v8[20];
    if ( v34 == 0x80000000 || v34 == 11 || v34 == 13 )
    {
      ++v43;
      v11 = v19 + *(_QWORD *)(v5 + 8);
      v14 = v39;
      v12 = v49;
      v48 = v11;
    }
    else
    {
      v12 = v19 + *(_QWORD *)(v5 + 8);
      v11 = v48;
      v14 = ++v39;
      v49 = v12;
    }
    a2 = v47;
    if ( !v47 && !v8[29] )
    {
      if ( !v8[30] )
        a2 = (__int64)v8;
      v47 = a2;
    }
    v9 = v40;
    v3 = v44 + 1;
    v10 = v50;
    v44 = v3;
    if ( v3 >= *(_DWORD *)v5 )
      goto LABEL_12;
  }
  if ( !isChildPartition((__int64)v8, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
  v16 = *(_QWORD *)(v5 + 8);
  memset(v57, 0, sizeof(v57));
  v54[1] = 32;
  v17 = 200LL * v3;
  v55 = *(_QWORD *)(v16 + v17 + 16);
  v56 = *(_DWORD *)(v16 + v17 + 28);
  v54[0] = -24;
  if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v54) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        12,
        11,
        (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    }
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a1 + 1868) != v57[0]
    || __PAIR64__(*(_DWORD *)(a1 + 1880), *(_DWORD *)(a1 + 1872)) != *(_QWORD *)&v57[1] )
  {
LABEL_20:
    v9 = v40;
    goto LABEL_21;
  }
  a2 = v47;
  v7 = v17 + *(_QWORD *)(v5 + 8);
  v9 = v40;
  v14 = v39;
  v13 = v45;
  v11 = v48;
  v12 = v49;
LABEL_12:
  v8 = v51;
LABEL_13:
  if ( a3 )
    *a3 = v14 != 0;
  if ( v7 )
  {
LABEL_90:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, (unsigned int *)v5, &v53) )
      goto LABEL_95;
    if ( v53 )
      v36 = *v53;
    else
      v36 = 0LL;
    *(_QWORD *)(a1 + 1344) = v36;
    *(_QWORD *)(a1 + 1868) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(a1 + 1880) = *(_DWORD *)(v7 + 28);
    result = *(unsigned int *)(v7 + 24);
    *(_DWORD *)(a1 + 1876) = result;
    goto LABEL_102;
  }
  if ( v9 )
  {
    v7 = v9;
    *(_DWORD *)(a1 + 1352) = 5;
    goto LABEL_90;
  }
  if ( v10 )
  {
    v7 = v10;
    *(_DWORD *)(a1 + 1352) = 1;
    goto LABEL_90;
  }
  if ( v13 && v41 == 1 )
  {
    v7 = v13;
    goto LABEL_86;
  }
  if ( v8 && v42 == 1 )
  {
    v7 = (__int64)v8;
    goto LABEL_86;
  }
  v35 = *(_DWORD *)(a1 + 2120);
  if ( v35 )
  {
    if ( v35 != 1 || !v12 || v14 != 1 )
      goto LABEL_87;
    v7 = v12;
LABEL_86:
    *(_DWORD *)(a1 + 1352) = 2;
    goto LABEL_90;
  }
  if ( v11 && v43 == 1 )
  {
    v7 = v11;
    goto LABEL_86;
  }
LABEL_87:
  if ( a2 )
  {
    *(_DWORD *)(a1 + 1352) = 3;
    v7 = a2;
    if ( a3 )
      UserLogError(-2147483385);
    goto LABEL_90;
  }
LABEL_95:
  if ( a3 )
    UserLogError(-2147483385);
  result = gpDispInfo;
  v38 = *(__int64 **)(gpDispInfo + 96);
  if ( v38 )
    v36 = *v38;
  else
    v36 = 0LL;
  *(_QWORD *)(a1 + 1344) = v36;
  *(_DWORD *)(a1 + 1352) = 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 12, (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    v36 = *(_QWORD *)(a1 + 1344);
  }
LABEL_102:
  if ( !v36 )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  return result;
}
