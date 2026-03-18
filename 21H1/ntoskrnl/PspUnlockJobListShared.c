/*
 * XREFs of PspUnlockJobListShared @ 0x140905618
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockJobListShared(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1, v2, v3, v4);
}
