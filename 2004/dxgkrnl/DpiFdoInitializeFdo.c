/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C0181044
 * Callers:
 *     DpiAddDevice @ 0x1C017EFC0 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C0128330 (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C0172D40 (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C0181A90 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C0181C08 (DpiQueryBusInterface.c)
 *     DpiInitializeBlockList @ 0x1C0181CF4 (DpiInitializeBlockList.c)
 *     DpiInitializeIoMmuContext @ 0x1C0181D9C (DpiInitializeIoMmuContext.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C0181DFC (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C0182204 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiGetDevicePropertyDataString @ 0x1C0182540 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C0182688 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // si
  char v4; // r14
  char v5; // r12
  int v6; // eax
  struct _DEVICE_OBJECT *v7; // rcx
  int DevicePropertyString; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  NTSTATUS v14; // eax
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _WORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int MiniportInterface; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  NTSTATUS SystemThread; // eax
  SIZE_T v36; // rdi
  PVOID PoolWithTag; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  struct _DEVICE_OBJECT *v40; // rcx
  _QWORD *v41; // rax
  struct _DEVICE_OBJECT *v42; // rcx
  int v43; // eax
  __int64 v44; // rax
  size_t v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  void *v49; // rcx
  void *v50; // rcx
  void *v51; // rcx
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  char v55; // [rsp+48h] [rbp-C0h] BYREF
  char Data; // [rsp+49h] [rbp-BFh] BYREF
  char v57; // [rsp+4Ah] [rbp-BEh] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v60; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v61; // [rsp+58h] [rbp-B0h] BYREF
  void *SymbolicLinkName[3]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  __int64 v64; // [rsp+88h] [rbp-80h] BYREF
  int v65; // [rsp+90h] [rbp-78h]
  const wchar_t *v66; // [rsp+98h] [rbp-70h]
  unsigned int *v67; // [rsp+A0h] [rbp-68h]
  int v68; // [rsp+A8h] [rbp-60h]
  unsigned int *v69; // [rsp+B0h] [rbp-58h]
  int v70; // [rsp+B8h] [rbp-50h]
  __int64 v71; // [rsp+C0h] [rbp-48h]
  int v72; // [rsp+C8h] [rbp-40h]
  const wchar_t *v73; // [rsp+D0h] [rbp-38h]
  unsigned int *v74; // [rsp+D8h] [rbp-30h]
  int v75; // [rsp+E0h] [rbp-28h]
  unsigned int *v76; // [rsp+E8h] [rbp-20h]
  int v77; // [rsp+F0h] [rbp-18h]
  __int64 v78; // [rsp+F8h] [rbp-10h]
  int v79; // [rsp+100h] [rbp-8h]
  const wchar_t *v80; // [rsp+108h] [rbp+0h]
  int *v81; // [rsp+110h] [rbp+8h]
  int v82; // [rsp+118h] [rbp+10h]
  int *v83; // [rsp+120h] [rbp+18h]
  int v84; // [rsp+128h] [rbp+20h]
  __int64 v85; // [rsp+130h] [rbp+28h]
  int v86; // [rsp+138h] [rbp+30h]
  const wchar_t *v87; // [rsp+140h] [rbp+38h]
  int *v88; // [rsp+148h] [rbp+40h]
  int v89; // [rsp+150h] [rbp+48h]
  int *v90; // [rsp+158h] [rbp+50h]
  int v91; // [rsp+160h] [rbp+58h]
  __int64 v92; // [rsp+168h] [rbp+60h]
  int v93; // [rsp+170h] [rbp+68h]
  const wchar_t *v94; // [rsp+178h] [rbp+70h]
  __int64 *v95; // [rsp+180h] [rbp+78h]
  int v96; // [rsp+188h] [rbp+80h]
  __int64 v97; // [rsp+190h] [rbp+88h]
  int v98; // [rsp+198h] [rbp+90h]
  __int64 v99; // [rsp+1A0h] [rbp+98h]
  int v100; // [rsp+1A8h] [rbp+A0h]
  __int128 v101; // [rsp+1B0h] [rbp+A8h]
  __int128 v102; // [rsp+1C0h] [rbp+B8h]
  __int64 v103; // [rsp+1D0h] [rbp+C8h]

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
  LODWORD(v61) = 0;
  v64 = 0LL;
  v66 = L"GpuVirtualizationFlags";
  v65 = 288;
  v60 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v67 = &v60;
  v68 = 67108868;
  v69 = &v60;
  v73 = L"DisableVaBackedVm";
  v74 = &g_VgpuDisableVaBackedVm;
  v76 = &g_VgpuDisableVaBackedVm;
  v80 = L"VirtualGpuOnly";
  v81 = &g_VirtualGpuOnly;
  v83 = &g_VirtualGpuOnly;
  v87 = L"LimitNumberOfVfs";
  v88 = &g_LimitNumberOfVfs;
  v90 = &g_LimitNumberOfVfs;
  v94 = L"DisableVersionMismatchCheck";
  v95 = &v61;
  v103 = 0LL;
  v70 = 4;
  v71 = 0LL;
  v72 = 288;
  v75 = 67108868;
  v77 = 4;
  v78 = 0LL;
  v79 = 288;
  v82 = 67108868;
  v84 = 4;
  v85 = 0LL;
  v86 = 288;
  v89 = 67108868;
  v91 = 4;
  v92 = 0LL;
  v93 = 288;
  v96 = 67108868;
  v97 = 0LL;
  v98 = 0;
  v99 = 0LL;
  v100 = 0;
  v101 = 0LL;
  v102 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v64, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v60 & 1;
  g_VgpuReplaceWarp = (v60 >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (v60 >> 2) & 1;
  if ( v6 )
  {
    v36 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v36, 0x74727044u);
    *(_QWORD *)(v1 + 2728) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_54;
    memset(PoolWithTag, 0, (unsigned int)v36);
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
  v11 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_55;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4896,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4904),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4912),
    &RequiredSize,
    &Type);
  if ( !(_DWORD)v61 )
  {
    v12 = DpiFdoValidateKmdAndPnpVersionMatch(v1);
    v11 = v12;
    if ( v12 < 0 )
      goto LABEL_55;
  }
  v13 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v55 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v13, &DEVPKEY_Device_InstallInProgress, &v55) >= 0 && v55 )
  {
    v40 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    v57 = 0;
    IoSetDevicePropertyData(v40, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &v57);
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
      v11 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
        v41[3] = 275LL;
        v41[4] = 21LL;
        v41[5] = v11;
        WdLogEvent5_WdCriticalError(v41);
        goto LABEL_38;
      }
    }
  }
  if ( *(_BYTE *)(v1 + 1158) )
  {
    v42 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    Data = 0;
    if ( IoGetDevicePropertyData(v42, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && Data == -1 )
    {
      *(_BYTE *)(v1 + 1159) = 1;
    }
  }
  v14 = IoRegisterDeviceInterface(
          *(PDEVICE_OBJECT *)(v1 + 152),
          &GUID_DISPLAY_DEVICE_ARRIVAL,
          0LL,
          (PUNICODE_STRING)&SymbolicLinkName[1]);
  v11 = v14;
  if ( v14 < 0 )
  {
LABEL_55:
    v39 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v39 + 24) = v11;
    WdLogEvent5_WdError(v39);
    goto LABEL_38;
  }
  v15 = ExAllocatePoolWithTag((POOL_TYPE)512, WORD1(SymbolicLinkName[1]), 0x74727044u);
  *(_QWORD *)(v1 + 2752) = v15;
  if ( !v15 )
  {
LABEL_54:
    LODWORD(v11) = -1073741801;
    v38 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v38 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v38);
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
    KeInitializeEvent((PRKEVENT)(v1 + 3928), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 3968) = v1 + 3960;
    *(_QWORD *)(v1 + 3960) = v1 + 3960;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4072));
    KeInitializeEvent((PRKEVENT)(v1 + 4088), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(v1 + 4112), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 484) = 1;
    *(_QWORD *)(v1 + 4136) = 0LL;
    *(_DWORD *)(v1 + 4080) = 0;
    memset((void *)(v1 + 3984), 0, 0x58uLL);
    *(_DWORD *)(v1 + 4000) = 1953656900;
    *(_DWORD *)(v1 + 4004) = 11;
    *(_DWORD *)(v1 + 4024) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 4152));
    KeInitializeDpc((PRKDPC)(v1 + 4216), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    SystemThread = PsCreateSystemThread(SymbolicLinkName, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v11 = SystemThread;
    if ( SystemThread < 0 )
      goto LABEL_55;
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(SymbolicLinkName[0], 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(v1 + 3920) = Object;
    ZwClose(SymbolicLinkName[0]);
    if ( (int)v11 < 0 )
      goto LABEL_55;
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
  *(_QWORD *)(v1 + 5400) = v1 + 5392;
  *(_QWORD *)(v1 + 5392) = v1 + 5392;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5408));
  IoCsqInitialize(
    (PIO_CSQ)(v1 + 5328),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *(_QWORD *)(v1 + 5480) = 0LL;
  *(_QWORD *)(v1 + 5488) = 0LL;
  KeInitializeEvent((PRKEVENT)(v1 + 5496), NotificationEvent, 0);
  *(_DWORD *)(v1 + 5472) = 1;
  *(_DWORD *)(v1 + 5440) = 0;
  KeInitializeMutex((PRKMUTEX)(v1 + 3408), 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3584), 0);
  *(_QWORD *)(v1 + 3656) = v1 + 3648;
  *(_QWORD *)(v1 + 3648) = v1 + 3648;
  *(_QWORD *)(v1 + 3680) = v1 + 3672;
  *(_QWORD *)(v1 + 3672) = v1 + 3672;
  *(_QWORD *)(v1 + 3576) = v1 + 3568;
  *(_QWORD *)(v1 + 3568) = v1 + 3568;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3792));
  LODWORD(v11) = DpiFdoInitializeAdapterUniqueString(StartContext);
  if ( (int)v11 < 0 )
  {
LABEL_108:
    ExDeleteResourceLite((PERESOURCE)(v1 + 3792));
    ExDeleteResourceLite((PERESOURCE)(v1 + 3304));
    v4 = 0;
    goto LABEL_109;
  }
  v5 = 1;
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2872);
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2920);
  DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
  v20 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 3016) = 0;
  if ( !*(_BYTE *)(v20 + 133) || *(_BYTE *)(v1 + 1158) )
  {
    v21 = (_WORD *)(v1 + 3024);
    if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
    {
      if ( *v21 == 128 )
      {
        v43 = 4;
        if ( *(_WORD *)(v1 + 3026) == 4
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
          goto LABEL_76;
        }
      }
      LODWORD(v11) = -1073741811;
      v44 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v44 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v44);
      v45 = 128LL;
    }
    else
    {
      if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) < 0 )
      {
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP, 120, 2) < 0 )
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
            *(_DWORD *)(v1 + 3016) = 1;
          goto LABEL_21;
        }
        if ( *v21 != 120
          || (v43 = 2, *(_WORD *)(v1 + 3026) != 2)
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
          LODWORD(v11) = -1073741811;
          v48 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v48 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v48);
          v45 = 120LL;
          goto LABEL_79;
        }
LABEL_76:
        *(_DWORD *)(v1 + 3016) = v43;
        goto LABEL_21;
      }
      if ( *v21 == 112
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
        *(_DWORD *)(v1 + 3016) = 3;
        goto LABEL_21;
      }
      LODWORD(v11) = -1073741811;
      v47 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v47 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v47);
      v45 = 112LL;
    }
LABEL_79:
    memset(v21, 0, v45);
    goto LABEL_108;
  }
LABEL_21:
  *(_DWORD *)(v1 + 3224) = -1;
  if ( !byte_1C00B1B17
    || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
    || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1158) )
  {
    goto LABEL_33;
  }
  v21 = (_WORD *)(v1 + 3152);
  if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY, 64, 1) >= 0 )
  {
    if ( *v21 >= 0x40u
      && *(_WORD *)(v1 + 3154) == 1
      && *(_QWORD *)(v1 + 3184)
      && *(_QWORD *)(v1 + 3192)
      && *(_QWORD *)(v1 + 3200)
      && *(_QWORD *)(v1 + 3208) )
    {
      goto LABEL_33;
    }
    LODWORD(v11) = -1073741811;
    v46 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    v45 = 64LL;
    goto LABEL_79;
  }
  memset((void *)(v1 + 3152), 0, 0x40uLL);
LABEL_33:
  DpiInitializeIoMmuContext(v1);
  if ( *(_BYTE *)(v1 + 1159) )
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
  if ( *(_BYTE *)(v1 + 1158) )
  {
    *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
  }
  memset((void *)(StartContext[8] + 4360LL), 0, 0x1D0uLL);
  LODWORD(v11) = DpiInitializeBlockList(StartContext);
LABEL_38:
  v5 = v3;
  if ( (int)v11 >= 0 )
    return (unsigned int)v11;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_108;
LABEL_109:
  if ( *(_QWORD *)(v1 + 3920) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v30, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4824));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4840));
  }
  v49 = *(void **)(v1 + 3296);
  *(_DWORD *)(v1 + 3280) = 0;
  if ( v49 )
  {
    ExFreePoolWithTag(v49, 0);
    *(_QWORD *)(v1 + 3296) = 0LL;
  }
  v50 = *(void **)(v1 + 3288);
  if ( v50 )
  {
    ExFreePoolWithTag(v50, 0);
    *(_QWORD *)(v1 + 3288) = 0LL;
  }
  v51 = *(void **)(v1 + 4888);
  if ( v51 )
  {
    ExFreePoolWithTag(v51, 0);
    *(_QWORD *)(v1 + 4888) = 0LL;
  }
  v52 = *(void **)(v1 + 4896);
  if ( v52 )
  {
    ExFreePoolWithTag(v52, 0);
    *(_QWORD *)(v1 + 4896) = 0LL;
  }
  v53 = *(void **)(v1 + 2728);
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  v54 = *(void **)(v1 + 2752);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  return (unsigned int)v11;
}
