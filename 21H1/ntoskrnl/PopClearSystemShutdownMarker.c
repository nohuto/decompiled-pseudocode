/*
 * XREFs of PopClearSystemShutdownMarker @ 0x14075FBE0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14098CC40 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 */

void PopClearSystemShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~8u;
  LOBYTE(PopBsdPowerTransitionExtension) = -1;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
