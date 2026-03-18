/*
 * XREFs of HvFreeCell @ 0x14069EAAC
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x1405E0E2C (CmpSetValueKeyExisting.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 *     CmpRemoveSubKeyFromList @ 0x140640898 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x140640CC0 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1406410D8 (CmpAddToLeaf.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14065499C (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406557BC (CmpLightWeightCreateSetValueData.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     HvReallocateCell @ 0x14069DB20 (HvReallocateCell.c)
 *     CmpFreeValueData @ 0x14069DC94 (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x14069DDBC (CmpFreeValue.c)
 *     CmpSetValueDataNew @ 0x14069DE38 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x14069E11C (CmpAddValueKeyNew.c)
 *     CmpRemoveValueFromList @ 0x1406F5350 (CmpRemoveValueFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x1406F8F24 (CmpFreeSecurityDescriptor.c)
 *     CmpFreeKeyBody @ 0x1406FA4C0 (CmpFreeKeyBody.c)
 *     CmpSetValueDataExisting @ 0x14070EA74 (CmpSetValueDataExisting.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSplitLeaf @ 0x140721824 (CmpSplitLeaf.c)
 *     CmpCopyKeyPartial @ 0x1407524C0 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x14076A7EC (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x14086CAE4 (CmpCreateEmptyKey.c)
 *     CmpCopyValue @ 0x140875850 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140875B34 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140875BD0 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14087693C (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x140876EC8 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1408770E0 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140877B0C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087BE00 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087C000 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x14069EC60 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x14069F910 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14069FAC8 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x14069FF10 (HvpGetCellMap.c)
 */

char __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  volatile signed __int64 *v2; // r14
  ULONG_PTR v3; // rdi
  __int64 v5; // r15
  __int64 CellMap; // rax
  _QWORD *v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rbx
  int v11; // edi
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // r11d
  __int64 v18; // rax
  int v19; // r8d
  _DWORD BugCheckParameter3a[18]; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+98h] [rbp+20h]

  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v3 = (unsigned int)BugCheckParameter3;
  v5 = 0LL;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v3);
  v7 = (_QWORD *)CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x629uLL);
  v8 = *(_QWORD *)(CellMap + 8);
  v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v8 & 4) != 0 )
  {
    v16 = *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFF0uLL) + 4);
    v17 = v16 + *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    while ( v16 < v17 )
    {
      v18 = HvpGetCellMap(BugCheckParameter2, v16);
      *(_QWORD *)(v18 + 8) &= ~4uLL;
      v16 = v19 + 4096;
    }
  }
  v10 = (_DWORD *)(v9 + *v7 + (v3 & 0xFFF));
  *v10 = -*v10;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v13 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
    v14 = MEMORY[0];
    MEMORY[0] += *v10;
    v10 = 0LL;
    *(&v21 + v13) = v14;
    BugCheckParameter3a[v13] = v3 - v14;
  }
  while ( (unsigned int)v5 < 2 );
  v11 = (_DWORD)v10 + *(_DWORD *)(v9 + 4) + ((unsigned int)v3 >> 31 << 31) - v9;
  if ( (_DWORD)v5 )
  {
    v15 = 0LL;
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, (unsigned int)BugCheckParameter3a[v15++], v11);
      --v5;
    }
    while ( v5 );
  }
  HvpEnlistFreeCell(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
