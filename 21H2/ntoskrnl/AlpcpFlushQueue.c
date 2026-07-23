/*
 * XREFs of AlpcpFlushQueue @ 0x1406D1C30
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1406D1A74 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 */

char __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  volatile signed __int64 *v8; // rdi
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rax

  if ( a3 <= 2 )
  {
    v6 = 17LL;
  }
  else
  {
    v6 = 22LL;
    if ( a3 != 3 )
      v6 = 25LL;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[v6], 0LL);
  while ( 1 )
  {
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v10 = a1 + 22;
      else
        v10 = a1 + 25;
    }
    else
    {
      v10 = a1 + 17;
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    AlpcpLockForCachedReferenceBlob(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(volatile signed __int64 **)(v7 + 16) == a1 )
      AlpcpCancelMessage(a1, v7, 0x10000LL);
    else
      AlpcpUnlockMessage(v7);
    if ( a3 > 2 )
    {
      v11 = 22LL;
      if ( a3 != 3 )
        v11 = 25LL;
    }
    else
    {
      v11 = 17LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[v11], 0LL);
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v8 = a1 + 22;
    else
      v8 = a1 + 25;
  }
  else
  {
    v8 = a1 + 17;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  return KeAbPostRelease((ULONG_PTR)v8);
}
