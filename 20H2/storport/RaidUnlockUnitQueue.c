/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C0011238
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 0;
}
