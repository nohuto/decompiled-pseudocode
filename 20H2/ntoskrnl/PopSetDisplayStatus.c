/*
 * XREFs of PopSetDisplayStatus @ 0x1407768CC
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     PopReleaseAdaptiveLock @ 0x140721000 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1407210F0 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14077DBD8 (PopSetSessionDisplayStatus.c)
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
