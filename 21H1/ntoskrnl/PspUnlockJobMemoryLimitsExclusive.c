/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x1406620C4
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B4DD0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1406E0FD0 (PspJobClose.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v5 = a1 + 1032;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1032);
    result = KeAbPostRelease(v5);
  }
  if ( a3 )
    return KiLeaveGuardedRegionUnsafe(a3, a2, a3, a4);
  return result;
}
