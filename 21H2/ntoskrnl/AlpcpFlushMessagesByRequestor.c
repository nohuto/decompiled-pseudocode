/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x1406133B4
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

char __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, volatile signed __int64 *a2, ULONG_PTR *a3, unsigned int a4)
{
  __int64 v8; // rax
  ULONG_PTR i; // rdi
  volatile signed __int64 *v10; // rdi
  volatile signed __int64 *v12; // rbp
  __int64 v13; // rax

  if ( a4 <= 2 )
  {
    v8 = 17LL;
  }
  else
  {
    v8 = 22LL;
    if ( a4 != 3 )
      v8 = 25LL;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[v8], 0LL);
LABEL_5:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v12 = a2 + 22;
        else
          v12 = a2 + 25;
      }
      else
      {
        v12 = a2 + 17;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000LL);
      else
        AlpcpUnlockMessage(i);
      if ( a4 > 2 )
      {
        v13 = 22LL;
        if ( a4 != 3 )
          v13 = 25LL;
      }
      else
      {
        v13 = 17LL;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[v13], 0LL);
      goto LABEL_5;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v10 = a2 + 22;
    else
      v10 = a2 + 25;
  }
  else
  {
    v10 = a2 + 17;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
