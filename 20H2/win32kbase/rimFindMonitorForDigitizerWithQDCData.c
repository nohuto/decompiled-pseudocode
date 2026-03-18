/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C0165588
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0023A3C (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01563A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160268 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0164600 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPanelId @ 0x1C000A380 (RIMGetPanelId.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000DD30 (DrvDisplayConfigGetDeviceInfo.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00CC08C (_wcsnicmp.c)
 *     wcsnlen @ 0x1C00CC25C (wcsnlen.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     UserLogError @ 0x1C013BE20 (UserLogError.c)
 *     RIMGetContainerId @ 0x1C015DC0C (RIMGetContainerId.c)
 *     RIMGetDisplayMonitor @ 0x1C0164778 (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, unsigned int *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  _DWORD *v5; // r13
  unsigned int *v6; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r12
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int DeviceInfo; // eax
  __int64 v29; // r9
  unsigned __int16 *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int16 *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // esi
  int v41; // eax
  _DWORD *v42; // rcx
  unsigned int *v43; // rcx
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 result; // rax
  __int64 *v48; // rcx
  unsigned int v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh]
  int v53; // [rsp+48h] [rbp-B8h]
  unsigned int v54; // [rsp+4Ch] [rbp-B4h]
  __int64 v55; // [rsp+50h] [rbp-B0h]
  struct _DEVICE_OBJECT *v56; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v63; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v64[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+B0h] [rbp-50h]
  _DWORD v67[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int128 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v69; // [rsp+D0h] [rbp-30h]
  _DWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+F0h] [rbp-10h]
  _WORD v73[206]; // [rsp+F4h] [rbp-Ch] BYREF
  wchar_t Src[64]; // [rsp+290h] [rbp+190h] BYREF

  v4 = 0;
  v5 = (_DWORD *)a3;
  v6 = a2;
  v8 = 0LL;
  v63 = 0LL;
  if ( !*(_DWORD *)(a1 + 1344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !v6 )
    goto LABEL_95;
  v50 = 0LL;
  a2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v60 = 0LL;
  v12 = 0LL;
  v57 = 0LL;
  v13 = 0LL;
  v58 = 0LL;
  a4 = 0LL;
  v59 = 0LL;
  a3 = 0LL;
  v61 = 0LL;
  v55 = 0LL;
  v53 = 0;
  v49 = 0;
  v52 = 0;
  v51 = 0;
  v69 = 0LL;
  v54 = 0;
  if ( !*v6 )
    goto LABEL_13;
  while ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
  {
LABEL_21:
    Object = 0LL;
    v56 = 0LL;
    v21 = 200LL * v4;
    v68 = 0LL;
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C024A9E8)(
                v21 + *((_QWORD *)v6 + 1) + 16LL,
                *(unsigned int *)(v21 + *((_QWORD *)v6 + 1) + 28),
                &Object,
                &v56) >= 0 )
    {
      if ( (int)RIMGetContainerId(v56, &v68, 0LL, v22) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
      RIMGetPanelId(v56, Src, v25);
      ObfDereferenceObject(Object);
    }
    memset(v73, 0, 0x190uLL);
    v27 = *((_QWORD *)v6 + 1);
    v71 = *(_QWORD *)(v21 + v27 + 16);
    v72 = *(_DWORD *)(v21 + v27 + 28);
    v70[1] = 420;
    v70[0] = 2;
    DeviceInfo = DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v70);
    v29 = 0LL;
    if ( DeviceInfo >= 0 && v73[72] )
    {
      v30 = &v73[72];
      v31 = a1 + 1620 - (_QWORD)&v73[72];
      do
      {
        v32 = *(unsigned __int16 *)((char *)v30 + v31);
        v33 = *v30 - (unsigned int)v32;
        if ( (_DWORD)v33 )
          break;
        ++v30;
      }
      while ( (_DWORD)v32 );
      if ( !(_DWORD)v33 )
      {
        if ( v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v33, v31, 0LL);
        v50 = v21 + *((_QWORD *)v6 + 1);
      }
      v34 = &v73[72];
      v35 = a1 + 1364 - (_QWORD)&v73[72];
      do
      {
        v36 = *(unsigned __int16 *)((char *)v34 + v35);
        v37 = *v34 - (unsigned int)v36;
        if ( (_DWORD)v37 )
          break;
        ++v34;
      }
      while ( (_DWORD)v36 );
      if ( !(_DWORD)v37 )
      {
        if ( v11 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v37, v35, v29);
        v60 = v21 + *((_QWORD *)v6 + 1);
      }
    }
    v38 = *(_QWORD *)(a1 + 2112) - v68;
    if ( !v38 )
      v38 = *(_QWORD *)(a1 + 2120) - *((_QWORD *)&v68 + 1);
    if ( !v38 )
    {
      v39 = v69 - *(_QWORD *)(a1 + 2112);
      if ( (_QWORD)v69 == *(_QWORD *)(a1 + 2112) )
        v39 = *((_QWORD *)&v69 + 1) - *(_QWORD *)(a1 + 2120);
      if ( v39 )
      {
        ++v52;
        v61 = v21 + *((_QWORD *)v6 + 1);
      }
    }
    v40 = wcsnlen((const wchar_t *)(a1 + 2132), 0x39uLL);
    v41 = wcsnlen(Src, 0x39uLL);
    if ( v40 && v40 == v41 && !wcsnicmp((const wchar_t *)(a1 + 2132), Src, 0x39uLL) )
    {
      a4 = v21 + *((_QWORD *)v6 + 1);
      ++v51;
      v55 = a4;
    }
    else
    {
      a4 = v55;
    }
    if ( *(_DWORD *)(a1 + 1360) == 6 )
    {
      v42 = (_DWORD *)(v21 + *((_QWORD *)v6 + 1));
      if ( *(_DWORD *)(a1 + 1876) == v42[4] && *(_DWORD *)(a1 + 1880) == v42[5] && *(_DWORD *)(a1 + 1884) == v42[6] )
        v8 = v21 + *((_QWORD *)v6 + 1);
    }
    v43 = (unsigned int *)(v21 + *((_QWORD *)v6 + 1));
    v44 = v43[20];
    if ( v44 == 0x80000000 || v44 == 11 || v44 == 13 )
    {
      ++v53;
      v12 = v21 + *((_QWORD *)v6 + 1);
      a3 = v49;
      v13 = v59;
      v58 = v12;
    }
    else
    {
      v13 = v21 + *((_QWORD *)v6 + 1);
      v12 = v58;
      a3 = ++v49;
      v59 = v13;
    }
    a2 = v57;
    if ( !v57 && !v43[29] )
    {
      if ( !v43[30] )
        a2 = v43;
      v57 = a2;
    }
    v10 = v50;
    v4 = v54 + 1;
    v11 = v60;
    v54 = v4;
    if ( v4 >= *v6 )
      goto LABEL_12;
  }
  if ( !isChildPartition() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
  v18 = *((_QWORD *)v6 + 1);
  memset(v67, 0, sizeof(v67));
  v64[1] = 32;
  v19 = 200LL * v4;
  v65 = *(_QWORD *)(v18 + v19 + 16);
  v66 = *(_DWORD *)(v18 + v19 + 28);
  v64[0] = -24;
  if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v64) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v20,
        12,
        11,
        (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    }
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a1 + 1876) != v67[0]
    || __PAIR64__(*(_DWORD *)(a1 + 1888), *(_DWORD *)(a1 + 1880)) != *(_QWORD *)&v67[1] )
  {
LABEL_20:
    v10 = v50;
    goto LABEL_21;
  }
  a2 = v57;
  v8 = v19 + *((_QWORD *)v6 + 1);
  v10 = v50;
  a3 = v49;
  a4 = v55;
  v12 = v58;
  v13 = v59;
LABEL_12:
  v9 = v61;
LABEL_13:
  if ( v5 )
    *v5 = a3 != 0;
  if ( v8 )
  {
LABEL_90:
    if ( !(unsigned int)RIMGetDisplayMonitor(v8, v6, &v63) )
      goto LABEL_95;
    if ( v63 )
      v46 = *v63;
    else
      v46 = 0LL;
    *(_QWORD *)(a1 + 1352) = v46;
    *(_QWORD *)(a1 + 1876) = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(a1 + 1888) = *(_DWORD *)(v8 + 28);
    result = *(unsigned int *)(v8 + 24);
    *(_DWORD *)(a1 + 1884) = result;
    goto LABEL_102;
  }
  if ( v10 )
  {
    v8 = v10;
    *(_DWORD *)(a1 + 1360) = 5;
    goto LABEL_90;
  }
  if ( v11 )
  {
    v8 = v11;
    *(_DWORD *)(a1 + 1360) = 1;
    goto LABEL_90;
  }
  if ( a4 && v51 == 1 )
  {
    v8 = a4;
    goto LABEL_86;
  }
  if ( v9 && v52 == 1 )
  {
    v8 = v9;
    goto LABEL_86;
  }
  v45 = *(_DWORD *)(a1 + 2128);
  if ( v45 )
  {
    if ( v45 != 1 || !v13 || (_DWORD)a3 != 1 )
      goto LABEL_87;
    v8 = v13;
LABEL_86:
    *(_DWORD *)(a1 + 1360) = 2;
    goto LABEL_90;
  }
  if ( v12 && v53 == 1 )
  {
    v8 = v12;
    goto LABEL_86;
  }
LABEL_87:
  if ( a2 )
  {
    *(_DWORD *)(a1 + 1360) = 3;
    v8 = (__int64)a2;
    if ( v5 )
      UserLogError(-2147483385);
    goto LABEL_90;
  }
LABEL_95:
  if ( v5 )
    UserLogError(-2147483385);
  result = gpDispInfo;
  v48 = *(__int64 **)(gpDispInfo + 96);
  if ( v48 )
    v46 = *v48;
  else
    v46 = 0LL;
  *(_QWORD *)(a1 + 1352) = v46;
  *(_DWORD *)(a1 + 1360) = 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_(
               (_DWORD)gRimLog,
               (_DWORD)a2,
               1,
               12,
               (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    v46 = *(_QWORD *)(a1 + 1352);
  }
LABEL_102:
  if ( !v46 )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
  return result;
}
