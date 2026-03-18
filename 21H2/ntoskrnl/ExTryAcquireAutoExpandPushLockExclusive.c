/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660
 * Callers:
 *     <none>
 * Callees:
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x1402F95EC (ExpAeUpdateStatsForExclusiveRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14039E71C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v2; // rsi
  int v4; // ecx
  char v5; // di
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    v7 = *(_DWORD *)(BugCheckParameter2 + 12);
    v5 = 0;
    if ( ExpAeUpdateStatsForExclusiveRelease(&v7) )
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
        ExfTryToWakePushLock(BugCheckParameter2);
      }
    }
  }
  if ( v2 )
  {
    if ( v5 )
      *(_BYTE *)(v2 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v2);
  }
  return v5;
}
