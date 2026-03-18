/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x1408EC2B4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408ECC3C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PopDripsWatchdogStopWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C211A8 & 4) != 0 )
    dword_140C211A8 &= ~4u;
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
