/*
 * XREFs of PopReleaseTransitionLock @ 0x1407792E4
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407AEE40 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408DEFB0 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopUnlockAfterSleepWorker @ 0x14098CC40 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140779328 (PopDirectedDripsNotify.c)
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
