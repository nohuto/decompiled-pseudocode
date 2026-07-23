/*
 * XREFs of IoInitSystemPreDrivers @ 0x140A40FE0
 * Callers:
 *     IoInitSystem @ 0x140A4899C (IoInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x14021E6F0 (KeReleaseSpinLock.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     RtlInitializeGenericTableAvl @ 0x14023FD70 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x1402D6A20 (KeInitializeSemaphore.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     HeadlessKernelAddLogEntry @ 0x14036D9A8 (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A4C0 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x1403A4260 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x1403BBDA4 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403BF690 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x1403CBAA0 (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x1403CD97C (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1403CDFA8 (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x1403CE6C8 (HvlPhase2Initialize.c)
 *     IoInitializeLiveDump @ 0x1403CF10C (IoInitializeLiveDump.c)
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x1403CF14C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     IopConfigureDiskIoAttribution @ 0x1403CF544 (IopConfigureDiskIoAttribution.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     Feature_Servicing_AzureVMHang__private_IsEnabled @ 0x1403F01C4 (Feature_Servicing_AzureVMHang__private_IsEnabled.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     NtCreateEvent @ 0x140601020 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     RtlIsStateSeparationEnabled @ 0x1406D9470 (RtlIsStateSeparationEnabled.c)
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     IoInitializeProcessor @ 0x14078BDD8 (IoInitializeProcessor.c)
 *     PsLocateSystemDlls @ 0x1407943CC (PsLocateSystemDlls.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14079F3CC (EtwTraceLeapSecondDataUpdate.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 *     SeAuditBootConfiguration @ 0x1407B7424 (SeAuditBootConfiguration.c)
 *     IopInitializeTriageDumpData @ 0x1407C4E98 (IopInitializeTriageDumpData.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407C75A0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x1407CF6BC (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x14086A3CC (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x1408A39D0 (PpPagePathAssign.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x140938D74 (EtwTraceLeapSecondDataParseFailure.c)
 *     PfSnBeginBootPhase @ 0x14099DD04 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x14099DF40 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x14099EDC4 (ExInitializeSystemLookasideList.c)
 *     KseInitialize @ 0x140A3ED1C (KseInitialize.c)
 *     WMIInitialize @ 0x140A3EFD4 (WMIInitialize.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A49270 (BootApplicationPersistentDataProcess.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     IopCreateRootDirectories @ 0x140A5A0F8 (IopCreateRootDirectories.c)
 *     IopStoreArcInformation @ 0x140A5C708 (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     WheaInitialize @ 0x140A61A3C (WheaInitialize.c)
 *     SmInitSystem @ 0x140A6E354 (SmInitSystem.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6FEB8 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializePassiveInterruptServices @ 0x140A704E0 (IopInitializePassiveInterruptServices.c)
 *     IopInitializeReserveIrps @ 0x140A71C54 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x140A71FD4 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x140A73158 (IopReassignSystemRoot.c)
 *     PnpMarkHalDeviceNode @ 0x140A742A8 (PnpMarkHalDeviceNode.c)
 *     KitInitialize @ 0x140A747E4 (KitInitialize.c)
 *     PoInitDriverServices @ 0x140A74DE4 (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x140A759C8 (IopProtectSystemPartition.c)
 *     VslInitSystem @ 0x140A75DF0 (VslInitSystem.c)
 *     IopInitializeSessionNotifications @ 0x140A7644C (IopInitializeSessionNotifications.c)
 *     IopLoadBootHotPatches @ 0x140A76BA0 (IopLoadBootHotPatches.c)
 *     IopInitializeActiveConnectList @ 0x140A771D8 (IopInitializeActiveConnectList.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A77428 (VslRegisterIumPowerCallbacks.c)
 */

char __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  unsigned __int64 v2; // r8
  int v3; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v8; // rbx
  bool v9; // al
  __int64 v10; // rcx
  bool IsStateSeparationDevModeEnabled; // al
  int v12; // eax
  __int64 v13; // r9
  KIRQL v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONG v20; // ebx
  int SystemDlls; // eax
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v28[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-48h] BYREF
  ULONG Contexta; // [rsp+D0h] [rbp-38h] BYREF
  ULONG Context_4; // [rsp+D4h] [rbp-34h]
  __int128 v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  __int128 v35; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v36; // [rsp+100h] [rbp-8h]

  v28[0] = 0x1000000LL;
  v34 = 0LL;
  v29 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v33 = 0LL;
  LOBYTE(v22) = 0;
  DestinationString = 0LL;
  v28[1] = IoInitSystem_deviceNameBuffer;
  IoStatusBlock = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140C45A08 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140C459D8 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140C459E8 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140C45A38 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140C45A48 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140C45A18 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140C45A28 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140C45A78 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140C45A88 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140C45A58 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  IopIrpStackProfilerFlags = 0;
  v2 = __rdtsc() >> 4;
  v3 = 0;
  IopUniqueDriverObjectNumber = v2 % 0x64 + 10;
  if ( !IopLargeIrpStackLocations )
  {
    IopLargeIrpStackLocations = 14;
    v3 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v3 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)&v35);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v35),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v36),
    1819308617,
    SWORD2(v35),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v36,
    1836085833,
    SWORD1(v35),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v35),
    1936749129,
    v35,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v36),
    543974477,
    SWORD4(v35),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = ActiveProcessorCount;
  for ( ResultLength = 0; (unsigned int)v5 < v6; ResultLength = v5 )
  {
    IoInitializeProcessor(KiProcessorBlock[v5], &v35);
    v5 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_140C45BB8 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    IopInitFailCode = 1;
    return 0;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    IopIrpStackProfilerSampleSize = 2000;
    KeInitializeDpc(&IopIrpStackProfilerDpc, (PKDEFERRED_ROUTINE)IopIrpStackProfilerDpcRoutine, 0LL);
    IopIrpStackProfilerFlags |= 4u;
  }
  v8 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x58uLL);
  *v8 = 4;
  IopConfigureDiskIoAttribution();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    v9 = NtQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           IoInitSystem_valueBuffer,
           0x20u,
           &ResultLength) < 0
      || dword_140D58944 != 4
      || dword_140D5894C == 4;
    IopErrorLogDisabledThisBoot = v9;
    ObCloseHandle(KeyHandle, 0);
  }
  IopTimerLock = 0LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  KeInitializeDpc(&IopTimerDpc, (PKDEFERRED_ROUTINE)IopTimerDispatch, &IopTimerCount);
  KeInitializeTimerEx(&IopTimer, SynchronizationTimer);
  IopHardError.Parameter = 0LL;
  qword_140C45D28 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.List.Flink = 0LL;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140C45CF0 = 0LL;
  qword_140C45CE8 = (__int64)&qword_140C45CE0;
  qword_140C45CE0 = (__int64)&qword_140C45CE0;
  KeInitializeSemaphore(&Semaphore, 0, 0x7FFFFFFF);
  byte_140C45D18 = 0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.Parameter = 0LL;
  qword_140C45D68 = (__int64)&qword_140C45D60;
  qword_140C45D60 = &qword_140C45D60;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140C45D70 = 0LL;
  byte_140C45D98 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    HeadlessKernelAddLogEntry();
    return 0;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  KeInitializeEvent(&IopMountCompletionEvent, NotificationEvent, 0);
  KeInitializeEvent(&stru_140C45E20, NotificationEvent, 0);
  KeInitializeEvent(&IopLinkTrackingPortObject, SynchronizationEvent, 1u);
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 3;
    return 0;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
  {
    IopInitFailCode = 15;
    return 0;
  }
  if ( (int)IopInitializePlugPlayServices(Context, 0LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 4;
    return 0;
  }
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_140C00AC0[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0LL, (__int64)Context) )
    return 0;
  if ( !RtlIsStateSeparationEnabled()
    || (IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled(),
        LOBYTE(v10) = 1,
        IsStateSeparationDevModeEnabled) )
  {
    LOBYTE(v10) = 0;
  }
  v12 = ExpInitializeStateSeparationPhase0(v10);
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741637 )
    return 0;
  EtwInitialize(0);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
  {
    IopInitFailCode = 16;
    return 0;
  }
  if ( EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
  {
    IopInitFailCode = 11;
    return 0;
  }
  SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2848LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext, v13);
  KeInitSystem(2LL);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
    {
      IopErrorLogSessionPending = 0;
    }
    else
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v14);
  }
  WheaInitialize(Context, 0LL);
  if ( (int)IopStoreArcInformation(Context) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(Context, 1LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 5;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    &IoStatusBlockRangeTable,
    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
    0LL);
  IoStatusBlockRangeTableLock.Count = 1;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Owner = 0LL;
  IoStatusBlockRangeTableLock.Contention = 0;
  LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
  IoStatusBlockRangeTableLock.Event.Header.Size = 6;
  IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
  KitInitialize(Context);
  KseInitialize((__int64)Context, 1);
  if ( HvlPhase2Initialize((__int64)Context, v15) < 0 )
    return 0;
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Contexta = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Contexta);
  VslInitSystem(2LL, Context);
  PnpDiagnosticTraceDriverInitPhaseStart();
  IopInitializeActiveConnectList();
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v16, &v22);
  if ( ForceDumpDisabled || (_BYTE)v22 )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v18, v17);
  PsAltSystemCallRegistrationLock = 0LL;
  PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
  if ( !(unsigned int)IopInitializeBootDrivers(Context, &v29) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 6;
    return 0;
  }
  if ( (int)IopLoadBootHotPatches() < 0 )
  {
    IopInitFailCode = 21;
    return 0;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, Context, v19) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  VslRegisterIumPowerCallbacks();
  IopInitializeSystemVariableService();
  if ( !ForceDumpDisabled )
    IoInitializeLiveDump();
  IopInitializeTriageDumpData();
  if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
    IopRemoveDumpCapsuleSupport();
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v20 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v20;
  if ( SystemDlls < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 7;
    return 0;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(Context, v28) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 9;
    return 0;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 10;
    return 0;
  }
  if ( (unsigned int)Feature_Servicing_AzureVMHang__private_IsEnabled() || NtVhdBootFile )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
    {
      Object = 0LL;
      if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
      {
        PpPagePathAssign((struct _FILE_OBJECT *)Object);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      ZwClose(KeyHandle);
    }
  }
  if ( !WMIInitialize(1LL, 0LL) )
    return 0;
  WheaInitialize(Context, 1LL);
  return 1;
}
