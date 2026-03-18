/*
 * XREFs of PspUnlockJobListExclusive @ 0x1406575B4
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
