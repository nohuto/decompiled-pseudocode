/*
 * XREFs of EmPowerPagingEnabled @ 0x140764408
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
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
    dword_140C47748 |= 0x80000000;
  }
  else
  {
    dword_140C47748 &= ~0x80000000;
    if ( dword_140C47748 )
    {
      v2 = 1;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      EmpPagingStatus = &Event;
    }
  }
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}
