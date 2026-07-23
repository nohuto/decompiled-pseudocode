/*
 * XREFs of MiHugePfnPartition @ 0x1403F38E8
 * Callers:
 *     MiMakeEntireHugePfnGood @ 0x1403F394C (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiHotRemoveHugeRange @ 0x140532F38 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x140533848 (MiInsertHugeRangeInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 41) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C4E688 + 8 * ((*a1 >> 41) & 0x7FFLL));
}
