/*
 * XREFs of RtlpReleaseBootStatusLock @ 0x1403F6B74
 * Callers:
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

void RtlpReleaseBootStatusLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
