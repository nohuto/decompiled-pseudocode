/*
 * XREFs of VrpUnlockDiffHiveEntry @ 0x1405CCB58
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CC858 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall VrpUnlockDiffHiveEntry(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 24;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
