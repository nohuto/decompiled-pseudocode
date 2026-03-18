/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C01F992C
 * Callers:
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C0161A00 (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C01F0D70 (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C01FA57C (DpiQueryBusInterface.c)
 *     DpiInitializeBlockList @ 0x1C01FA674 (DpiInitializeBlockList.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01FA730 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01FAB24 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01FAE1C (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C01FAF64 (DpiGetDevicePropertyString.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // r12
  char v4; // si
  char v5; // r15
  int v6; // eax
  struct _DEVICE_OBJECT *v7; // rcx
  int DevicePropertyString; // eax
  __int64 v9; // rdi
  int v10; // eax
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS v12; // eax
  PVOID v13; // rax
  __int64 v14; // rax
  _WORD *v15; // rsi
  int v16; // edi
  __int64 v17; // r8
  int MiniportInterface; // eax
  NTSTATUS SystemThread; // eax
  SIZE_T v21; // rdi
  PVOID PoolWithTag; // rax
  struct _DEVICE_OBJECT *v23; // rcx
  struct _DEVICE_OBJECT *v24; // rcx
  size_t v25; // r8
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  struct SYSMM_ADAPTER *v32; // rcx
  int Data; // [rsp+48h] [rbp-C0h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  void *SymbolicLinkName[3]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40; // [rsp+88h] [rbp-80h] BYREF
  int v41; // [rsp+90h] [rbp-78h]
  const wchar_t *v42; // [rsp+98h] [rbp-70h]
  unsigned int *v43; // [rsp+A0h] [rbp-68h]
  int v44; // [rsp+A8h] [rbp-60h]
  unsigned int *v45; // [rsp+B0h] [rbp-58h]
  int v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  int v48; // [rsp+C8h] [rbp-40h]
  const wchar_t *v49; // [rsp+D0h] [rbp-38h]
  unsigned int *v50; // [rsp+D8h] [rbp-30h]
  int v51; // [rsp+E0h] [rbp-28h]
  unsigned int *v52; // [rsp+E8h] [rbp-20h]
  int v53; // [rsp+F0h] [rbp-18h]
  __int64 v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+100h] [rbp-8h]
  const wchar_t *v56; // [rsp+108h] [rbp+0h]
  int *v57; // [rsp+110h] [rbp+8h]
  int v58; // [rsp+118h] [rbp+10h]
  int *v59; // [rsp+120h] [rbp+18h]
  int v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  int v62; // [rsp+138h] [rbp+30h]
  const wchar_t *v63; // [rsp+140h] [rbp+38h]
  int *v64; // [rsp+148h] [rbp+40h]
  int v65; // [rsp+150h] [rbp+48h]
  int *v66; // [rsp+158h] [rbp+50h]
  int v67; // [rsp+160h] [rbp+58h]
  __int64 v68; // [rsp+168h] [rbp+60h]
  int v69; // [rsp+170h] [rbp+68h]
  const wchar_t *v70; // [rsp+178h] [rbp+70h]
  __int64 *v71; // [rsp+180h] [rbp+78h]
  int v72; // [rsp+188h] [rbp+80h]
  __int64 v73; // [rsp+190h] [rbp+88h]
  int v74; // [rsp+198h] [rbp+90h]
  __int64 v75; // [rsp+1A0h] [rbp+98h]
  int v76; // [rsp+1A8h] [rbp+A0h]
  __int128 v77; // [rsp+1B0h] [rbp+A8h]
  __int128 v78; // [rsp+1C0h] [rbp+B8h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]

  v1 = StartContext[8];
  RequiredSize = 0;
  Type = 0;
  memset(SymbolicLinkName, 0, sizeof(SymbolicLinkName));
  v3 = 0;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = DpiFdoHandleQueryDeviceRelations;
  LODWORD(v37) = 0;
  v40 = 0LL;
  v42 = L"GpuVirtualizationFlags";
  v41 = 288;
  v36 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v43 = &v36;
  v44 = 67108868;
  v45 = &v36;
  v49 = L"DisableVaBackedVm";
  v50 = &g_VgpuDisableVaBackedVm;
  v52 = &g_VgpuDisableVaBackedVm;
  v56 = L"VirtualGpuOnly";
  v57 = &g_VirtualGpuOnly;
  v59 = &g_VirtualGpuOnly;
  v63 = L"LimitNumberOfVfs";
  v64 = &g_LimitNumberOfVfs;
  v66 = &g_LimitNumberOfVfs;
  v70 = L"DisableVersionMismatchCheck";
  v71 = &v37;
  v79 = 0LL;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v58 = 67108868;
  v60 = 4;
  v61 = 0LL;
  v62 = 288;
  v65 = 67108868;
  v67 = 4;
  v68 = 0LL;
  v69 = 288;
  v72 = 67108868;
  v73 = 0LL;
  v74 = 0;
  v75 = 0LL;
  v76 = 0;
  v77 = 0LL;
  v78 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v40, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v36 & 1;
  g_VgpuReplaceWarp = (v36 >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (v36 >> 2) & 1;
  if ( v6 )
  {
    v21 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x74727044u);
    *(_QWORD *)(v1 + 2728) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_66;
    memset(PoolWithTag, 0, (unsigned int)v21);
    v4 = 1;
    **(_QWORD **)(v1 + 2728) = StartContext;
    *(_DWORD *)(v1 + 2736) = 1;
  }
  else
  {
    v4 = 1;
  }
  v7 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3484) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v7,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)&RequiredSize);
  v9 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_67;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4824,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4832),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4840),
    &RequiredSize,
    &Type);
  if ( !(_DWORD)v37 )
  {
    v10 = DpiFdoValidateKmdAndPnpVersionMatch(v1);
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_67;
  }
  v11 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  LOBYTE(Data) = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v11, &DEVPKEY_Device_InstallInProgress, (char *)&Data) >= 0 && (_BYTE)Data )
  {
    v23 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    LOBYTE(Data) = 0;
    IoSetDevicePropertyData(v23, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &Data);
  }
  if ( *(_BYTE *)(v1 + 1154) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1);
      LODWORD(v9) = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, MiniportInterface);
        goto LABEL_39;
      }
    }
  }
  if ( *(_BYTE *)(v1 + 1159) )
  {
    v24 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    LOBYTE(Data) = 0;
    if ( IoGetDevicePropertyData(v24, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && (_BYTE)Data == 0xFF )
    {
      *(_BYTE *)(v1 + 1160) = 1;
    }
  }
  v12 = IoRegisterDeviceInterface(
          *(PDEVICE_OBJECT *)(v1 + 152),
          &GUID_DISPLAY_DEVICE_ARRIVAL,
          0LL,
          (PUNICODE_STRING)&SymbolicLinkName[1]);
  v9 = v12;
  if ( v12 < 0 )
  {
LABEL_67:
    WdLogSingleEntry1(2LL, v9);
LABEL_108:
    v4 = 0;
    goto LABEL_109;
  }
  v13 = ExAllocatePoolWithTag((POOL_TYPE)512, WORD1(SymbolicLinkName[1]), 0x74727044u);
  *(_QWORD *)(v1 + 2752) = v13;
  if ( !v13 )
  {
LABEL_66:
    LODWORD(v9) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    goto LABEL_109;
  }
  *(_DWORD *)(v1 + 2744) = SymbolicLinkName[1];
  RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2744), (PCUNICODE_STRING)&SymbolicLinkName[1]);
  RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  *(_BYTE *)(v1 + 482) = 0;
  *(_BYTE *)(v1 + 484) = 0;
  *(_QWORD *)(v1 + 488) = 0LL;
  if ( !*(_BYTE *)(v1 + 480) )
  {
    KeInitializeEvent((PRKEVENT)(v1 + 3936), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 3976) = v1 + 3968;
    *(_QWORD *)(v1 + 3968) = v1 + 3968;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4080));
    KeInitializeEvent((PRKEVENT)(v1 + 4096), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(v1 + 4120), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 484) = 1;
    *(_QWORD *)(v1 + 4144) = 0LL;
    *(_DWORD *)(v1 + 4088) = 0;
    memset((void *)(v1 + 3992), 0, 0x58uLL);
    *(_DWORD *)(v1 + 4008) = 1953656900;
    *(_DWORD *)(v1 + 4012) = 11;
    *(_DWORD *)(v1 + 4032) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 4160));
    KeInitializeDpc((PRKDPC)(v1 + 4224), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    SystemThread = PsCreateSystemThread(SymbolicLinkName, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v9 = SystemThread;
    if ( SystemThread < 0 )
      goto LABEL_67;
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(SymbolicLinkName[0], 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(v1 + 3928) = Object;
    ZwClose(SymbolicLinkName[0]);
    if ( (int)v9 < 0 )
      goto LABEL_67;
  }
  KeInitializeEvent((PRKEVENT)(v1 + 3696), NotificationEvent, 1u);
  *(_QWORD *)(v1 + 3472) = v1 + 3464;
  *(_QWORD *)(v1 + 3464) = v1 + 3464;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3304));
  v3 = 1;
  *(_QWORD *)(v1 + 3504) = v1 + 3496;
  *(_QWORD *)(v1 + 3496) = v1 + 3496;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3488));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3520));
  KeInitializeEvent((PRKEVENT)(v1 + 3528), NotificationEvent, 1u);
  *(_QWORD *)(v1 + 5328) = v1 + 5320;
  *(_QWORD *)(v1 + 5320) = v1 + 5320;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5336));
  IoCsqInitialize(
    (PIO_CSQ)(v1 + 5256),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *(_QWORD *)(v1 + 5408) = 0LL;
  *(_QWORD *)(v1 + 5416) = 0LL;
  KeInitializeEvent((PRKEVENT)(v1 + 5424), NotificationEvent, 0);
  *(_DWORD *)(v1 + 5400) = 1;
  *(_DWORD *)(v1 + 5368) = 0;
  KeInitializeMutex((PRKMUTEX)(v1 + 3408), 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3584), 0);
  *(_QWORD *)(v1 + 3656) = v1 + 3648;
  *(_QWORD *)(v1 + 3648) = v1 + 3648;
  *(_QWORD *)(v1 + 3680) = v1 + 3672;
  *(_QWORD *)(v1 + 3672) = v1 + 3672;
  *(_QWORD *)(v1 + 3576) = v1 + 3568;
  *(_QWORD *)(v1 + 3568) = v1 + 3568;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3792));
  LODWORD(v9) = DpiFdoInitializeAdapterUniqueString(StartContext);
  if ( (int)v9 < 0 )
  {
LABEL_107:
    ExDeleteResourceLite((PERESOURCE)(v1 + 3792));
    ExDeleteResourceLite((PERESOURCE)(v1 + 3304));
    goto LABEL_108;
  }
  v5 = 1;
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2872);
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2920);
  DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
  v14 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 3016) = 0;
  if ( !*(_BYTE *)(v14 + 133) || *(_BYTE *)(v1 + 1159) )
  {
    v15 = (_WORD *)(v1 + 3024);
    if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
    {
      if ( *v15 == 128
        && *(_WORD *)(v1 + 3026) == 4
        && *(_QWORD *)(v1 + 3056)
        && *(_QWORD *)(v1 + 3064)
        && *(_QWORD *)(v1 + 3072)
        && *(_QWORD *)(v1 + 3080)
        && *(_QWORD *)(v1 + 3088)
        && *(_QWORD *)(v1 + 3096)
        && *(_QWORD *)(v1 + 3104)
        && *(_QWORD *)(v1 + 3112)
        && *(_QWORD *)(v1 + 3120)
        && *(_QWORD *)(v1 + 3128)
        && *(_QWORD *)(v1 + 3136)
        && *(_QWORD *)(v1 + 3144) )
      {
        *(_DWORD *)(v1 + 3016) = 4;
        goto LABEL_22;
      }
      LODWORD(v9) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v25 = 128LL;
    }
    else
    {
      v16 = 3;
      if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) < 0 )
      {
        v16 = 2;
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP, 120, 2) < 0 )
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
            *(_DWORD *)(v1 + 3016) = 1;
          goto LABEL_22;
        }
        if ( *v15 != 120
          || *(_WORD *)(v1 + 3026) != 2
          || !*(_QWORD *)(v1 + 3056)
          || !*(_QWORD *)(v1 + 3064)
          || !*(_QWORD *)(v1 + 3072)
          || !*(_QWORD *)(v1 + 3080)
          || !*(_QWORD *)(v1 + 3088)
          || !*(_QWORD *)(v1 + 3096)
          || !*(_QWORD *)(v1 + 3104)
          || !*(_QWORD *)(v1 + 3112)
          || !*(_QWORD *)(v1 + 3120)
          || !*(_QWORD *)(v1 + 3136) )
        {
          LODWORD(v9) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          v25 = 120LL;
          goto LABEL_91;
        }
LABEL_62:
        *(_DWORD *)(v1 + 3016) = v16;
        goto LABEL_22;
      }
      if ( *v15 == 112
        && *(_WORD *)(v1 + 3026) == 3
        && *(_QWORD *)(v1 + 3056)
        && *(_QWORD *)(v1 + 3064)
        && *(_QWORD *)(v1 + 3072)
        && *(_QWORD *)(v1 + 3080)
        && *(_QWORD *)(v1 + 3088)
        && *(_QWORD *)(v1 + 3096)
        && *(_QWORD *)(v1 + 3104)
        && *(_QWORD *)(v1 + 3112)
        && *(_QWORD *)(v1 + 3120)
        && *(_QWORD *)(v1 + 3128) )
      {
        goto LABEL_62;
      }
      LODWORD(v9) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v25 = 112LL;
    }
LABEL_91:
    memset(v15, 0, v25);
    goto LABEL_107;
  }
LABEL_22:
  *(_DWORD *)(v1 + 3224) = -1;
  if ( !byte_1C0130496
    || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
    || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1159) )
  {
    goto LABEL_34;
  }
  v15 = (_WORD *)(v1 + 3152);
  if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY, 64, 1) >= 0 )
  {
    if ( *v15 >= 0x40u
      && *(_WORD *)(v1 + 3154) == 1
      && *(_QWORD *)(v1 + 3184)
      && *(_QWORD *)(v1 + 3192)
      && *(_QWORD *)(v1 + 3200)
      && *(_QWORD *)(v1 + 3208) )
    {
      goto LABEL_34;
    }
    LODWORD(v9) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v25 = 64LL;
    goto LABEL_91;
  }
  memset((void *)(v1 + 3152), 0, 0x40uLL);
LABEL_34:
  if ( *(_BYTE *)(v1 + 1160) )
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
  if ( *(_BYTE *)(v1 + 1159) )
  {
    *(_QWORD *)(v1 + 104) = DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = DpiFdoDispatchCleanupAndClose;
  }
  memset((void *)(StartContext[8] + 4376LL), 0, 0x178uLL);
  LODWORD(v9) = DpiInitializeBlockList(StartContext);
LABEL_39:
  v5 = v3;
  if ( (int)v9 >= 0 )
    return (unsigned int)v9;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_107;
LABEL_109:
  if ( *(_QWORD *)(v1 + 3928) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v17, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4752));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4768));
  }
  v26 = *(void **)(v1 + 3296);
  *(_DWORD *)(v1 + 3280) = 0;
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *(_QWORD *)(v1 + 3296) = 0LL;
  }
  v27 = *(void **)(v1 + 3288);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(v1 + 3288) = 0LL;
  }
  v28 = *(void **)(v1 + 4816);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(v1 + 4816) = 0LL;
  }
  v29 = *(void **)(v1 + 4824);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(v1 + 4824) = 0LL;
  }
  v30 = *(void **)(v1 + 2728);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  v31 = *(void **)(v1 + 2752);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  v32 = *(struct SYSMM_ADAPTER **)(v1 + 5672);
  if ( v32 )
    SysMmDestroyAdapter(v32);
  return (unsigned int)v9;
}
