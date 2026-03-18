/*
 * XREFs of WheaInitializeServices @ 0x140A68924
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x1407B21C8 (WheapInitializeInUsePageOfflineNotifications.c)
 */

PVOID *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_140CF4550;
  v1 = 17LL;
  do
  {
    *(v0 - 2) = 0LL;
    *v0 = HalSystemVectorDispatchEntry;
    v0[1] = xHalPciEarlyRestore;
    v0[2] = (__int64 (*)())WheapDefaultErrSrcCreateRecord;
    v0[3] = HalSystemVectorDispatchEntry;
    v0[4] = (__int64 (*)())xHalTimerWatchdogStop;
    v0[5] = 0LL;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  qword_140CF4988 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  *(_QWORD *)&WheapDispatchPtr.Flags = &WheapDispatchPtr.Timer;
  WheapDispatchPtr.Timer = (PIO_TIMER)&WheapDispatchPtr.Timer;
  WheapDispatchPtr.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceType;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = &WheapDispatchPtr.DeviceType;
  qword_140C15DF8 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.DriverObject) = 1;
  WheapDispatchPtr.NextDevice = 0LL;
  LODWORD(WheapDispatchPtr.AttachedDevice) = 0;
  LOWORD(WheapDispatchPtr.CurrentIrp) = 1;
  BYTE2(WheapDispatchPtr.CurrentIrp) = 6;
  HIDWORD(WheapDispatchPtr.CurrentIrp) = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140C15E00 = 0LL;
  qword_140C15E18 = 0LL;
  qword_140C15DF0 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
