/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x1406B9FAC
 * Callers:
 *     AlpcpDisconnectPort @ 0x1405E9C9C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1405EA5BC (AlpcpCancelMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x14030D9FC (AlpcpQueueIoCompletionPort.c)
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
    return AlpcpQueueIoCompletionPort((__int64 *)a1, 0, 1, 0);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v3 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v3);
    return KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1u, 1, v4, 0);
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
      return KeReleaseSemaphoreEx((__int64)(v9 + 145), 1u, 1, v5, 2);
    }
  }
}
