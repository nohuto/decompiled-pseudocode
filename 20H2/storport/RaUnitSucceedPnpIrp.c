/*
 * XREFs of RaUnitSucceedPnpIrp @ 0x1C00760E0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA18 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitSucceedPnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, 0);
}
