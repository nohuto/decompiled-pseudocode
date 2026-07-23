/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14071F4EC
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x14063AF08 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1406F8CDC (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvCheckHive @ 0x140720C28 (HvCheckHive.c)
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140721258 (HvpSetRangeProtection.c)
 *     HvpDropPagedBins @ 0x14079F928 (HvpDropPagedBins.c)
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
