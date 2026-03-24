/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14070810C
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x14064611C (HvpFindNextDirtyBlock.c)
 *     HvCheckHive @ 0x140709848 (HvCheckHive.c)
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709E78 (HvpSetRangeProtection.c)
 *     HvpTruncateBins @ 0x140721484 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14072153C (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x14079F728 (HvpDropPagedBins.c)
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
