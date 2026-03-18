/*
 * XREFs of PspUnlockQuotaListShared @ 0x140321098
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1406CF394 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1406CF57C (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
