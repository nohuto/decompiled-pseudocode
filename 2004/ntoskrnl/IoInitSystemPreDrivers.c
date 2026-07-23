/*
 * XREFs of IoInitSystemPreDrivers @ 0x140A3AF4C
 * Callers:
 *     IoInitSystem @ 0x140A426FC (IoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140202100 (RtlInitializeGenericTableAvl.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x140322B60 (KeReleaseSpinLock.c)
 *     HeadlessKernelAddLogEntry @ 0x14036B9C8 (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x140378790 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x1403A1D90 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x1403B9924 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403BD210 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x1403C8E60 (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x1403CAD60 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1403CB388 (IopInitializeSystemVariableService.c)
 *     VslpIumPhase4Initialize @ 0x1403CB7CC (VslpIumPhase4Initialize.c)
 *     HvlPhase2Initialize @ 0x1403CBAA8 (HvlPhase2Initialize.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1403F3C20 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     NtCreateEvent @ 0x140679490 (NtCreateEvent.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     ExSubscribeWnfStateChange @ 0x1407006B0 (ExSubscribeWnfStateChange.c)
 *     RtlIsStateSeparationEnabled @ 0x1407068F0 (RtlIsStateSeparationEnabled.c)
 *     PoRegisterPowerSettingCallback @ 0x140711A90 (PoRegisterPowerSettingCallback.c)
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x1407760B0 (EtwWriteStartScenario.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IoInitializeProcessor @ 0x14077E838 (IoInitializeProcessor.c)
 *     PsLocateSystemDlls @ 0x1407866BC (PsLocateSystemDlls.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140792B48 (EtwTraceLeapSecondDataUpdate.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 *     SeAuditBootConfiguration @ 0x1407A6358 (SeAuditBootConfiguration.c)
 *     IopInitializeTriageDumpData @ 0x1407B6668 (IopInitializeTriageDumpData.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407B8D10 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x1407C0E2C (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1408649AC (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x14089DEA0 (PpPagePathAssign.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x140932F44 (EtwTraceLeapSecondDataParseFailure.c)
 *     PfSnBeginBootPhase @ 0x140997CC4 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140997F00 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140998D84 (ExInitializeSystemLookasideList.c)
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 *     WMIInitialize @ 0x140A38FF0 (WMIInitialize.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A42FD0 (BootApplicationPersistentDataProcess.c)
 *     IopStoreArcInformation @ 0x140A4D76C (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 *     SmInitSystem @ 0x140A67B2C (SmInitSystem.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A69A18 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializePassiveInterruptServices @ 0x140A69BD4 (IopInitializePassiveInterruptServices.c)
 *     IopInitializeReserveIrps @ 0x140A6B348 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x140A6B6F0 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x140A6C878 (IopReassignSystemRoot.c)
 *     PnpMarkHalDeviceNode @ 0x140A6DB88 (PnpMarkHalDeviceNode.c)
 *     KitpInitAitSampleRate @ 0x140A6E03C (KitpInitAitSampleRate.c)
 *     PoInitDriverServices @ 0x140A6E604 (PoInitDriverServices.c)
 *     IopCreateRootDirectories @ 0x140A6ED4C (IopCreateRootDirectories.c)
 *     IopProtectSystemPartition @ 0x140A6F4C4 (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x140A6FF9C (IopInitializeSessionNotifications.c)
 *     IopLoadBootHotPatches @ 0x140A70768 (IopLoadBootHotPatches.c)
 */

char __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  unsigned __int64 v2; // r8
  int v3; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  KIRQL v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG v18; // ebx
  int SystemDlls; // eax
  bool IsStateSeparationDevModeEnabled; // al
  __int64 OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v28[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Contexta; // [rsp+C0h] [rbp-48h] BYREF
  ULONG Context_4; // [rsp+C4h] [rbp-44h]
  __int128 v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D8h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v36; // [rsp+100h] [rbp-8h]

  v28[0] = 0x1000000LL;
  v33 = 0LL;
  v29 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v32 = 0LL;
  LOBYTE(OutputBuffer) = 0;
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
  qword_140C459B8 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140C459C8 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140C45998 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140C459A8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140C459F8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140C45A08 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140C459D8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140C459E8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140C45A28 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140C45A38 = (__int64)&IopPerfIoTrackingListHead;
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
  for ( ResultLength[0] = 0; (unsigned int)v5 < v6; ResultLength[0] = v5 )
  {
    IoInitializeProcessor(KiProcessorBlock[v5], &v35);
    v5 = ResultLength[0] + 1;
  }
  IopErrorLogLock = 0LL;
  qword_140C45A78 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( (unsigned __int8)IopInitializeReserveIrps() )
  {
    if ( (IopIrpStackProfilerFlags & 3) != 0 )
    {
      IopIrpStackProfilerMinSizeThreshold = 400;
      IopIrpStackProfilerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopIrpStackProfilerDpcRoutine;
      IopIrpStackProfilerFlags |= 4u;
      IopIrpStackProfilerSampleSize = 2000;
      IopIrpStackProfilerDpc.TargetInfoAsUlong = 275;
      IopIrpStackProfilerDpc.DeferredContext = 0LL;
      IopIrpStackProfilerDpc.DpcData = 0LL;
      IopIrpStackProfilerDpc.ProcessorHistory = 0LL;
    }
    v7 = IopRevocationExtension;
    memset(IopRevocationExtension, 0, 0x58uLL);
    *v7 = 4;
    v8 = IopDiskIoAttributionBaseIoSize;
    if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
    {
      v8 = 0x400000;
      IopDiskIoAttributionBaseIoSize = 0x400000;
    }
    if ( v8 <= 0x1000 )
      IopDiskIoAttributionBaseIoSize = 4096;
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
      IopErrorLogDisabledThisBoot = NtQueryValueKey(
                                      KeyHandle,
                                      &DestinationString,
                                      KeyValuePartialInformation,
                                      IoInitSystem_valueBuffer,
                                      0x20u,
                                      ResultLength) < 0
                                 || dword_140D56944 != 4
                                 || dword_140D5694C == 4;
      ObCloseHandle(KeyHandle, 0);
    }
    *(_QWORD *)&IopTimer.Header.Lock = 9LL;
    IopTimerQueueHead.Blink = &IopTimerQueueHead;
    IopTimerQueueHead.Flink = &IopTimerQueueHead;
    IopTimerLock = 0LL;
    IopTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopTimerDispatch;
    IopTimerDpc.DeferredContext = &IopTimerCount;
    IopTimer.Header.WaitListHead.Blink = &IopTimer.Header.WaitListHead;
    IopTimer.Header.WaitListHead.Flink = &IopTimer.Header.WaitListHead;
    qword_140C45C28 = (__int64)&IopDeadIrps;
    IopDeadIrps = (__int64)&IopDeadIrps;
    IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
    qword_140C45D28 = (__int64)&qword_140C45D20;
    qword_140C45D20 = (__int64)&qword_140C45D20;
    qword_140C45D48 = (__int64)&qword_140C45D40;
    qword_140C45D40 = (__int64)&qword_140C45D40;
    IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
    qword_140C45CA8 = (__int64)&qword_140C45CA0;
    qword_140C45CA0 = &qword_140C45CA0;
    IopTimerDpc.TargetInfoAsUlong = 275;
    IopTimerDpc.DpcData = 0LL;
    IopTimerDpc.ProcessorHistory = 0LL;
    IopTimer.DueTime.QuadPart = 0LL;
    IopTimer.Period = 0;
    IopTimer.Processor = 0;
    IopHardError.Parameter = 0LL;
    IopHardError.List.Flink = 0LL;
    qword_140C45D30 = 0LL;
    byte_140C45D38 = 5;
    byte_140C45D3A = 8;
    dword_140C45D3C = 0;
    dword_140C45D50 = 0x7FFFFFFF;
    byte_140C45D58 = 0;
    IopKeepAliveTracker.Parameter = 0LL;
    IopKeepAliveTracker.List.Flink = 0LL;
    qword_140C45CB0 = 0LL;
    byte_140C45CD8 = 0;
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
    }
    else
    {
      Object = 0LL;
      ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      IopLinkTrackingServiceEvent = (__int64)Object;
      IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
      IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
      stru_140C45DA0.Header.WaitListHead.Blink = &stru_140C45DA0.Header.WaitListHead;
      stru_140C45DA0.Header.WaitListHead.Flink = &stru_140C45DA0.Header.WaitListHead;
      IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
      IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
      LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
      IopMountCompletionEvent.Header.Size = 6;
      IopMountCompletionEvent.Header.SignalState = 0;
      LOWORD(stru_140C45DA0.Header.Lock) = 0;
      stru_140C45DA0.Header.Size = 6;
      stru_140C45DA0.Header.SignalState = 0;
      LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
      IopLinkTrackingPortObject.Header.Size = 6;
      IopLinkTrackingPortObject.Header.SignalState = 1;
      ObCloseHandle(KeyHandle, 0);
      if ( (unsigned __int8)IopCreateRootDirectories() )
      {
        if ( (int)IopInitializeSessionNotifications() < 0 )
        {
          IopInitFailCode = 15;
        }
        else if ( (int)IopInitializePlugPlayServices(Context, 0LL) < 0 )
        {
          HeadlessKernelAddLogEntry();
          IopInitFailCode = 4;
        }
        else
        {
          KseInitialize((__int64)Context, 0);
          PoInitDriverServices();
          off_140C00AC0[0]();
          PnpMarkHalDeviceNode();
          if ( WMIInitialize(0LL, (__int64)Context) )
          {
            if ( !RtlIsStateSeparationEnabled()
              || (IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled(),
                  LOBYTE(v9) = 1,
                  IsStateSeparationDevModeEnabled) )
            {
              LOBYTE(v9) = 0;
            }
            v10 = ExpInitializeStateSeparationPhase0(v9);
            if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741637 )
            {
              EtwInitialize(0);
              if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
              {
                IopInitFailCode = 16;
              }
              else if ( EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
              {
                IopInitFailCode = 11;
              }
              else
              {
                SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2848LL));
                BootApplicationPersistentDataProcess(1LL);
                BapdRecordFirmwareBootStats();
                KdInitialize(2LL, 0LL, &KdpContext, v11);
                TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C01A70, 0LL, 0LL);
                if ( !IopErrorLogDisabledThisBoot )
                {
                  v12 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
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
                  KeReleaseSpinLock(&IopErrorLogLock, v12);
                }
                WheaInitialize(Context, 0LL);
                if ( (int)IopStoreArcInformation(Context) >= 0 )
                {
                  if ( (int)IopInitializePlugPlayServices(Context, 1LL) < 0 )
                  {
                    HeadlessKernelAddLogEntry();
                    IopInitFailCode = 5;
                  }
                  else
                  {
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
                    KitpInitAitSampleRate(Context);
                    if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
                      KitEtwHandle = 0LL;
                    KseInitialize((__int64)Context, 1);
                    if ( HvlPhase2Initialize((__int64)Context, v13) >= 0 )
                    {
                      Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
                      Contexta = Context_4;
                      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Contexta);
                      VslpIumPhase4Initialize();
                      if ( PnpEtwHandle )
                        EtwWriteStartScenario(
                          (ULONG_PTR *)PnpEtwHandle,
                          &KMPnPEvt_DriverInitPhase_Start,
                          &PnpDriverInitPhaseActivityId,
                          0,
                          0LL);
                      LOWORD(ActiveConnectListLock.Header.Lock) = 1;
                      qword_140C45368 = (__int64)&ActiveConnectList;
                      ActiveConnectList = (__int64)&ActiveConnectList;
                      ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
                      ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
                      ActiveConnectListLock.Header.Size = 6;
                      ActiveConnectListLock.Header.SignalState = 1;
                      if ( (int)IopInitializePassiveInterruptServices() >= 0 )
                      {
                        SecureDump_PrepareForInit(v14, &OutputBuffer);
                        if ( ForceDumpDisabled || (_BYTE)OutputBuffer )
                          CapsuleDumpAllowed = 0;
                        else
                          IopInitDumpCapsuleSupport();
                        if ( ExLeapSecondDataLastParseResult )
                          EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
                        EtwTraceLeapSecondDataUpdate(
                          0,
                          *(unsigned __int8 *)ExLeapSecondData,
                          *((_DWORD *)ExLeapSecondData + 1),
                          0);
                        IopInitializeIoRate(v16, v15);
                        PsAltSystemCallRegistrationLock = 0LL;
                        PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
                        if ( (unsigned int)IopInitializeBootDrivers(Context, &v29) )
                        {
                          if ( (int)IopLoadBootHotPatches() < 0 )
                          {
                            IopInitFailCode = 21;
                          }
                          else
                          {
                            if ( !(unsigned __int8)PoInitSystem(2LL, Context, v17) )
                              KeBugCheck(0xA0u);
                            SmInitSystem(1LL);
                            EtwInitialize(1u);
                            LOBYTE(OutputBuffer) = 0;
                            if ( VslVsmEnabled
                              && NtPowerInformation(PlatformInformation, 0LL, 0, &OutputBuffer, 1u) >= 0
                              && (_BYTE)OutputBuffer )
                            {
                              ExSubscribeWnfStateChange(
                                (__int64)&VslpIumCsWnfSubscription,
                                (__int64)&WNF_PO_SCENARIO_CHANGE,
                                1,
                                0,
                                (__int64)VslpConnectedStandbyWnfCallback,
                                0LL);
                              PoRegisterPowerSettingCallback(
                                0LL,
                                &GUID_LOW_POWER_EPOCH,
                                (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
                                0LL,
                                0LL);
                              PoRegisterPowerSettingCallback(
                                0LL,
                                &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                                (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
                                0LL,
                                0LL);
                            }
                            IopInitializeSystemVariableService();
                            if ( !ForceDumpDisabled )
                            {
                              EtwRegister(
                                &LiveDumpProvGuid,
                                (PETWENABLECALLBACK)IopLiveDumpTracingControlCallback,
                                0LL,
                                &IopLiveDumpEtwRegHandle);
                              TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                (ULONGLONG *)&dword_140C04498,
                                0LL,
                                0LL);
                            }
                            IopInitializeTriageDumpData();
                            if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
                              IopRemoveDumpCapsuleSupport();
                            if ( !RtlIsStateSeparationEnabled() )
                              PpLastGoodDoBootProcessing();
                            v18 = NtGlobalFlag;
                            NtGlobalFlag |= 0x40000u;
                            SystemDlls = PsLocateSystemDlls();
                            NtGlobalFlag = v18;
                            if ( SystemDlls < 0 )
                            {
                              HeadlessKernelAddLogEntry();
                              IopInitFailCode = 7;
                            }
                            else
                            {
                              PfSnBeginBootPhase(0);
                              if ( (unsigned __int8)IopReassignSystemRoot(Context, v28) )
                              {
                                if ( (unsigned __int8)IopProtectSystemPartition(Context) )
                                {
                                  if ( NtVhdBootFile )
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
                                  if ( WMIInitialize(1LL, 0LL) )
                                  {
                                    WheaInitialize(Context, 1LL);
                                    return 1;
                                  }
                                }
                                else
                                {
                                  HeadlessKernelAddLogEntry();
                                  IopInitFailCode = 10;
                                }
                              }
                              else
                              {
                                HeadlessKernelAddLogEntry();
                                IopInitFailCode = 9;
                              }
                            }
                          }
                        }
                        else
                        {
                          HeadlessKernelAddLogEntry();
                          IopInitFailCode = 6;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        HeadlessKernelAddLogEntry();
        IopInitFailCode = 3;
      }
    }
  }
  else
  {
    IopInitFailCode = 1;
  }
  return 0;
}
