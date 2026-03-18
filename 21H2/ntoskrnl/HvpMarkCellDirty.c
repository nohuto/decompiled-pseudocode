/*
 * XREFs of HvpMarkCellDirty @ 0x14071F300
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1406580D0 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14065B3DC (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14065DE48 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14065DF64 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14065E690 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpMarkEntireIndexDirty @ 0x14065E97C (CmpMarkEntireIndexDirty.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckLeaf @ 0x14069A7B0 (CmpCheckLeaf.c)
 *     CmpClearKeyAccessBits @ 0x1406BF110 (CmpClearKeyAccessBits.c)
 *     CmpInsertSecurityCellList @ 0x1406CA2B8 (CmpInsertSecurityCellList.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406CE32C (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406D7440 (CmpUpdateHiveRootCellFlags.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140715BA0 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140715FA8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1407169FC (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x140716D50 (CmpMarkValueDataDirty.c)
 *     CmpAddSubKeyEx @ 0x140718244 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1407187D4 (CmpAddToLeaf.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140722534 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpSetValueKeyNew @ 0x14079B2C0 (CmpSetValueKeyNew.c)
 *     HvpIsFreeNeighbor @ 0x14079BF50 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x14079CE20 (HvpFindFreeCellInBin.c)
 *     CmpCheckValueList @ 0x1407C4990 (CmpCheckValueList.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmpSelectLeaf @ 0x1407FB158 (CmpSelectLeaf.c)
 *     CmpMarkCurrentProfileDirty @ 0x140837E20 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x14083D474 (CmpMarkCurrentValueDirty.c)
 *     HvMarkCellDirty @ 0x14087D6D0 (HvMarkCellDirty.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x140914BEC (CmpSetValueKeyTombstone.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x14091F9DC (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x14091FA94 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x140921078 (CmpMarkAllChildrenDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1409211E4 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140921510 (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140923D00 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 CellFlat; // rax
  int v8; // ebp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v4 = *(_DWORD *)(BugCheckParameter3 + 160);
  v10 = 0xFFFFFFFFLL;
  if ( (v4 & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0LL;
  if ( !a3 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v3, &v10);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat || CellFlat == 4 )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter3 + 80);
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    return 3221225626LL;
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v3, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v10);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v10);
    v8 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter3 + 80);
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    if ( v8 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0LL;
    }
    return (unsigned int)v8;
  }
}
