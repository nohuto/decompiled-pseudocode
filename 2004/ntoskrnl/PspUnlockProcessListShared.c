/*
 * XREFs of PspUnlockProcessListShared @ 0x1402CC9C0
 * Callers:
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x14077A3D8 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x14090B378 (PsGetPreviousProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
