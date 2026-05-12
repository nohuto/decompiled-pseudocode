/*
 * XREFs of RaUnitCancelStopDeviceIrp @ 0x1C0079DA0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0017828 (RaidUnitConvertToNormalUnit.c)
 */

__int64 __fastcall RaUnitCancelStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 1;
  RaidUnitConvertToNormalUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
