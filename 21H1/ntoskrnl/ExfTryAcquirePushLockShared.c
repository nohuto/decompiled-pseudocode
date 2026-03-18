/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140340930
 * Callers:
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140260440 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     PfLockSharedTryAcquire @ 0x1402D5808 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140340780 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14038D4D0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14038D590 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x1405029CC (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A30C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405AE2F0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x140871530 (TryLockShutdownShared.c)
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
