/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x14057C748
 * Callers:
 *     NtQueryInformationThread @ 0x1406889F0 (NtQueryInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 1280);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1280), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
