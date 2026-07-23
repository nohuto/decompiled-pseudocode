/*
 * XREFs of MiIsVadLarge @ 0x140322FB4
 * Callers:
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiVadCommitCrossPartition @ 0x140322F8C (MiVadCommitCrossPartition.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BE204 (MiProcessVaRangesInfoClass.c)
 *     MiRemoveVadCharges @ 0x1407045D0 (MiRemoveVadCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
