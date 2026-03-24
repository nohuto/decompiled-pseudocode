/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x14069314C
 * Callers:
 *     AlpcpDisconnectPort @ 0x1405E26FC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1405E301C (AlpcpCancelMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402ACB74 (AlpcpQueueIoCompletionPort.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
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
