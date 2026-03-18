/*
 * XREFs of VrpUnlockDiffHiveEntry @ 0x1405CB788
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CB488 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall VrpUnlockDiffHiveEntry(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = a1 + 24;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(a1 + 24);
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
