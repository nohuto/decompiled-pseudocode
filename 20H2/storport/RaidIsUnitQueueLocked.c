/*
 * XREFs of RaidIsUnitQueueLocked @ 0x1C0011228
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsUnitQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 693);
}
