/*
 * XREFs of PopAcquireTransitionLock @ 0x140789C98
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopNotifyPolicyDevice @ 0x14078B0F0 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E6278 (PopDirectedDripsSuspendDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140789D38 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8LL, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
