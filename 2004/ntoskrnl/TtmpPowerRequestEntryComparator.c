/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x1408FCA90
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x1408FC594 (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
