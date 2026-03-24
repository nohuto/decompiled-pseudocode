/*
 * XREFs of IoInitSystemPreDrivers @ 0x140A3EB60
 * Callers:
 *     IoInitSystem @ 0x140A66E8C (IoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC50 (ExInitializeResourceLite.c)
 *     KeReleaseSpinLock @ 0x140229C10 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     RtlInitializeGenericTableAvl @ 0x140264400 (RtlInitializeGenericTableAvl.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     ExInitializePushLock @ 0x140278EE0 (ExInitializePushLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x14027B610 (KeQueryActiveProcessorCountEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     KeInitializeSemaphore @ 0x140356600 (KeInitializeSemaphore.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     HeadlessKernelAddLogEntry @ 0x14036F610 (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A6C0 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x1403A4B20 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x1403B45E8 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403BFEE4 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x1403CC470 (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x1403CE35C (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1403CE998 (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x1403CF0B8 (HvlPhase2Initialize.c)
 *     IoInitializeLiveDump @ 0x1403CFA7C (IoInitializeLiveDump.c)
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x1403CFABC (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     IopConfigureDiskIoAttribution @ 0x1403CFEB4 (IopConfigureDiskIoAttribution.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1403FAA00 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1403FDED0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     RtlIsStateSeparationEnabled @ 0x1406B7BC0 (RtlIsStateSeparationEnabled.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     NtCreateEvent @ 0x140703CD0 (NtCreateEvent.c)
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     IoInitializeProcessor @ 0x1407962F8 (IoInitializeProcessor.c)
 *     PsLocateSystemDlls @ 0x140798AF0 (PsLocateSystemDlls.c)
 *     EtwInitialize @ 0x140798D94 (EtwInitialize.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407A948C (EtwTraceLeapSecondDataUpdate.c)
 *     SeAuditBootConfiguration @ 0x1407BC084 (SeAuditBootConfiguration.c)
 *     IopInitializeTriageDumpData @ 0x1407C9158 (IopInitializeTriageDumpData.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407CB890 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x1407D3AAC (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x140867FE8 (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x1408A0FA0 (PpPagePathAssign.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x140936544 (EtwTraceLeapSecondDataParseFailure.c)
 *     BapdRecordFirmwareBootStats @ 0x140999260 (BapdRecordFirmwareBootStats.c)
 *     PfSnBeginBootPhase @ 0x14099B284 (PfSnBeginBootPhase.c)
 *     ExInitializeSystemLookasideList @ 0x14099C6E4 (ExInitializeSystemLookasideList.c)
 *     KseInitialize @ 0x140A3C89C (KseInitialize.c)
 *     WMIInitialize @ 0x140A3CB54 (WMIInitialize.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A4117C (BootApplicationPersistentDataProcess.c)
 *     SmInitSystem @ 0x140A4B43C (SmInitSystem.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     IopCreateRootDirectories @ 0x140A5B394 (IopCreateRootDirectories.c)
 *     IopStoreArcInformation @ 0x140A5D274 (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6CE38 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializePassiveInterruptServices @ 0x140A6D460 (IopInitializePassiveInterruptServices.c)
 *     IopInitializeReserveIrps @ 0x140A6EBD4 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x140A6EF54 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x140A700D8 (IopReassignSystemRoot.c)
 *     PnpMarkHalDeviceNode @ 0x140A71228 (PnpMarkHalDeviceNode.c)
 *     KitInitialize @ 0x140A71764 (KitInitialize.c)
 *     PoInitDriverServices @ 0x140A71D64 (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x140A72948 (IopProtectSystemPartition.c)
 *     VslInitSystem @ 0x140A72D70 (VslInitSystem.c)
 *     IopInitializeSessionNotifications @ 0x140A733CC (IopInitializeSessionNotifications.c)
 *     IopLoadBootHotPatches @ 0x140A73B20 (IopLoadBootHotPatches.c)
 *     IopInitializeActiveConnectList @ 0x140A740E4 (IopInitializeActiveConnectList.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A74328 (VslRegisterIumPowerCallbacks.c)
 */

char __fastcall IoInitSystemPreDrivers(__int64 a1)
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
  size_t Size; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v29[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Context; // [rsp+C0h] [rbp-48h] BYREF
  ULONG Context_4; // [rsp+C4h] [rbp-44h]
  __int128 v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v36; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v37; // [rsp+100h] [rbp-8h]

  v29[0] = 0x1000000LL;
  v34 = 0LL;
  v30 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v33 = 0LL;
  LOBYTE(v23) = 0;
  DestinationString = 0LL;
  v29[1] = IoInitSystem_deviceNameBuffer;
  IoStatusBlock = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140C45A38 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140C45A48 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140C45A18 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140C45A28 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140C459F8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140C45A08 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140C45D28 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140C45D38 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140C45D08 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140C45D18 = (__int64)&IopPerfIoTrackingListHead;
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
  IopQueryProcessorInitValues((__int64)&v36);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v36),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v37),
    1819308617,
    SWORD2(v36),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v37,
    1836085833,
    SWORD1(v36),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v36),
    1936749129,
    v36,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v37),
    543974477,
    SWORD4(v36),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = ActiveProcessorCount;
  for ( LODWORD(v25) = 0; (unsigned int)v5 < v6; LODWORD(v25) = v5 )
  {
    IoInitializeProcessor(KiProcessorBlock[v5], &v36);
    v5 = (unsigned int)(v25 + 1);
  }
  IopErrorLogLock = 0LL;
  qword_140C45BD8 = (__int64)&IopErrorLogListHead;
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
    LODWORD(Size) = 32;
    v9 = (int)NtQueryValueKey(
                KeyHandle,
                (unsigned __int64)&DestinationString,
                2u,
                (unsigned __int64)IoInitSystem_valueBuffer,
                Size,
                (unsigned __int64)&v25) < 0
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
  qword_140C45DE8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.List.Flink = 0LL;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140C45D70 = 0LL;
  qword_140C45D68 = (__int64)&qword_140C45D60;
  qword_140C45D60 = (__int64)&qword_140C45D60;
  KeInitializeSemaphore(&Semaphore, 0, 0x7FFFFFFF);
  byte_140C45D98 = 0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.Parameter = 0LL;
  qword_140C45F68 = (__int64)&qword_140C45F60;
  qword_140C45F60 = &qword_140C45F60;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140C45F70 = 0LL;
  byte_140C45F98 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (int)NtCreateEvent((unsigned __int64)&KeyHandle, 2031619LL, (int)&ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    HeadlessKernelAddLogEntry();
    return 0;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  KeInitializeEvent(&IopMountCompletionEvent, NotificationEvent, 0);
  KeInitializeEvent(&stru_140C45EE0, NotificationEvent, 0);
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
  if ( (int)IopInitializePlugPlayServices(a1, 0LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 4;
    return 0;
  }
  KseInitialize(a1, 0);
  PoInitDriverServices();
  off_140C00AC0[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0LL, a1) )
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
  SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 2848LL));
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
  WheaInitialize(a1, 0LL);
  if ( (int)IopStoreArcInformation(a1) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(a1, 1LL) < 0 )
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
  KitInitialize(a1);
  KseInitialize(a1, 1);
  if ( HvlPhase2Initialize(a1, v15) < 0 )
    return 0;
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Context);
  VslInitSystem(2LL, a1);
  PnpDiagnosticTraceDriverInitPhaseStart();
  IopInitializeActiveConnectList();
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v16, &v23);
  if ( ForceDumpDisabled || (_BYTE)v23 )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v18, v17);
  PsAltSystemCallRegistrationLock = 0LL;
  PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
  if ( !(unsigned int)IopInitializeBootDrivers(a1, &v30) )
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
  if ( !(unsigned __int8)PoInitSystem(2LL, a1, v19) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  VslRegisterIumPowerCallbacks();
  IopInitializeSystemVariableService();
  if ( !ForceDumpDisabled )
    IoInitializeLiveDump();
  IopInitializeTriageDumpData();
  if ( (int)IopInitCrashDumpDuringSysInit(a1) >= 0 )
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
  if ( !(unsigned __int8)IopReassignSystemRoot(a1, v29) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 9;
    return 0;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(a1) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 10;
    return 0;
  }
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
  if ( !WMIInitialize(1LL, 0LL) )
    return 0;
  WheaInitialize(a1, 1LL);
  return 1;
}
