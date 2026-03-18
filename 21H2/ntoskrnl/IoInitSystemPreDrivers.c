/*
 * XREFs of IoInitSystemPreDrivers @ 0x140AFE7A0
 * Callers:
 *     IoInitSystem @ 0x140B21B40 (IoInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     KeInitializeSemaphore @ 0x1402A4940 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     HeadlessKernelAddLogEntry @ 0x1402D26C0 (HeadlessKernelAddLogEntry.c)
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x1403CE444 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403CF960 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x1403DB720 (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x1403DD52C (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1403DDA6C (IopInitializeSystemVariableService.c)
 *     McGenEventRegister_EtwRegister @ 0x1403DDD24 (McGenEventRegister_EtwRegister.c)
 *     HvlPhase2Initialize @ 0x1403DE4F0 (HvlPhase2Initialize.c)
 *     IoInitializeLiveDump @ 0x1403DED54 (IoInitializeLiveDump.c)
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x1403DED94 (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1403DF0B8 (SecureDump_ProvisionCrashDumpKey.c)
 *     IopConfigureDiskIoAttribution @ 0x1403DF34C (IopConfigureDiskIoAttribution.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140555FAC (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140555FF0 (McTemplateK0q_EtwWriteTransfer.c)
 *     IopInitializeBugCheckDriverData @ 0x140658604 (IopInitializeBugCheckDriverData.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     IoInitializeProcessor @ 0x14082552C (IoInitializeProcessor.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 *     PsLocateSystemDlls @ 0x1408455C8 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x1408476A0 (SeAuditBootConfiguration.c)
 *     PpPagePathAssign @ 0x14084BB80 (PpPagePathAssign.c)
 *     IopInitializeTriageDumpData @ 0x1408555E0 (IopInitializeTriageDumpData.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1408581D8 (EtwTraceLeapSecondDataUpdate.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14085B6D0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     IopQueryProcessorInitValues @ 0x140863C68 (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x140865320 (CmIsStateSeparationDevModeEnabled.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x1409338DC (IopTraceCrashDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14093D200 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1409E29E8 (EtwTraceLeapSecondDataParseFailure.c)
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140A5464C (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140A57C10 (ExInitializeSystemLookasideList.c)
 *     PsInitializeSyscallProviders @ 0x140AF2E54 (PsInitializeSyscallProviders.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140AF71F0 (IopInitCrashDumpDuringSysInit.c)
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 *     WMIInitialize @ 0x140AFFEF4 (WMIInitialize.c)
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     MmRegisterEtwProvider @ 0x140B01800 (MmRegisterEtwProvider.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     BootApplicationPersistentDataProcess @ 0x140B1C0FC (BootApplicationPersistentDataProcess.c)
 *     SmInitSystem @ 0x140B255E4 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x140B27838 (IopInitializePassiveInterruptServices.c)
 *     IopCreateRootDirectories @ 0x140B2931C (IopCreateRootDirectories.c)
 *     IopInitializeReserveIrps @ 0x140B2AC4C (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x140B2AE28 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x140B2BC5C (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140B2CF90 (IopStoreArcInformation.c)
 *     PnpMarkHalDeviceNode @ 0x140B2D6B4 (PnpMarkHalDeviceNode.c)
 *     PoInitDriverServices @ 0x140B2D9E4 (PoInitDriverServices.c)
 *     KitInitialize @ 0x140B2DD5C (KitInitialize.c)
 *     VslInitSystem @ 0x140B2E564 (VslInitSystem.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 *     IopProtectSystemPartition @ 0x140B2F684 (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x140B3059C (IopInitializeSessionNotifications.c)
 *     AstInitialize @ 0x140B30C68 (AstInitialize.c)
 *     IopInitializeActiveConnectList @ 0x140B314B4 (IopInitializeActiveConnectList.c)
 *     VslRegisterIumPowerCallbacks @ 0x140B31688 (VslRegisterIumPowerCallbacks.c)
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
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  KIRQL v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  int v24; // edx
  ULONG v25; // ebx
  int SystemDlls; // eax
  __int64 v27; // r8
  size_t Size; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Context; // [rsp+C0h] [rbp-48h] BYREF
  ULONG Context_4; // [rsp+C4h] [rbp-44h]
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D8h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v43; // [rsp+100h] [rbp-8h]

  v35[0] = 0x1000000LL;
  v40 = 0LL;
  v36 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v39 = 0LL;
  LOBYTE(v29) = 0;
  DestinationString = 0LL;
  v35[1] = IoInitSystem_deviceNameBuffer;
  IoStatusBlock = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140C46F38 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140C46F48 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140C46F18 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140C46F28 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140C46F78 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140C46F88 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140C46F58 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140C46F68 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140C46FA8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140C46FB8 = (__int64)&IopPerfIoTrackingListHead;
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
  IopQueryProcessorInitValues((__int64)&v42);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v42),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v43),
    1819308617,
    SWORD2(v42),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v43,
    1836085833,
    SWORD1(v42),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v42),
    1936749129,
    v42,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v43),
    543974477,
    SWORD4(v42),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = ActiveProcessorCount;
  for ( LODWORD(v31) = 0; (unsigned int)v5 < v6; LODWORD(v31) = v5 )
  {
    IoInitializeProcessor(KiProcessorBlock[v5], &v42);
    v5 = (unsigned int)(v31 + 1);
  }
  IopErrorLogLock = 0LL;
  qword_140C46FF8 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    LODWORD(IopInitFailCode) = 1;
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
                IoInitSystem_valueBuffer,
                Size,
                (unsigned int *)&v31) < 0
      || dword_140D688C4 != 4
      || dword_140D688CC == 4;
    IopErrorLogDisabledThisBoot = v9;
    ObCloseHandle(KeyHandle, 0);
  }
  IopTimerLock = 0LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  KeInitializeDpc(&IopTimerDpc, (PKDEFERRED_ROUTINE)IopTimerDispatch, &IopTimerCount);
  KeInitializeTimerEx(&IopTimer, SynchronizationTimer);
  IopHardError.Parameter = 0LL;
  qword_140C471A8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.List.Flink = 0LL;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140C472B0 = 0LL;
  qword_140C472A8 = (__int64)&qword_140C472A0;
  qword_140C472A0 = (__int64)&qword_140C472A0;
  KeInitializeSemaphore(&SystemArgument1, 0, 0x7FFFFFFF);
  byte_140C472D8 = 0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.Parameter = 0LL;
  qword_140C47228 = (__int64)&qword_140C47220;
  qword_140C47220 = &qword_140C47220;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140C47230 = 0LL;
  byte_140C47258 = 0;
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
  KeInitializeEvent(&stru_140C47320, NotificationEvent, 0);
  KeInitializeEvent(&IopLinkTrackingPortObject, SynchronizationEvent, 1u);
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 3;
    return 0;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
  {
    LODWORD(IopInitFailCode) = 15;
    return 0;
  }
  if ( (int)IopInitializePlugPlayServices(a1, 0LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return 0;
  }
  KseInitialize(a1, 0LL);
  PoInitDriverServices();
  off_140C02130[0]();
  PnpMarkHalDeviceNode();
  if ( !(unsigned __int8)WMIInitialize(0LL, a1) )
    return 0;
  IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
  LOBYTE(v11) = RtlIsStateSeparationEnabled();
  LOBYTE(v12) = IsStateSeparationDevModeEnabled;
  v13 = ExpInitializeStateSeparationPhase0(v11, v12);
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741637 )
    return 0;
  if ( (int)AstInitialize() < 0 )
  {
    LODWORD(IopInitFailCode) = 17;
    return 0;
  }
  EtwInitialize(1u, a1);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
  {
    LODWORD(IopInitFailCode) = 16;
    return 0;
  }
  if ( McGenEventRegister_EtwRegister((const GUID *)IoMgrProvider, v14, IoMgrProvider_Context, IoMgrProvider_Context) < 0 )
  {
    LODWORD(IopInitFailCode) = 11;
    return 0;
  }
  if ( (int)MmRegisterEtwProvider() < 0 )
  {
    LODWORD(IopInitFailCode) = 22;
    return 0;
  }
  IopInitializeDumpPolicySettings(1);
  SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 2880LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext, v15);
  KeInitSystem(2LL);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
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
    KeReleaseSpinLock(&IopErrorLogLock, v17);
  }
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v16, 0);
  WheaInitialize(a1, 0LL);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
  if ( (int)IopStoreArcInformation(a1) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(a1, 1LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 5;
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
  KseInitialize(a1, 1LL);
  if ( HvlPhase2Initialize(a1, v18) < 0 )
    return 0;
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Context);
  PsInitializeSyscallProviders();
  VslInitSystem(2LL, a1);
  PnpDiagnosticTraceDriverInitPhaseStart();
  IopInitializeActiveConnectList();
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v19, &v29);
  if ( ForceDumpDisabled || (_BYTE)v29 || !AllowCrashDump )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v21, v20);
  PsAltSystemCallRegistrationLock = 0LL;
  PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
  if ( !(unsigned int)IopInitializeBootDrivers(a1, &v36) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 6;
    return 0;
  }
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
  v22 = MmRegisterHotPatches(a1);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
  if ( v22 < 0 )
  {
    LODWORD(IopInitFailCode) = 21;
    return 0;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, a1, v23) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(2u, a1);
  VslRegisterIumPowerCallbacks();
  IopInitializeSystemVariableService();
  SecureDump_ProvisionCrashDumpKey();
  if ( !ForceDumpDisabled )
  {
    IoInitializeLiveDump();
    if ( !AllowLiveDump )
      IopLiveDumpTraceDumpDisabledOnBoot();
  }
  IopInitializeBugCheckDriverData();
  IopInitializeTriageDumpData();
  if ( (int)IopInitCrashDumpDuringSysInit(a1, v24) < 0 )
  {
    if ( !AllowCrashDump )
      IopTraceCrashDumpDisabledOnBoot();
  }
  else
  {
    IopRemoveDumpCapsuleSupport();
  }
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v25 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v25;
  if ( SystemDlls < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 7;
    return 0;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(a1, v35) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 9;
    return 0;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(a1) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 10;
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
      PpPagePathAssign(Object);
      ObfDereferenceObject(Object);
    }
    ZwClose(KeyHandle);
  }
  if ( !(unsigned __int8)WMIInitialize(1LL, 0LL) )
    return 0;
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v27, 1);
  WheaInitialize(a1, 1LL);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
  return 1;
}
