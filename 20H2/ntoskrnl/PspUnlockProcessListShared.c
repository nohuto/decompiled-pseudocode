/*
 * XREFs of PspUnlockProcessListShared @ 0x140253A68
 * Callers:
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x1407889D8 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x140910FB4 (PsGetPreviousProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
