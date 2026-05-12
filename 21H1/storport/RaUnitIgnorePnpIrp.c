/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C00745D4
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0019B94 (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
