/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14070790C
 * Callers:
 *     HvpTruncateBins @ 0x1405DEE3C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     HvpFindNextDirtyBlock @ 0x140705D54 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14070661C (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 *     HvCheckHive @ 0x140706C14 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140795208 (HvpDropPagedBins.c)
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
