/*
 * XREFs of PopDripsWatchdogNotifySessionStart @ 0x1408EF5B0
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A02C (PopDirectedDripsClearDisengageReason.c)
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
  dword_140C21534 = 0;
  dword_140C21538 = PopDripsWatchdogDebounceTickInterval;
  byte_140C21550 = a1;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
