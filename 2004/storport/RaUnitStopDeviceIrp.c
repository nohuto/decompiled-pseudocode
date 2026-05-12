/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C0079E94
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00083C0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidLockUnitQueue @ 0x1C0032980 (RaidLockUnitQueue.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1)
{
  PIRP v1; // rax

  *(_DWORD *)(a1 + 48) = 2;
  RaidLockUnitQueue(a1);
  return RaidCompleteRequestEx(v1, 0, 0);
}
