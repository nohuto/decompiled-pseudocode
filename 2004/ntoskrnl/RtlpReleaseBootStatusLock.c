/*
 * XREFs of RtlpReleaseBootStatusLock @ 0x1403F252C
 * Callers:
 *     RtlLockBootStatusData @ 0x14076CD60 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14077A2D0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

void RtlpReleaseBootStatusLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
