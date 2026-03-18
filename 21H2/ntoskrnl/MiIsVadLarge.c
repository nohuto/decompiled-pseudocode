/*
 * XREFs of MiIsVadLarge @ 0x14031077C
 * Callers:
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiProcessVaRangesInfoClass @ 0x140753B20 (MiProcessVaRangesInfoClass.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
