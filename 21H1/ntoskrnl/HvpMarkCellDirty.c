/*
 * XREFs of HvpMarkCellDirty @ 0x140699B30
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckLeaf @ 0x1405F71F0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1405F87A0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1405F8D60 (CmpCheckKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406182F0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14068B7D8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpMarkIndexDirty @ 0x140691EE8 (CmpMarkIndexDirty.c)
 *     CmpMarkKeyDirty @ 0x140696588 (CmpMarkKeyDirty.c)
 *     CmpMarkValueDataDirty @ 0x140697BF8 (CmpMarkValueDataDirty.c)
 *     HvpIsFreeNeighbor @ 0x140698B90 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x140699EA0 (HvpFindFreeCellInBin.c)
 *     CmpClearKeyAccessBits @ 0x1406D664C (CmpClearKeyAccessBits.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406DD084 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406E11E4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1406E5850 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14071F084 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpMarkCurrentValueDirty @ 0x1407813C0 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078CE7C (CmpMarkCurrentProfileDirty.c)
 *     CmpDoBuildVirtualStack @ 0x14086BB80 (CmpDoBuildVirtualStack.c)
 *     CmpCopySyncTree2 @ 0x140873DD0 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140874A24 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140874AC0 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x1408765E0 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140876690 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087681C (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087BB10 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140699E40 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 v7; // rax
  char v8; // di
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v3 = (unsigned int)BugCheckParameter3;
  v11 = 0;
  v4 = *(_DWORD *)(BugCheckParameter2 + 160);
  v10 = -1;
  if ( (v4 & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
  if ( !a3 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)v3,
         &v10);
  if ( !v7 || v7 == 4 )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2 + 80);
      KeAbPostRelease(BugCheckParameter2 + 80);
    }
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x270uLL);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
    v8 = HvpMarkDirty(BugCheckParameter2);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2 + 80);
      KeAbPostRelease(BugCheckParameter2 + 80);
    }
    if ( v8 )
    {
      *(_BYTE *)(BugCheckParameter2 + 141) = 1;
      return 1;
    }
  }
  return 0;
}
