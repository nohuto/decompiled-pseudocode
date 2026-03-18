/*
 * XREFs of HvpMarkCellDirty @ 0x14069FC00
 * Callers:
 *     CmpMarkValueDataDirty @ 0x1405E112C (CmpMarkValueDataDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063E2BC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpMarkKeyDirty @ 0x140640354 (CmpMarkKeyDirty.c)
 *     CmpMarkIndexDirty @ 0x1406405B4 (CmpMarkIndexDirty.c)
 *     CmpCheckLeaf @ 0x14066F290 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1406709B0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140670F70 (CmpCheckKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     HvpIsFreeNeighbor @ 0x14069EC60 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x14069FF70 (HvpFindFreeCellInBin.c)
 *     CmpClearKeyAccessBits @ 0x1406F9DAC (CmpClearKeyAccessBits.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406FFCDC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140703D58 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x140709570 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140720F48 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpMarkCurrentValueDirty @ 0x140786A4C (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078ED4C (CmpMarkCurrentProfileDirty.c)
 *     CmpDoBuildVirtualStack @ 0x14086CED0 (CmpDoBuildVirtualStack.c)
 *     CmpCopySyncTree2 @ 0x1408750C0 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140875D14 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140875DB0 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x1408778D0 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140877980 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140877B0C (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087CE00 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14069FF10 (HvpGetCellMap.c)
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
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
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
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
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
