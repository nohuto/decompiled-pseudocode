/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x140958E94
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140958CBC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, char a3)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int8 v10; // cf
  __int64 v11; // rbx
  PVOID *i; // rbx

  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  for ( i = (PVOID *)WheapInUsePageOfflineNotifyList; i != &WheapInUsePageOfflineNotifyList; i = (PVOID *)*i )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    ((void (__fastcall *)(__int64, __int64, __int64, PVOID))i[2])(a1, v8, v9, i[3]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0LL;
}
