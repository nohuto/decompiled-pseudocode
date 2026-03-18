/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x140699828
 * Callers:
 *     HvpTruncateBins @ 0x1406897BC (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140689874 (HvFreeHivePartial.c)
 *     HvpSetRangeProtection @ 0x1406981EC (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
 *     HvCheckHive @ 0x1406987E4 (HvCheckHive.c)
 *     HvpFindNextDirtyBlock @ 0x140704D68 (HvpFindNextDirtyBlock.c)
 *     HvpDropPagedBins @ 0x140781B74 (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryGetFreeBin(_BYTE *a1)
{
  if ( (a1[8] & 2) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
