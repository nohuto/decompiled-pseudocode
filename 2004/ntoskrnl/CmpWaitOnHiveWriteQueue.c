/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x14086F29C
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  REGHANDLE v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  ULONG_PTR v7; // rax
  REGHANDLE v8; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v14; // [rsp+68h] [rbp-18h] BYREF

  memset(&Event, 0, sizeof(Event));
  v11 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v4 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v4, &EventDescriptor, 0LL, 0, 0LL);
  v5 = KeAbPreAcquire(a2, 0LL, 0);
  v6 = v5;
  if ( v5 )
    KeAbPreWait(v5);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v6 )
  {
    v7 = KeAbPreAcquire(a2, v6, 0);
    KeAbPostReleaseEx(a2, v7);
  }
  v8 = EtwpRegTraceHandle;
  v14 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v14) )
    EtwWrite(v8, &v14, 0LL, 0, 0LL);
  return (unsigned int)v11;
}
