/*
 * XREFs of PopGetTransitionsToOnCount @ 0x1403821EC
 * Callers:
 *     PopSetSleepMarker @ 0x140770064 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22C68;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
