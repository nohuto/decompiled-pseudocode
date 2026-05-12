/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C0010848
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 0;
}
