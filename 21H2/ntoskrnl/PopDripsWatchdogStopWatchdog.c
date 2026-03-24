/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x1408EF6C4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F004C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *PopDripsWatchdogStopWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C21428 & 4) != 0 )
    dword_140C21428 &= ~4u;
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
