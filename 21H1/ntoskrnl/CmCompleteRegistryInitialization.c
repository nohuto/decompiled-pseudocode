/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14077A5E4
 * Callers:
 *     NtInitializeRegistry @ 0x140778D10 (NtInitializeRegistry.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     RtlLockBootStatusData @ 0x14076A5C0 (RtlLockBootStatusData.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077A43C (PopQueueBatteryStatusTimeout.c)
 *     KeInitializeVelocity @ 0x14077A538 (KeInitializeVelocity.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14077A7E4 (ExNotifyPlatformBinaryExecuted.c)
 *     PoClearTransitionMarker @ 0x14077A86C (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407885C4 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x140788804 (CmpCreateRegistryThread.c)
 *     PnpBootPhaseComplete @ 0x14078A6C4 (PnpBootPhaseComplete.c)
 *     PsBootPhaseComplete @ 0x14078FB6C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h]
  struct _KEVENT Event; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v14[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v15; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(2LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v3) = a1 == 1;
    CmpCmdInit(v3);
    CmpUnlockRegistry();
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v4 = 0, CmpForceSynchronousMachineHiveLoad) )
        v4 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v6 = CmpCreateRegistryThread(
             &Handle,
             v5,
             CmpFinishSystemHivesLoad,
             (unsigned __int64)&Event & -(__int64)(v4 != 0));
      if ( v6 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v6);
      if ( v4 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    KeInitializeVelocity();
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquirePolicyLock(v7);
    PopThermalCriticalShutdownEnabled = 1;
    if ( PopThermalCriticalShutdownInitiated )
    {
      v12 = 0;
      v15 = 0LL;
      v11 = 0xC000000400000006uLL;
      v14[0] = 1;
      v14[1] = 128;
      PopCriticalShutdownInProgress = 1;
      PopExecutePowerAction((__int64)v14, 0, &v11, 5, 1u);
    }
    PopReleasePolicyLock(v9, v8);
    PopQueueBatteryStatusTimeout();
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
