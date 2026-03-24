/*
 * XREFs of HvpMarkCellDirty @ 0x140708420
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1405CD868 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpCheckLeaf @ 0x1405EBF20 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1405F0460 (CmpCheckValueList.c)
 *     CmpVEExecuteOpenLogic @ 0x140654F90 (CmpVEExecuteOpenLogic.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406662E0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpMarkValueDataDirty @ 0x140666F88 (CmpMarkValueDataDirty.c)
 *     CmpMarkKeyDirty @ 0x14066A298 (CmpMarkKeyDirty.c)
 *     CmpMarkIndexDirty @ 0x14066C5EC (CmpMarkIndexDirty.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14066D478 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpClearKeyAccessBits @ 0x1406A961C (CmpClearKeyAccessBits.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406B5C14 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1406BB820 (CmpInsertSecurityCellList.c)
 *     HvpFindFreeCellInBin @ 0x140708DB0 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x1407096E0 (HvpIsFreeNeighbor.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140733184 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpMarkCurrentValueDirty @ 0x14079EC80 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A57BC (CmpMarkCurrentProfileDirty.c)
 *     CmpCopySyncTree2 @ 0x140878590 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140879204 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x1408792A0 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x14087ADD8 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14087AE88 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087B020 (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087FF34 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x140708560 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140708730 (HvpGetCellMap.c)
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
