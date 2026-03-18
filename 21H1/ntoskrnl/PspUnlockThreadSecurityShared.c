/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x14057C108
 * Callers:
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (signed __int64 *)(a1 + 1280);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1280), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2, v4, v5, v6);
}
