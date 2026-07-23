/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x1408C392C
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x1408C3818 (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408C3AA4 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // r15
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rsi

  v2 = (signed __int64 *)(a2 + 352);
  ExAcquirePushLockSharedEx(a2 + 352, 0LL);
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  v5 = (volatile signed __int64 *)(a2 + 136);
  ExAcquirePushLockExclusiveEx(a2 + 136, 0LL);
  v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v6 )
    goto LABEL_3;
  v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 136);
  KeAbPostRelease(a2 + 136);
  if ( !v6 )
  {
    ExAcquirePushLockExclusiveEx(a2 + 176, 0LL);
    v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 176);
    KeAbPostRelease(a2 + 176);
    if ( !v6 )
    {
      v5 = (volatile signed __int64 *)(a2 + 200);
      ExAcquirePushLockExclusiveEx(a2 + 200, 0LL);
      v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_3:
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
    }
  }
LABEL_14:
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
