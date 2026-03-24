/*
 * XREFs of PopDripsWatchdogNotifySessionStart @ 0x1408EF450
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE7F0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A4DC (PopDirectedDripsClearDisengageReason.c)
 */

_QWORD *__fastcall PopDripsWatchdogNotifySessionStart(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  dword_140C214F4 = 0;
  dword_140C214F8 = PopDripsWatchdogDebounceTickInterval;
  byte_140C21510 = a1;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
