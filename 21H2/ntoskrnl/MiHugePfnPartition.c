/*
 * XREFs of MiHugePfnPartition @ 0x14058727C
 * Callers:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140587900 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 49) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C51F48 + 8 * ((*a1 >> 49) & 0x7FFLL));
}
