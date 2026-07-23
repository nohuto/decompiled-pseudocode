/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x14038D4D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockShared @ 0x140340930 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14038D590 (ExpTryAcquireFannedOutPushLockShared.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExTryAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // rbx
  int v5; // ebp
  int v6; // ecx

  v2 = 0LL;
  v3 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
  v6 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v6 & 1) != 0 )
  {
    v3 = ExpTryAcquireFannedOutPushLockShared(v6 & 0xFFFFFFF8);
  }
  else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
         || ExfTryAcquirePushLockShared((unsigned __int64 *)BugCheckParameter2) )
  {
    v3 = BugCheckParameter2 | 1;
  }
  if ( !v5 && v3 )
    v3 |= 2uLL;
  if ( v2 )
  {
    if ( v3 )
      *(_BYTE *)(v2 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v2);
  }
  return v3;
}
