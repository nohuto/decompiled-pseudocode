/*
 * XREFs of HvpMarkCellDirty @ 0x14071F800
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1405CD868 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpClearKeyAccessBits @ 0x14060759C (CmpClearKeyAccessBits.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406150D4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x14061A7B0 (CmpInsertSecurityCellList.c)
 *     CmpVEExecuteOpenLogic @ 0x140649DB0 (CmpVEExecuteOpenLogic.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpMarkValueDataDirty @ 0x14065BDA8 (CmpMarkValueDataDirty.c)
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     CmpMarkIndexDirty @ 0x14066140C (CmpMarkIndexDirty.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140662298 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckLeaf @ 0x1406DB680 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1406DFBC0 (CmpCheckValueList.c)
 *     HvpFindFreeCellInBin @ 0x140720190 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x140720AC0 (HvpIsFreeNeighbor.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140733344 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpMarkCurrentValueDirty @ 0x14079EE80 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A59BC (CmpMarkCurrentProfileDirty.c)
 *     CmpCopySyncTree2 @ 0x1408786F0 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140879364 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140879400 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x14087AF38 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14087AFE8 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087B180 (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140880094 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
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
