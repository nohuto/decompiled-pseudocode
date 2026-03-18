/*
 * XREFs of EmPowerPagingEnabled @ 0x140762B28
 * Callers:
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  char v3; // al
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( a1 )
  {
    dword_140C478C8 |= 0x80000000;
  }
  else
  {
    dword_140C478C8 &= ~0x80000000;
    if ( dword_140C478C8 )
    {
      v2 = 1;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      EmpPagingStatus = &Event;
    }
  }
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock(&EmpPagingLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EmpPagingLock);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}
