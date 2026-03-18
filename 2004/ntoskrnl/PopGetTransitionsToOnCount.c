/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14038042C
 * Callers:
 *     PopSetSleepMarker @ 0x140761A54 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22B48;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
