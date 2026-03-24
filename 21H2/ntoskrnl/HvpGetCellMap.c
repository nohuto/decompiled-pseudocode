/*
 * XREFs of HvpGetCellMap @ 0x140708730
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x14064611C (HvpFindNextDirtyBlock.c)
 *     HvTrimHive @ 0x1406BD0DC (HvTrimHive.c)
 *     HvpFindFreeCell @ 0x140707F4C (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140708130 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1407082E8 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x140708420 (HvpMarkCellDirty.c)
 *     HvpAddFreeCellHint @ 0x1407090E0 (HvpAddFreeCellHint.c)
 *     HvpMapHiveImageFromViewMap @ 0x140709450 (HvpMapHiveImageFromViewMap.c)
 *     HvFreeCell @ 0x140709534 (HvFreeCell.c)
 *     HvCheckHive @ 0x140709848 (HvCheckHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14070999C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709E78 (HvpSetRangeProtection.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140720FE0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x140721484 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14072153C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140722A58 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14072305C (HvpPointMapEntriesToBuffer.c)
 *     HvWriteExternal @ 0x140728FA0 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x14079F728 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x140873DF0 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140880854 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140880B60 (HvpShrinkMap.c)
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
