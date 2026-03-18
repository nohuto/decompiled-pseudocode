/*
 * XREFs of MiHugePfnPartition @ 0x1403F20A0
 * Callers:
 *     MiMakeEntireHugePfnGood @ 0x1403F2104 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1403F21AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F2560 (MiMarkHugePfnGood.c)
 *     MiHotRemoveHugeRange @ 0x1405311F8 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x140531B08 (MiInsertHugeRangeInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 41) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C4E4C8 + 8 * ((*a1 >> 41) & 0x7FFLL));
}
