/*
 * XREFs of HvpGetCellMap @ 0x140699E40
 * Callers:
 *     HvpAddBin @ 0x140685BBC (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1406861C0 (HvpPointMapEntriesToBuffer.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140689318 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x1406897BC (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140689874 (HvFreeHivePartial.c)
 *     HvpSetRangeProtection @ 0x1406981EC (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140698568 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x1406987E4 (HvCheckHive.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     HvpMapHiveImageFromViewMap @ 0x140698C54 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddFreeCellHint @ 0x140698D84 (HvpAddFreeCellHint.c)
 *     HvpFindFreeCell @ 0x140699668 (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140699840 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1406999F8 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x140699B30 (HvpMarkCellDirty.c)
 *     HvTrimHive @ 0x1406E7060 (HvTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x140704D68 (HvpFindNextDirtyBlock.c)
 *     HvWriteExternal @ 0x1407151C0 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x140781B74 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x14086EEC4 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14087D64C (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x14087D958 (HvpShrinkMap.c)
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
