/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C0016FFC
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072D84 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0014D64 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C0017034 (RaidAdapterInsertZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 448) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
