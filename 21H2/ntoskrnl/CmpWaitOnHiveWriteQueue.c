/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140919170
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 * Callees:
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  REGHANDLE v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  REGHANDLE v14; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-18h] BYREF

  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v18 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v5, v4, v6, v7);
  v8 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v8, &EventDescriptor, 0LL, 0, 0LL);
  v9 = (__int64 *)KeAbPreAcquire(a2, 0LL);
  v12 = (__int64)v9;
  if ( v9 )
    KeAbPreWait(v9, v10, v11);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v12 )
  {
    v13 = KeAbPreAcquire(a2, v12);
    KeAbPostReleaseEx(a2, v13);
  }
  v14 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v14, &EventDescriptor, 0LL, 0, 0LL);
  return (unsigned int)v17;
}
