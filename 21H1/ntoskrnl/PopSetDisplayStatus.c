/*
 * XREFs of PopSetDisplayStatus @ 0x140765EDC
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 *     PopReleaseAdaptiveLock @ 0x1406FE6C4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406FE7B4 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14076CE88 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // r8

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(ProcessSessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
