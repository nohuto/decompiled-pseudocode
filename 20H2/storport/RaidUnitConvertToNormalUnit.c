/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C001A17C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C007B1C0 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0018128 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C001C8F4 (RaidAdapterRemoveZombieUnit.c)
 */

void __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 448) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
