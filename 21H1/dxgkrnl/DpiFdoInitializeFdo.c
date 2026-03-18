/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C0174F5C
 * Callers:
 *     DpiAddDevice @ 0x1C0172ED0 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00F15EC (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C01632F0 (DpiRequestIoPowerState.c)
 *     DpiGetDevicePropertyString @ 0x1C017207C (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C0172188 (DpiGetDevicePropertyDataString.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01722D0 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C017260C (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiInitializeIoMmuContext @ 0x1C0172A14 (DpiInitializeIoMmuContext.c)
 *     DpiInitializeBlockList @ 0x1C0172A74 (DpiInitializeBlockList.c)
 *     DpiQueryMiniportInterface @ 0x1C01759A8 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C0175B20 (DpiQueryBusInterface.c)
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
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  NTSTATUS v15; // eax
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _WORD *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int MiniportInterface; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  NTSTATUS SystemThread; // eax
  SIZE_T v37; // rdi
  PVOID PoolWithTag; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct _DEVICE_OBJECT *v41; // rcx
  _QWORD *v42; // rax
  struct _DEVICE_OBJECT *v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  size_t v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  void *v50; // rcx
  void *v51; // rcx
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  char v56; // [rsp+48h] [rbp-C0h] BYREF
  char Data; // [rsp+49h] [rbp-BFh] BYREF
  char v58; // [rsp+4Ah] [rbp-BEh] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B0h] BYREF
  void *SymbolicLinkName[3]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h] BYREF
  int v66; // [rsp+90h] [rbp-78h]
  const wchar_t *v67; // [rsp+98h] [rbp-70h]
  unsigned int *v68; // [rsp+A0h] [rbp-68h]
  int v69; // [rsp+A8h] [rbp-60h]
  unsigned int *v70; // [rsp+B0h] [rbp-58h]
  int v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  int v73; // [rsp+C8h] [rbp-40h]
  const wchar_t *v74; // [rsp+D0h] [rbp-38h]
  unsigned int *v75; // [rsp+D8h] [rbp-30h]
  int v76; // [rsp+E0h] [rbp-28h]
  unsigned int *v77; // [rsp+E8h] [rbp-20h]
  int v78; // [rsp+F0h] [rbp-18h]
  __int64 v79; // [rsp+F8h] [rbp-10h]
  int v80; // [rsp+100h] [rbp-8h]
  const wchar_t *v81; // [rsp+108h] [rbp+0h]
  int *v82; // [rsp+110h] [rbp+8h]
  int v83; // [rsp+118h] [rbp+10h]
  int *v84; // [rsp+120h] [rbp+18h]
  int v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  int v87; // [rsp+138h] [rbp+30h]
  const wchar_t *v88; // [rsp+140h] [rbp+38h]
  int *v89; // [rsp+148h] [rbp+40h]
  int v90; // [rsp+150h] [rbp+48h]
  int *v91; // [rsp+158h] [rbp+50h]
  int v92; // [rsp+160h] [rbp+58h]
  __int64 v93; // [rsp+168h] [rbp+60h]
  int v94; // [rsp+170h] [rbp+68h]
  const wchar_t *v95; // [rsp+178h] [rbp+70h]
  __int64 *v96; // [rsp+180h] [rbp+78h]
  int v97; // [rsp+188h] [rbp+80h]
  __int64 v98; // [rsp+190h] [rbp+88h]
  int v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1A0h] [rbp+98h]
  int v101; // [rsp+1A8h] [rbp+A0h]
  __int128 v102; // [rsp+1B0h] [rbp+A8h]
  __int128 v103; // [rsp+1C0h] [rbp+B8h]
  __int64 v104; // [rsp+1D0h] [rbp+C8h]

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
  LODWORD(v62) = 0;
  v65 = 0LL;
  v67 = L"GpuVirtualizationFlags";
  v66 = 288;
  v61 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v68 = &v61;
  v69 = 67108868;
  v70 = &v61;
  v74 = L"DisableVaBackedVm";
  v75 = &g_VgpuDisableVaBackedVm;
  v77 = &g_VgpuDisableVaBackedVm;
  v81 = L"VirtualGpuOnly";
  v82 = &g_VirtualGpuOnly;
  v84 = &g_VirtualGpuOnly;
  v88 = L"LimitNumberOfVfs";
  v89 = &g_LimitNumberOfVfs;
  v91 = &g_LimitNumberOfVfs;
  v95 = L"DisableVersionMismatchCheck";
  v96 = &v62;
  v104 = 0LL;
  v71 = 4;
  v72 = 0LL;
  v73 = 288;
  v76 = 67108868;
  v78 = 4;
  v79 = 0LL;
  v80 = 288;
  v83 = 67108868;
  v85 = 4;
  v86 = 0LL;
  v87 = 288;
  v90 = 67108868;
  v92 = 4;
  v93 = 0LL;
  v94 = 288;
  v97 = 67108868;
  v98 = 0LL;
  v99 = 0;
  v100 = 0LL;
  v101 = 0;
  v102 = 0LL;
  v103 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v65, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v61 & 1;
  g_VgpuReplaceWarp = (v61 >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (v61 >> 2) & 1;
  if ( v6 )
  {
    v37 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v37, 0x74727044u);
    *(_QWORD *)(v1 + 2728) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_54;
    memset(PoolWithTag, 0, (unsigned int)v37);
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
                           (_QWORD *)(v1 + 4888),
                           &RequiredSize);
  v12 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_55;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v11,
    (POOL_TYPE)512,
    (_QWORD *)(v1 + 4896),
    &RequiredSize);
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
  if ( !(_DWORD)v62 )
  {
    v13 = DpiFdoValidateKmdAndPnpVersionMatch(v1);
    v12 = v13;
    if ( v13 < 0 )
      goto LABEL_55;
  }
  v14 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v56 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v14, &DEVPKEY_Device_InstallInProgress, &v56) >= 0 && v56 )
  {
    v41 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    v58 = 0;
    IoSetDevicePropertyData(v41, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &v58);
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
      v12 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
        v42[3] = 275LL;
        v42[4] = 21LL;
        v42[5] = v12;
        WdLogEvent5_WdCriticalError(v42);
        goto LABEL_38;
      }
    }
  }
  if ( *(_BYTE *)(v1 + 1158) )
  {
    v43 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    Data = 0;
    if ( IoGetDevicePropertyData(v43, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && Data == -1 )
    {
      *(_BYTE *)(v1 + 1159) = 1;
    }
  }
  v15 = IoRegisterDeviceInterface(
          *(PDEVICE_OBJECT *)(v1 + 152),
          &GUID_DISPLAY_DEVICE_ARRIVAL,
          0LL,
          (PUNICODE_STRING)&SymbolicLinkName[1]);
  v12 = v15;
  if ( v15 < 0 )
  {
LABEL_55:
    v40 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v40 + 24) = v12;
    WdLogEvent5_WdError(v40);
    goto LABEL_38;
  }
  v16 = ExAllocatePoolWithTag((POOL_TYPE)512, WORD1(SymbolicLinkName[1]), 0x74727044u);
  *(_QWORD *)(v1 + 2752) = v16;
  if ( !v16 )
  {
LABEL_54:
    LODWORD(v12) = -1073741801;
    v39 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v39 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v39);
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
    v12 = SystemThread;
    if ( SystemThread < 0 )
      goto LABEL_55;
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(SymbolicLinkName[0], 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(v1 + 3920) = Object;
    ZwClose(SymbolicLinkName[0]);
    if ( (int)v12 < 0 )
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
  LODWORD(v12) = DpiFdoInitializeAdapterUniqueString((__int64)StartContext);
  if ( (int)v12 < 0 )
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
  v21 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 3016) = 0;
  if ( !*(_BYTE *)(v21 + 133) || *(_BYTE *)(v1 + 1158) )
  {
    v22 = (_WORD *)(v1 + 3024);
    if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
    {
      if ( *v22 == 128 )
      {
        v44 = 4;
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
      LODWORD(v12) = -1073741811;
      v45 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v45 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v45);
      v46 = 128LL;
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
        if ( *v22 != 120
          || (v44 = 2, *(_WORD *)(v1 + 3026) != 2)
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
          LODWORD(v12) = -1073741811;
          v49 = WdLogNewEntry5_WdError(v28, v27);
          *(_QWORD *)(v49 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v49);
          v46 = 120LL;
          goto LABEL_79;
        }
LABEL_76:
        *(_DWORD *)(v1 + 3016) = v44;
        goto LABEL_21;
      }
      if ( *v22 == 112
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
      LODWORD(v12) = -1073741811;
      v48 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v48 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v48);
      v46 = 112LL;
    }
LABEL_79:
    memset(v22, 0, v46);
    goto LABEL_108;
  }
LABEL_21:
  *(_DWORD *)(v1 + 3224) = -1;
  if ( !byte_1C00AFA17
    || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
    || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1158) )
  {
    goto LABEL_33;
  }
  v22 = (_WORD *)(v1 + 3152);
  if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY, 64, 1) >= 0 )
  {
    if ( *v22 >= 0x40u
      && *(_WORD *)(v1 + 3154) == 1
      && *(_QWORD *)(v1 + 3184)
      && *(_QWORD *)(v1 + 3192)
      && *(_QWORD *)(v1 + 3200)
      && *(_QWORD *)(v1 + 3208) )
    {
      goto LABEL_33;
    }
    LODWORD(v12) = -1073741811;
    v47 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v47 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    v46 = 64LL;
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
  LODWORD(v12) = DpiInitializeBlockList((__int64)StartContext);
LABEL_38:
  v5 = v3;
  if ( (int)v12 >= 0 )
    return (unsigned int)v12;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_108;
LABEL_109:
  if ( *(_QWORD *)(v1 + 3920) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v31, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4824));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4840));
  }
  v50 = *(void **)(v1 + 3296);
  *(_DWORD *)(v1 + 3280) = 0;
  if ( v50 )
  {
    ExFreePoolWithTag(v50, 0);
    *(_QWORD *)(v1 + 3296) = 0LL;
  }
  v51 = *(void **)(v1 + 3288);
  if ( v51 )
  {
    ExFreePoolWithTag(v51, 0);
    *(_QWORD *)(v1 + 3288) = 0LL;
  }
  v52 = *(void **)(v1 + 4888);
  if ( v52 )
  {
    ExFreePoolWithTag(v52, 0);
    *(_QWORD *)(v1 + 4888) = 0LL;
  }
  v53 = *(void **)(v1 + 4896);
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    *(_QWORD *)(v1 + 4896) = 0LL;
  }
  v54 = *(void **)(v1 + 2728);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  v55 = *(void **)(v1 + 2752);
  if ( v55 )
  {
    ExFreePoolWithTag(v55, 0);
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  return (unsigned int)v12;
}
