/*
 * XREFs of CmCompleteRegistryInitialization @ 0x1407909DC
 * Callers:
 *     NtInitializeRegistry @ 0x140789720 (NtInitializeRegistry.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     PopExecutePowerAction @ 0x140771228 (PopExecutePowerAction.c)
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078AE4C (PopQueueBatteryStatusTimeout.c)
 *     CmpInitializeSystemHivesLoad @ 0x14078FEA4 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x1407900E4 (CmpCreateRegistryThread.c)
 *     CmpCmdInit @ 0x1407901C0 (CmpCmdInit.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140790BDC (ExNotifyPlatformBinaryExecuted.c)
 *     PoClearTransitionMarker @ 0x140790C64 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 *     KeInitializeVelocity @ 0x1407939D0 (KeInitializeVelocity.c)
 *     PnpBootPhaseComplete @ 0x140798CD4 (PnpBootPhaseComplete.c)
 *     PsBootPhaseComplete @ 0x14079E80C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  char v3; // di
  __int64 v4; // rdx
  int RegistryThread; // eax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+38h] [rbp-38h]
  struct _KEVENT Event; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v13[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v14; // [rsp+60h] [rbp-10h]
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
    KeInitializeVelocity();
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquirePolicyLock(v6);
    PopThermalCriticalShutdownEnabled = 1;
    if ( PopThermalCriticalShutdownInitiated )
    {
      v11 = 0;
      v14 = 0LL;
      v10 = 0xC000000400000006uLL;
      v13[0] = 1;
      v13[1] = 128;
      PopCriticalShutdownInProgress = 1;
      PopExecutePowerAction((__int64)v13, 0, &v10, 5, 1u);
    }
    PopReleasePolicyLock(v8, v7);
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
