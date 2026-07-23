/*
 * XREFs of HvpGetCellMap @ 0x14071FB10
 * Callers:
 *     HvTrimHive @ 0x14061A688 (HvTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x14063AF08 (HvpFindNextDirtyBlock.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1406F8838 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x1406F8CDC (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x1406FAA84 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1406FB088 (HvpPointMapEntriesToBuffer.c)
 *     HvpFindFreeCell @ 0x14071F32C (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14071F510 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14071F6C8 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     HvpAddFreeCellHint @ 0x1407204C0 (HvpAddFreeCellHint.c)
 *     HvpMapHiveImageFromViewMap @ 0x140720830 (HvpMapHiveImageFromViewMap.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     HvCheckHive @ 0x140720C28 (HvCheckHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140721258 (HvpSetRangeProtection.c)
 *     HvWriteExternal @ 0x140729450 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x14079F928 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x140873F50 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408809B4 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140880CC0 (HvpShrinkMap.c)
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
