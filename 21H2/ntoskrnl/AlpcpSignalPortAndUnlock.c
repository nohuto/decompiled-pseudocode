/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x1405F27DC
 * Callers:
 *     AlpcpDisconnectPort @ 0x1406D1E5C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x14022AED0 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  _QWORD *v6; // rdi
  volatile signed __int64 *v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return AlpcpQueueIoCompletionPort(a1, 0, 1, 0);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v3 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v3);
    return KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1, 1, v4, 0);
  }
  else
  {
    v6 = (_QWORD *)(a1 + 232);
    if ( (_QWORD *)*v6 == v6 )
      goto LABEL_21;
    v7 = (volatile signed __int64 *)(a1 + 224);
    ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
    v8 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = v8 - 167;
      *(v8 - 1) = 0LL;
      v10 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    if ( !v9 )
    {
LABEL_21:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      return KeAbPostRelease(a1 + 352);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      return KeReleaseSemaphoreEx((__int64)(v9 + 145), 1, 1, v5, 2);
    }
  }
}
