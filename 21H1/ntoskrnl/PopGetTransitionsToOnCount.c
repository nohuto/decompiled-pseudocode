/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14037FBEC
 * Callers:
 *     PopSetSleepMarker @ 0x140760174 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C22D88;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
