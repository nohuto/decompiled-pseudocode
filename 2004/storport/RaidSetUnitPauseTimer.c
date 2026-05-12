/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C0010018
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C000FF20 (RaidAdapterDeferredRoutine.c)
 *     RaidStallDeviceQueue @ 0x1C001377C (RaidStallDeviceQueue.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00088BC (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0010440 (RaidResumeUnitQueue.c)
 */

void __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  if ( KeSetCoalescableTimer((PKTIMER)(a1 + 1056), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1120)) )
  {
    if ( (unsigned int)RaidResumeUnitQueue(a1) )
      RaidRestartIoQueue(a1);
  }
}
