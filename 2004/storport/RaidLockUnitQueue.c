/*
 * XREFs of RaidLockUnitQueue @ 0x1C0032980
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C0079E94 (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 1;
}
