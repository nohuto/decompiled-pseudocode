/*
 * XREFs of HvpGetCellMap @ 0x140707F30
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405DE998 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x1405DEE3C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     HvTrimHive @ 0x1406DD28C (HvTrimHive.c)
 *     HvpPointMapEntriesToBuffer @ 0x140705C94 (HvpPointMapEntriesToBuffer.c)
 *     HvpFindNextDirtyBlock @ 0x140705D54 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14070661C (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140706998 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x140706C14 (HvCheckHive.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvpMapHiveImageFromViewMap @ 0x140707084 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddFreeCellHint @ 0x1407071B4 (HvpAddFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070774C (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140707930 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140707AE8 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 *     HvWriteExternal @ 0x140725510 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x140795208 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x14087650C (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408832C4 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x1408835D0 (HvpShrinkMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 272) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 280) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
