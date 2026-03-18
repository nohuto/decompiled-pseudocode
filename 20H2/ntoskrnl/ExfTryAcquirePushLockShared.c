/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140201A20
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140201870 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1402204A0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     PfLockSharedTryAcquire @ 0x14024452C (PfLockSharedTryAcquire.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390530 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1403905F0 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x140506A2C (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B2570 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x140878374 (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(unsigned __int64 *a1)
{
  char v2; // r9
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( 1 )
  {
    v4 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v4 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v5 = (v3 | 1) + 16;
    if ( v4 )
      v5 = v3 | 1;
    v6 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v5, v3);
    if ( v6 == v3 )
      return 1;
  }
  return v2;
}
