/*
 * XREFs of MiHugePfnPartition @ 0x1403EDC38
 * Callers:
 *     MiMakeEntireHugePfnGood @ 0x1403EDC9C (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1403EDD44 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403EE0F8 (MiMarkHugePfnGood.c)
 *     MiHotRemoveHugeRange @ 0x14052D828 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x14052E138 (MiInsertHugeRangeInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 41) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C4E448 + 8 * ((*a1 >> 41) & 0x7FFLL));
}
