/*
 * XREFs of PspUnlockQuotaListShared @ 0x140272770
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140644EB8 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1406450A0 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
