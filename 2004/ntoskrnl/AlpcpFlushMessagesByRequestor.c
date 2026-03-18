/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x140702CE0
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x140629478 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 */

char __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4)
{
  __int64 v8; // rax
  ULONG_PTR i; // rdi
  volatile signed __int64 *v10; // rdi
  volatile signed __int64 *v12; // rbp
  __int64 v13; // rax

  if ( a4 <= 2 )
  {
    v8 = 136LL;
  }
  else
  {
    v8 = 176LL;
    if ( a4 != 3 )
      v8 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v8 + a2, 0LL);
LABEL_5:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v12 = (volatile signed __int64 *)(a2 + 176);
        else
          v12 = (volatile signed __int64 *)(a2 + 200);
      }
      else
      {
        v12 = (volatile signed __int64 *)(a2 + 136);
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000);
      else
        AlpcpUnlockMessage(i);
      if ( a4 > 2 )
      {
        v13 = 176LL;
        if ( a4 != 3 )
          v13 = 200LL;
      }
      else
      {
        v13 = 136LL;
      }
      ExAcquirePushLockExclusiveEx(v13 + a2, 0LL);
      goto LABEL_5;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v10 = (volatile signed __int64 *)(a2 + 176);
    else
      v10 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v10 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
