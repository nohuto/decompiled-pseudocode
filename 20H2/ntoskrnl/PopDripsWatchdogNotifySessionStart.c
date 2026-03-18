/*
 * XREFs of PopDripsWatchdogNotifySessionStart @ 0x1408F1C50
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408F0FF0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A2DC (PopDirectedDripsClearDisengageReason.c)
 */

_QWORD *__fastcall PopDripsWatchdogNotifySessionStart(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  dword_140C21374 = 0;
  dword_140C21378 = PopDripsWatchdogDebounceTickInterval;
  byte_140C21390 = a1;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
