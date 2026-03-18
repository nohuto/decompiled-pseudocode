/*
 * XREFs of PopReleaseTransitionLock @ 0x140789CF4
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopNotifyPolicyDevice @ 0x14078B0F0 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408E6050 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140789D38 (PopDirectedDripsNotify.c)
 */

LONG __fastcall PopReleaseTransitionLock(int a1)
{
  LONG result; // eax

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  result = KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    return PopDirectedDripsNotify(9LL, 0LL);
  return result;
}
