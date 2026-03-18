/*
 * XREFs of AlpcpFlushQueue @ 0x14074DEF4
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x14074DD38 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpFlushQueue(__int64 a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  volatile signed __int64 *v8; // rdi
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rax

  if ( a3 <= 2 )
  {
    v6 = 136LL;
  }
  else
  {
    v6 = 176LL;
    if ( a3 != 3 )
      v6 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v6 + a1, 0LL);
  while ( 1 )
  {
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v10 = (volatile signed __int64 *)(a1 + 176);
      else
        v10 = (volatile signed __int64 *)(a1 + 200);
    }
    else
    {
      v10 = (volatile signed __int64 *)(a1 + 136);
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    AlpcpLockForCachedReferenceBlob(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(_QWORD *)(v7 + 16) == a1 )
      AlpcpCancelMessage(a1, v7, 0x10000);
    else
      AlpcpUnlockMessage(v7);
    if ( a3 > 2 )
    {
      v11 = 176LL;
      if ( a3 != 3 )
        v11 = 200LL;
    }
    else
    {
      v11 = 136LL;
    }
    ExAcquirePushLockExclusiveEx(v11 + a1, 0LL);
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v8 = (volatile signed __int64 *)(a1 + 176);
    else
      v8 = (volatile signed __int64 *)(a1 + 200);
  }
  else
  {
    v8 = (volatile signed __int64 *)(a1 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  return KeAbPostRelease((ULONG_PTR)v8);
}
