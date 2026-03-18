/*
 * XREFs of PopAcquireTransitionLock @ 0x140779288
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407AEE40 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408DF1D8 (PopDirectedDripsSuspendDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140779328 (PopDirectedDripsNotify.c)
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
