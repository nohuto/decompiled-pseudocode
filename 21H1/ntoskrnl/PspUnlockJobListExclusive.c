/*
 * XREFs of PspUnlockJobListExclusive @ 0x14065B740
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1, v3, v4, v5);
}
