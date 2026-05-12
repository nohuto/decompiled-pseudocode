/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C0079F74
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaidLockUnitQueue @ 0x1C0032400 (RaidLockUnitQueue.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1)
{
  PIRP v1; // rax

  *(_DWORD *)(a1 + 48) = 2;
  RaidLockUnitQueue(a1);
  return RaidCompleteRequestEx(v1, 0, 0);
}
