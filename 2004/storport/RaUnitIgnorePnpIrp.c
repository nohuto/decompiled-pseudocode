/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C0074914
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00083C0 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001BA3C (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
