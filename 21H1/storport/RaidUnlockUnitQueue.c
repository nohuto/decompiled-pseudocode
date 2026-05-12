/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C000EA88
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 0;
}
