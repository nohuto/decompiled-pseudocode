/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140874DEC
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407946B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  REGHANDLE v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  ULONG_PTR v9; // rax
  REGHANDLE v10; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v16; // [rsp+68h] [rbp-18h] BYREF

  memset(&Event, 0, sizeof(Event));
  v13 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v14 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v4 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v4, &EventDescriptor, 0LL, 0, 0LL);
  v5 = KeAbPreAcquire(a2, 0LL, 0LL);
  v8 = v5;
  if ( v5 )
    KeAbPreWait(v5, v6, v7);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v8 )
  {
    v9 = KeAbPreAcquire(a2, v8, 0LL);
    KeAbPostReleaseEx(a2, v9);
  }
  v10 = EtwpRegTraceHandle;
  v16 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v16) )
    EtwWrite(v10, &v16, 0LL, 0, 0LL);
  return (unsigned int)v13;
}
