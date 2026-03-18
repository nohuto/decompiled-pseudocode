/*
 * XREFs of PspNotifyServerSiloTermination @ 0x140907264
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x14057B528 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x140907028 (PspGetNextMonitor.c)
 *     PspInvokeTerminateCallback @ 0x140907050 (PspInvokeTerminateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14093176C (EtwTraceJobServerSiloStateChange.c)
 */

_QWORD *__fastcall PspNotifyServerSiloTermination(__int64 a1)
{
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v4; // rsi
  __int64 *i; // rax
  __int64 **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (_DWORD *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( *v4 != 3 )
    __fastfail(5u);
  for ( i = PspGetNextMonitor(0LL); ; i = PspGetNextMonitor(v6) )
  {
    v6 = (__int64 **)i;
    if ( !i )
      break;
    if ( i[4] )
      PspInvokeTerminateCallback(a1, (__int64)i);
  }
  *v4 = 4;
  EtwTraceJobServerSiloStateChange(a1, 4LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
}
