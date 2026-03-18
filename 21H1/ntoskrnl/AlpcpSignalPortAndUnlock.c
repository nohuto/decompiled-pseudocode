/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x1406E9E0C
 * Callers:
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x140334A14 (AlpcpQueueIoCompletionPort.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v3; // rdi
  _DWORD *v4; // r9
  _DWORD *v5; // r9
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
    return KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1LL, 1LL, v4, 0);
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
      return KeReleaseSemaphoreEx((__int64)(v9 + 145), 1LL, 1LL, v5, 2);
    }
  }
}
