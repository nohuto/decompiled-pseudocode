/*
 * XREFs of PopReleaseTransitionLock @ 0x14077B6F4
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopNotifyPolicyDevice @ 0x14077DB50 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408E0210 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
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
