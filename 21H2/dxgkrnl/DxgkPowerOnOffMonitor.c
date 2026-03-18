/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C01F0E64
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C03485B0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DxgkReportMonitorPowerRapidHpdTrigerEvent @ 0x1C002397C (DxgkReportMonitorPowerRapidHpdTrigerEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C01EFE0C (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C01F14EC (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F3230 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C0397F40 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03B0AD0 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        int *a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *QuadPart; // r12
  int *v8; // r13
  bool v9; // zf
  struct _DEVICE_OBJECT *v11; // rdi
  unsigned int v12; // r15d
  int v14; // ecx
  __int64 v15; // rax
  char *v16; // r14
  _QWORD *v17; // r8
  _QWORD *v18; // r13
  _QWORD *v19; // r12
  _QWORD *v20; // r14
  struct _DEVICE_OBJECT *v21; // rcx
  int v22; // r14d
  union _LARGE_INTEGER v23; // rax
  __int64 v24; // r13
  unsigned int v25; // esi
  ULONG v26; // r15d
  NTSTATUS v27; // eax
  int v28; // eax
  _QWORD *v29; // rsi
  _QWORD *v30; // r14
  __int64 DeviceExtension; // rsi
  PIRP v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  PVOID v35; // r14
  unsigned int v36; // esi
  _QWORD *v37; // rbx
  __int64 v38; // rax
  _DWORD *i; // rsi
  __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  char WaitMode; // [rsp+20h] [rbp-B9h]
  unsigned int InputBuffer; // [rsp+50h] [rbp-89h] BYREF
  int *v48; // [rsp+58h] [rbp-81h]
  PVOID Object; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-71h]
  PVOID P; // [rsp+70h] [rbp-69h]
  _DWORD *v52; // [rsp+78h] [rbp-61h]
  __int64 v53; // [rsp+80h] [rbp-59h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-51h] BYREF
  PKWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-49h]
  struct _KEVENT Event; // [rsp+98h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  QuadPart = a6;
  v58 = 0LL;
  v8 = a4;
  v48 = a4;
  v9 = *(_DWORD *)(v6 + 3484) == -1;
  v52 = a3;
  v50 = a2;
  LODWORD(v11) = 0;
  v53 = a1;
  v12 = 0;
  Timeout.QuadPart = (LONGLONG)a6;
  InputBuffer = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  if ( !v9 )
    KeWaitForSingleObject(&::Event, Executive, 0, 0, 0LL);
  if ( *v8 <= 1 )
  {
    for ( i = MONITOR_MGR::_pUsb4Manager; ; KeWaitForSingleObject(i + 32, Executive, 0, 0, 0LL) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&Object, (struct DXGFASTMUTEX *)(i + 20));
      if ( !i[18] )
        break;
      MUTEX_LOCK::~MUTEX_LOCK((struct _KTHREAD ***)&Object);
    }
    MUTEX_LOCK::~MUTEX_LOCK((struct _KTHREAD ***)&Object);
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, &v58);
    LODWORD(v11) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)v11 >= 0 )
    {
      DxgkReportMonitorPowerRapidHpdTrigerEvent(*(_QWORD *)(v6 + 3896), 1u);
      MonitorEnableDisableMonitor(*(struct DXGADAPTER **)(v6 + 3896), WaitMode, 1LL, a6);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v11, &v58);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiCheckForOutstandingD3Requests(v6);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
  v14 = *(_DWORD *)(v6 + 236);
  if ( v14 != 2 && (*(_DWORD *)(v6 + 240) != 2 || ((v14 - 3) & 0xFFFFFFFC) != 0 || v14 == 4) )
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v6 + 3513) && *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, &v58);
    DpiFdoInvalidateChildRelations(a1, 6LL, a6);
    DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, &v58);
  }
  DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, &v58);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3304), 1u);
  if ( a5 )
  {
    v15 = *(unsigned int *)(v6 + 3664);
    if ( (_DWORD)v15 )
    {
      P = ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v15, 0x74727044u);
      v16 = (char *)P;
      if ( !P )
        WdLogSingleEntry1(6LL, 0LL);
      WaitBlockArray = (PKWAIT_BLOCK)&v16[8 * *(unsigned int *)(v6 + 3664)];
    }
  }
  v17 = (_QWORD *)(v6 + 3464);
  v18 = *(_QWORD **)(v6 + 3464);
  if ( v18 != (_QWORD *)(v6 + 3464) )
  {
    v19 = P;
    while ( 1 )
    {
      v20 = v18 - 4;
      v18 = (_QWORD *)*v18;
      if ( *(_DWORD *)v20 == 1 )
      {
        if ( *v52 == -1 )
          goto LABEL_20;
        v41 = 0LL;
        if ( v50 )
          break;
      }
LABEL_22:
      if ( v18 == v17 )
      {
        QuadPart = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Timeout.QuadPart;
        InputBuffer = v12;
        goto LABEL_24;
      }
    }
    while ( v52[v41] != *((_DWORD *)v20 + 6) )
    {
      v41 = (unsigned int)(v41 + 1);
      if ( (unsigned int)v41 >= v50 )
        goto LABEL_22;
    }
LABEL_20:
    v21 = (struct _DEVICE_OBJECT *)v20[6];
    if ( v21 )
    {
      DeviceExtension = (__int64)v21->DeviceExtension;
      Object = IoGetAttachedDeviceReference(v21);
      v11 = (struct _DEVICE_OBJECT *)Object;
      if ( Object )
      {
        memset(&Event, 0, sizeof(Event));
        IoStatusBlock = 0LL;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        InputBuffer = *v48;
        v32 = IoBuildDeviceIoControlRequest(0x23242Fu, v11, &InputBuffer, 4u, 0LL, 0, 1u, &Event, &IoStatusBlock);
        if ( v32 )
        {
          v32->IoStatus.Status = -1073741637;
          LODWORD(v11) = IofCallDriver(v11, v32);
          if ( (_DWORD)v11 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            LODWORD(v11) = IoStatusBlock.Status;
          }
          if ( (int)v11 < 0 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(DeviceExtension + 484) )
              DpiCheckForOutstandingD3Requests(DeviceExtension);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
            LODWORD(v11) = DpiPdoSetDevicePower(v20[6], *v48, 0);
            if ( *(_BYTE *)(DeviceExtension + 484) )
              DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
            KeLeaveCriticalRegion();
          }
          else if ( v19 )
          {
            ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
            v33 = 1008LL;
            if ( *v48 != 1 )
              v33 = 984LL;
            v34 = v12++;
            v19[v34] = DeviceExtension + v33;
          }
        }
        else
        {
          LODWORD(v11) = -1073741670;
          WdLogSingleEntry1(6LL, -1073741670LL);
        }
        ObfDereferenceObject(Object);
      }
      else
      {
        LODWORD(v11) = -1073741823;
        WdLogSingleEntry1(2LL, -1073741823LL);
      }
      v17 = (_QWORD *)(v6 + 3464);
    }
    *((_DWORD *)v20 + 17) = *v48;
    goto LABEL_22;
  }
LABEL_24:
  ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    v22 = 10;
    v23.QuadPart = -1000000LL * v12;
    Object = (PVOID)v23.QuadPart;
    do
    {
      v24 = 0LL;
      v25 = v12;
      --v22;
      do
      {
        Timeout = v23;
        v26 = v25;
        if ( v25 > 0x40 )
          v26 = 64;
        v27 = KeWaitForMultipleObjects(v26, (PVOID *)P + v24, WaitAll, Executive, 0, 0, &Timeout, WaitBlockArray);
        v11 = (struct _DEVICE_OBJECT *)v27;
        if ( v27 == 258 )
        {
          v42 = 3LL;
          if ( !v22 )
            v42 = 2LL;
          WdLogSingleEntry1(v42, 258LL);
        }
        else if ( v27 )
        {
          DisplayLogSetMonitorPowerStage(QuadPart, 2147483652LL, (unsigned int)v27, &v58);
          WdLogSingleEntry1(2LL, v11);
          goto LABEL_59;
        }
        v23.QuadPart = (LONGLONG)Object;
        v24 = v26 + (unsigned int)v24;
        v25 -= v26;
      }
      while ( v25 );
      if ( (_DWORD)v11 != 258 )
        break;
      v12 = InputBuffer;
    }
    while ( v22 );
  }
  DisplayLogSetMonitorPowerStage(QuadPart, 2147483652LL, (unsigned int)v11, &v58);
  v8 = v48;
LABEL_36:
  if ( *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(QuadPart, 8LL, 0LL, &v58);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3304), 1u);
    v28 = DpiAcquireCoreSyncAccessSafe(v53, 1);
    LODWORD(v11) = v28;
    if ( v28 < 0 )
    {
      WdLogSingleEntry1(4LL, v28);
    }
    else
    {
      v29 = *(_QWORD **)(v6 + 3464);
      while ( v29 != (_QWORD *)(v6 + 3464) )
      {
        v30 = v29;
        v29 = (_QWORD *)*v29;
        if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v30 - 7)) && !*((_BYTE *)v30 + 34) )
        {
          MonitorRemovePhysicalMonitor(*(void **)(v6 + 3896), *((_DWORD *)v30 - 2));
          v43 = (_QWORD *)v30[2];
          if ( v43 )
          {
            v44 = v43[8];
            if ( v44 )
            {
              if ( *(_BYTE *)(v44 + 944) )
              {
                v45 = DpiPdoSetMonitorDriverInterfaceState(v43);
                LODWORD(v11) = v45;
                if ( v45 < 0 )
                  WdLogSingleEntry1(3LL, v45);
              }
            }
          }
        }
      }
      DxgkReportMonitorPowerRapidHpdTrigerEvent(*(_QWORD *)(v6 + 3896), 0);
      MonitorEnableDisableMonitor(*(struct DXGADAPTER **)(v6 + 3896), WaitMode, 0LL, QuadPart);
      DpiReleaseCoreSyncAccessSafe(v53, 1);
    }
    DisplayLogSetMonitorPowerStage(QuadPart, 2147483656LL, (unsigned int)v11, &v58);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
LABEL_59:
    v8 = v48;
  }
  v35 = P;
  if ( P )
  {
    v36 = InputBuffer;
    if ( InputBuffer )
    {
      v37 = (char *)P + 8 * InputBuffer;
      do
      {
        --v37;
        v38 = 1008LL;
        if ( *v8 != 1 )
          v38 = 984LL;
        ObfDereferenceObject(*(PVOID *)(*v37 - v38 + 24));
        --v36;
      }
      while ( v36 );
    }
    ExFreePoolWithTag(v35, 0);
  }
  return (unsigned int)v11;
}
