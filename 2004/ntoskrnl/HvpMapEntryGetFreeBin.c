/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14069F8F8
 * Callers:
 *     HvpTruncateBins @ 0x14063BC3C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     HvpFindNextDirtyBlock @ 0x14069C46C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14069E2BC (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 *     HvCheckHive @ 0x14069E8B4 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x1407874F8 (HvpDropPagedBins.c)
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
