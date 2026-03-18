/*
 * XREFs of PspUnlockProcessListShared @ 0x140239B90
 * Callers:
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x140777FC8 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x14090A0C8 (PsGetPreviousProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
