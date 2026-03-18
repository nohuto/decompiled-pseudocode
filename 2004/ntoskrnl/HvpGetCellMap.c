/*
 * XREFs of HvpGetCellMap @ 0x14069FF10
 * Callers:
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140638644 (HvpPointMapEntriesToBuffer.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14063B798 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x14063BC3C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     HvpFindNextDirtyBlock @ 0x14069C46C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14069E2BC (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14069E638 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x14069E8B4 (HvCheckHive.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvpMapHiveImageFromViewMap @ 0x14069ED24 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddFreeCellHint @ 0x14069EE54 (HvpAddFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14069F738 (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14069F910 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14069FAC8 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x14069FC00 (HvpMarkCellDirty.c)
 *     HvTrimHive @ 0x1407092D8 (HvTrimHive.c)
 *     HvWriteExternal @ 0x140717550 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x1407874F8 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x1408709B4 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14087D6FC (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x14087DA08 (HvpShrinkMap.c)
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
