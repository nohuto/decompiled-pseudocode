/*
 * XREFs of DriverEntry @ 0x1C01438B0
 * Callers:
 *     GsDriverEntry @ 0x1C0143010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0026CA0 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0032110 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister_EtwRegister @ 0x1C003276C (McGenEventRegister_EtwRegister.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C0032B58 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0033394 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     NdisDllInitialize @ 0x1C0035ED0 (NdisDllInitialize.c)
 *     NdisAllocateNetBufferPool @ 0x1C0037F70 (NdisAllocateNetBufferPool.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0038F70 (InitializeTelemetryAssertsKM.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C00393B4 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x1C0039D74 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00F8328 (-wil_UninitializeFeatureStaging@@YAXXZ.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00F87F8 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ??0NDIS_PD_GLOBAL@@QEAA@XZ @ 0x1C01086F4 (--0NDIS_PD_GLOBAL@@QEAA@XZ.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C010AA68 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C010B368 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?ndisInitializeStackTraces@@YAXXZ @ 0x1C010B85C (-ndisInitializeStackTraces@@YAXXZ.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0143078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01431B0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x1C01442D8 (-ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z.c)
 *     ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x1C01443A8 (-ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C01446A4 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0144EC4 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0144F5C (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145038 (-ndisIfInitializePhase1@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01458D8 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x1C0145994 (-ndisMiniportFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x1C01459EC (-ndisVBusNmrInitializeClient@@YAJXZ.c)
 *     ndisGetProcessorInfo @ 0x1C0145ACC (ndisGetProcessorInfo.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C01462BC (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C0146964 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisDpcTimeoutInitializeSubsystem@@YAXXZ @ 0x1C0146AEC (-ndisDpcTimeoutInitializeSubsystem@@YAXXZ.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x1C0146BA0 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  char *v7; // rbx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // ebx
  struct _NDIS_RCV_TRACKER_ARRAY *PoolWithTag; // rax
  SIZE_T v14; // rax
  SIZE_T v15; // rax
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // r8
  unsigned __int8 v27; // r9
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r9
  NDIS_PD_GLOBAL *v32; // rax
  NDIS_PD_GLOBAL *v33; // rax
  unsigned __int8 Handle; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlea; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handleb; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlec; // [rsp+20h] [rbp-E0h]
  int Status; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-B8h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v41; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v42[2]; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD OutputBuffer[2]; // [rsp+E8h] [rbp-18h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  wil_InitializeFeatureStaging();
  ndisWppInitTracingEx(DriverObject, RegistryPath);
  traceInited = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_1ab7b613ea553d9b6dd62b5a5ec9d1cb_Traceguids);
  McGenEventRegister_EtwRegister(
    (const GUID *)&NDIS_PROVIDER_ID,
    v4,
    NDIS_PROVIDER_ID_Context,
    NDIS_PROVIDER_ID_Context);
  McGenEventRegister_EtwRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v5,
    SLEEPSTUDY_ETW_PROVIDER_Context,
    SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C00E30F8);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, RegistryPath->Length + 2LL, 0x2020444Eu);
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  v6 = ndisFdoInitializeSubsystem();
  if ( v6 >= 0 )
  {
    DriverObject->DriverUnload = 0LL;
    KeInitializeSpinLock(&ndisGlobalLock);
    KeInitializeSpinLock(&ndisMiniDriverListLock);
    KeInitializeSpinLock(&ndisProtocolListLock);
    KeInitializeSpinLock(&ndisMiniportListLock);
    KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
    KeInitializeSpinLock(&ndisGlobalOpenListLock);
    KeInitializeSpinLock(&ndisGlobalFilterListLock);
    KeInitializeSpinLock(&ndisFilterDriverListLock);
    KeInitializeSpinLock(&ndisAbortedRequestsListLock);
    KeInitializeSpinLock(&ndisGlobalTimerListLock);
    ndisDmaAlignment = 8;
    ndisTimeIncrement = KeQueryTimeIncrement();
    ExInitializeResourceLite(&SharedMemoryResource);
    ndisReadRegistry();
    ndisFlags &= ~0x400u;
    KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
    PoolAgingTicks.HighPart = 0;
    PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
    *((_QWORD *)ndisDriverObject + 10) = &unk_1C00C8850;
    ndisInitializeStackTraces();
    ndisWorkItemLog = (struct NDIS_EVENT_LOG_HANDLE__ *)ndisAllocateEventLog(0, 7);
    imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
    if ( (ndisFlags & 0x100) == 0 )
      ndisVerifierInitialization();
    v7 = (char *)&ndisAbortedRequests;
    v8 = 16LL;
    do
    {
      memset(v7, 0, 0xB0uLL);
      v7 += 248;
      --v8;
    }
    while ( v8 );
    RtlInitUnicodeString(&DestinationString, L"\\CallBack\\NdisBindUnbind");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 592;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
    if ( v9 < 0 )
      DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v9);
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_ACDC_POWER_SOURCE,
           (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
           0LL,
           &ndisPowerStateCallbackHandle) < 0 )
      DbgPrint("Ndis: failed to register a power state Callback routine\n");
    if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) >= 0 )
    {
      if ( LOBYTE(OutputBuffer[0]) )
        v10 = LOBYTE(OutputBuffer[0]) == 1;
      else
        v10 = BYTE1(OutputBuffer[0]) == 0;
      ndisAcOnLine = v10;
    }
    ndisAoAcInitializeSubsystem();
    KeInitializeSpinLock(&qword_1C00E5D40);
    qword_1C00E5FD0 = (__int64)&qword_1C00E5FC8;
    qword_1C00E5FC8 = (__int64)&qword_1C00E5FC8;
    KeInitializeSpinLock(&qword_1C00E5D48);
    qword_1C00E5FE0 = (__int64)&qword_1C00E5FD8;
    qword_1C00E5FD8 = (__int64)&qword_1C00E5FD8;
    qword_1C00E5F10 = (__int64)&ndisGlobalPacketPoolList;
    ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
    qword_1C00E4BC8 = (__int64)&ndisGlobalTimerList;
    ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
    KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
    KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
    ndisPcwInitialize();
    KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_ndisWatchdogLock);
    *(_QWORD *)&Parameters.PoolTag = 1684948046LL;
    qword_1C00E49A8 = (__int64)&g_ndisWatchdogList;
    g_ndisWatchdogList.Flink = &g_ndisWatchdogList;
    Parameters.Header = (_NDIS_OBJECT_HEADER)1048960;
    *(_DWORD *)&Parameters.ProtocolId = 256;
    ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
    if ( !ndisNetBufferListPool )
      DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
    *(_QWORD *)&v41.PoolTag = 1684948046LL;
    v41.Header = (_NDIS_OBJECT_HEADER)786816;
    ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v41);
    if ( !ndisNetBufferPool )
      DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
    v11 = ndisInitializePeriodicReceives();
    if ( v11 < 0 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_1ab7b613ea553d9b6dd62b5a5ec9d1cb_Traceguids,
        v11);
    v12 = 2096 * ndisMaxNumberOfProcessors;
    PoolWithTag = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePoolWithTag(
                                                      NonPagedPoolNx,
                                                      2096 * ndisMaxNumberOfProcessors,
                                                      0x2020444Eu);
    ndisPerProcRcvTrackers = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v12);
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_7920440e7c0337b75cf6bec3de4b863a_Traceguids);
    }
    Status = 0;
    NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
    NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
    v14 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
    ExInitializeNPagedLookasideList(
      &ndisRcv100BytesLL,
      0LL,
      0LL,
      0x200u,
      ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
      0x7254444Eu,
      0);
    v15 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
    ExInitializeNPagedLookasideList(
      &ndisRcv1514BytesLL,
      0LL,
      0LL,
      0x200u,
      ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
      0x7254444Eu,
      0);
    AllUsersAclRead = ndisCreateAcl(v17, v16, v18, v19, Handle, 1, 0x80000001);
    AllUsersAclWrite = ndisCreateAcl(v21, v20, v22, v23, Handlea, 1, 0x40000002u);
    AllUsersAclReadWrite = ndisCreateAcl(v25, v24, v26, v27, Handleb, 1, 0xC0000013);
    AdminsAcl = ndisCreateAcl(v29, v28, v30, v31, Handlec, 0, 0xC0000013);
    ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
    ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
    ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
    ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
    IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
    ndisDpcTimeoutInitializeSubsystem();
    if ( (int)ndisGetProcessorInfo() >= 0 )
    {
      qsort(
        ndisRssProcessors,
        (unsigned int)ndisRssCpuCount,
        4uLL,
        (int (__cdecl *)(const void *, const void *))ndisCompareProcNumInit);
      qword_1C00E42F8 = (__int64)KeRegisterProcessorChangeCallback(
                                   (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                   0LL,
                                   0);
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_9ed74d096aed3ee112c1892102beae86_Traceguids);
    }
    v6 = ndisBindInitialize();
    if ( v6 < 0 )
      goto LABEL_43;
    ndisIfInitializePhase1();
    v32 = (NDIS_PD_GLOBAL *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
    if ( v32 )
      v33 = NDIS_PD_GLOBAL::NDIS_PD_GLOBAL(v32);
    else
      v33 = 0LL;
    qword_1C00E43F8 = (__int64)v33;
    if ( !v33 )
    {
      v6 = -1073741670;
LABEL_43:
      wil_UninitializeFeatureStaging();
      return v6;
    }
    v6 = 0;
    ndisVBusNmrInitializeClient();
    ndisMiniportFdoInitializeSubsystem();
    v42[0] = 1835034LL;
    v42[1] = L"RDMA Activity";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 10LL;
    Info.Callback = (PPCW_CALLBACK)ndisNdkPcwProviderCallback;
    Info.Name = (PCUNICODE_STRING)v42;
    Info.CallbackContext = 0LL;
    PcwRegister(&ndisNetworkDirectCounterSet, &Info);
    PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
    qword_1C00E3EB0 = (__int64)ndisPktMonRegisterComponentsCallback;
    NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
    ndisRegisterPDCounterSets();
    word_1C00E373E = *(_WORD *)ndisNblTrackerMode;
    word_1C00E3740 = ndisMaxNumberOfProcessors;
    qword_1C00E3748 = (__int64)&qword_1C00E5FD8;
    NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
    ndisDoesSystemSupportSriov();
    KeInitializeEvent(&g_WdiLoadInProgress, NotificationEvent, 0);
    KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
    ndisMpHookNmrInitializeClient();
  }
  if ( v6 < 0 )
    goto LABEL_43;
  return v6;
}
