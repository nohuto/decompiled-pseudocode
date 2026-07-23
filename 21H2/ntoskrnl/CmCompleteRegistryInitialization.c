/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14079167C
 * Callers:
 *     NtInitializeRegistry @ 0x14078D6C0 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x1403F2444 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x1403F298C (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x1403F29F4 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     RtlLockBootStatusData @ 0x14077F730 (RtlLockBootStatusData.c)
 *     CmpInitializeSystemHivesLoad @ 0x140790B44 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x140790D84 (CmpCreateRegistryThread.c)
 *     CmpCmdInit @ 0x140790E60 (CmpCmdInit.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407918C4 (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x14079194C (PoEnableCriticalShutdown.c)
 *     PoClearTransitionMarker @ 0x140791984 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 *     EtwInitialize @ 0x140798F94 (EtwInitialize.c)
 *     PnpBootPhaseComplete @ 0x1407A33F4 (PnpBootPhaseComplete.c)
 *     PsBootPhaseComplete @ 0x1407A8ACC (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  char v3; // di
  __int64 v4; // rdx
  int RegistryThread; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(2LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    CmpCmdInit(a1 == 1);
    CmpUnlockRegistry();
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v3 = 0, CmpForceSynchronousMachineHiveLoad) )
        v3 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      RegistryThread = CmpCreateRegistryThread(
                         (__int64)&Handle,
                         v4,
                         (__int64)CmpFinishSystemHivesLoad,
                         (unsigned __int64)&Event & -(__int64)(v3 != 0));
      if ( RegistryThread < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, RegistryThread);
      if ( v3 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    Feature_BamQosGrouping__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x800u;
    Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x1000u;
    Feature_SchedulerQosPreemption__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x4000u;
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PoEnableCriticalShutdown();
    NlsLocaleSectionPointer = (PVOID)1;
    ExNotifyPlatformBinaryExecuted();
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
