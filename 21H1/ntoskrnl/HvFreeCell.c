/*
 * XREFs of HvFreeCell @ 0x1406989DC
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpLightWeightCreateSetValueData @ 0x140656D4C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140658158 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14068BBE0 (CmpGetSecurityDescriptorNode.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpRemoveSubKeyFromList @ 0x140692D44 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x14069316C (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140693584 (CmpAddToLeaf.c)
 *     CmpFreeKeyBody @ 0x140693868 (CmpFreeKeyBody.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpRemoveValueFromList @ 0x140695EF0 (CmpRemoveValueFromList.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     HvReallocateCell @ 0x1406975E0 (HvReallocateCell.c)
 *     CmpFreeValueData @ 0x140697754 (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x1406978F8 (CmpSetValueKeyExisting.c)
 *     CmpSetValueDataNew @ 0x140697D70 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x14069804C (CmpAddValueKeyNew.c)
 *     CmpFreeSecurityDescriptor @ 0x1406D5AA4 (CmpFreeSecurityDescriptor.c)
 *     CmpSetValueDataExisting @ 0x1406EAFC0 (CmpSetValueDataExisting.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSplitLeaf @ 0x14071F964 (CmpSplitLeaf.c)
 *     CmpCopyKeyPartial @ 0x14074DE30 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x14076840C (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x14086B794 (CmpCreateEmptyKey.c)
 *     CmpCopyValue @ 0x140874560 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140874844 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1408748E0 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14087564C (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x140875BD8 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140875DF0 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087681C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087AD10 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x140698B90 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x140699840 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1406999F8 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x140699E40 (HvpGetCellMap.c)
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
