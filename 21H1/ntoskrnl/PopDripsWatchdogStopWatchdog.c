/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x1408EB034
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408EB9BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *PopDripsWatchdogStopWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C213E8 & 4) != 0 )
    dword_140C213E8 &= ~4u;
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, v3);
}
