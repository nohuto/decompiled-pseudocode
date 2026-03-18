/*
 * XREFs of HvpGetCellMap @ 0x140AB44C0
 * Callers:
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     HvpTruncateBins @ 0x140689848 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpMapHiveImageFromViewMap @ 0x14068C154 (HvpMapHiveImageFromViewMap.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14068CEA0 (HvpPointMapEntriesToBuffer.c)
 *     HvTrimHive @ 0x1406D59B8 (HvTrimHive.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpFindNextDirtyBlock @ 0x14079AE04 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14079C440 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x14079C578 (HvpAddFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14079CC20 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1407C8130 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x14091AAA0 (HvpCopyModifiedData.c)
 *     HvpShrinkMap @ 0x1409221F4 (HvpShrinkMap.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AB4C18 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 280) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 288) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
