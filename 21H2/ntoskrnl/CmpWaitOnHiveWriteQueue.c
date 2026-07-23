/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x14087279C
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  REGHANDLE v4; // rbx
  PRTL_BALANCED_NODE v5; // rax
  _RTL_BALANCED_NODE *v6; // rbx
  PRTL_BALANCED_NODE v7; // rax
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
    ExfTryToWakePushLock(a1 + 72);
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v4 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v4, &EventDescriptor, 0LL, 0, 0LL);
  v5 = KeAbPreAcquire(a2, 0LL, 0);
  v6 = v5;
  if ( v5 )
    KeAbPreWait((__int64)v5);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v6 )
  {
    v7 = KeAbPreAcquire(a2, v6, 0);
    KeAbPostReleaseEx(a2, (ULONG_PTR)v7);
  }
  v8 = EtwpRegTraceHandle;
  v14 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v14) )
    EtwWrite(v8, &v14, 0LL, 0, 0LL);
  return (unsigned int)v11;
}
