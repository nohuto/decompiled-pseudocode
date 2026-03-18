/*
 * XREFs of PopAcquireTransitionLock @ 0x14081CE58
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x140858C40 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x14098C45C (PopDirectedDripsSuspendDevices.c)
 *     PopWnfHibernatePolicyCallback @ 0x14098FB30 (PopWnfHibernatePolicyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
