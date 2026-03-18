/*
 * XREFs of HvpMarkCellDirty @ 0x140707C20
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1405E14A0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpVEExecuteOpenLogic @ 0x14060BF80 (CmpVEExecuteOpenLogic.c)
 *     CmpMarkValueDataDirty @ 0x14066C57C (CmpMarkValueDataDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140670160 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpCheckLeaf @ 0x140670730 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1406731E0 (CmpCheckValueList.c)
 *     CmpClearKeyAccessBits @ 0x1406CC7CC (CmpClearKeyAccessBits.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406D2C74 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406D7214 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1406DBAD0 (CmpInsertSecurityCellList.c)
 *     CmpMarkIndexDirty @ 0x140701C64 (CmpMarkIndexDirty.c)
 *     CmpMarkKeyDirty @ 0x140704078 (CmpMarkKeyDirty.c)
 *     HvpIsFreeNeighbor @ 0x140706FC0 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x140707F90 (HvpFindFreeCellInBin.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14072EF38 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpMarkCurrentValueDirty @ 0x14079475C (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14079B704 (CmpMarkCurrentProfileDirty.c)
 *     CmpCopySyncTree2 @ 0x14087AC10 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x14087B884 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x14087B920 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x14087D44C (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14087D4FC (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087D688 (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1408829B0 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140707F30 (HvpGetCellMap.c)
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
