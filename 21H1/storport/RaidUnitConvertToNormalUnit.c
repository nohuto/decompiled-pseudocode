/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C0017828
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0079DA0 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0015E20 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0019DAC (RaidAdapterRemoveZombieUnit.c)
 */

void __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 448) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
