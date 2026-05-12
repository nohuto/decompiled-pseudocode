/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0017810
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00082CC (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
