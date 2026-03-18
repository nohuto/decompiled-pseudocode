/*
 * XREFs of PopDripsWatchdogNotifySessionStart @ 0x1408EADC0
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EA160 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037762C (PopDirectedDripsClearDisengageReason.c)
 */

_QWORD *__fastcall PopDripsWatchdogNotifySessionStart(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  dword_140C214B4 = 0;
  dword_140C214B8 = PopDripsWatchdogDebounceTickInterval;
  byte_140C214D0 = a1;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
