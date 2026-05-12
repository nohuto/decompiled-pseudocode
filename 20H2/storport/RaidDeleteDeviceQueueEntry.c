/*
 * XREFs of RaidDeleteDeviceQueueEntry @ 0x1C0014E58
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0014B64 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B60C (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     RiDeleteDeviceQueueEntry @ 0x1C000AEA0 (RiDeleteDeviceQueueEntry.c)
 */

void __fastcall RaidDeleteDeviceQueueEntry(__int64 a1, int a2)
{
  KIRQL v4; // bl

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDeleteDeviceQueueEntry(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
