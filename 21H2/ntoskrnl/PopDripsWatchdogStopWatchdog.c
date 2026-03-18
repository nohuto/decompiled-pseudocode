/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x1409969C4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1409971BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

char PopDripsWatchdogStopWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C20808 & 4) != 0 )
    dword_140C20808 &= ~4u;
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
