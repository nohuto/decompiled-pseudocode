/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x140390CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140390F1C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x14039105C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rdi
  int v4; // ecx
  char v5; // si
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    v7 = *(_DWORD *)(BugCheckParameter2 + 12);
    v5 = 0;
    if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v7) )
      *(_DWORD *)(BugCheckParameter2 + 12) = v7;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 8);
    v5 = 1;
    if ( (v4 & 1) != 0 )
    {
      v5 = ExpTryAcquireFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
      if ( !v5
        && (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      }
    }
  }
  if ( v2 )
  {
    if ( v5 )
      *(_BYTE *)(v2 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v2);
  }
  return v5;
}
