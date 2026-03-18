/*
 * XREFs of PopAcquireTransitionLock @ 0x14077B698
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopNotifyPolicyDevice @ 0x14077DB50 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E0438 (PopDirectedDripsSuspendDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
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
