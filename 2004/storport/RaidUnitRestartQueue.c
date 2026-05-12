/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0019680
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00088BC (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
