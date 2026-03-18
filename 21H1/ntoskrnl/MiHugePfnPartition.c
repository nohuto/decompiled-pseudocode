/*
 * XREFs of MiHugePfnPartition @ 0x1403ECB78
 * Callers:
 *     MiMakeEntireHugePfnGood @ 0x1403ECBDC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1403ECC84 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403ED038 (MiMarkHugePfnGood.c)
 *     MiHotRemoveHugeRange @ 0x14052D1D8 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x14052DAE8 (MiInsertHugeRangeInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 41) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C4E588 + 8 * ((*a1 >> 41) & 0x7FFLL));
}
