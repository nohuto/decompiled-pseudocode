/*
 * XREFs of HvFreeCell @ 0x140709534
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1403F06FC (CmpDereferenceSecurityNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     HvReallocateCell @ 0x1406663B0 (HvReallocateCell.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x140666C88 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x140668BE4 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x140668E74 (CmpSetValueDataNew.c)
 *     CmpAddToLeaf @ 0x140669B1C (CmpAddToLeaf.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x14066B438 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x14066B4B4 (CmpFreeValueData.c)
 *     CmpFreeKeyBody @ 0x14066B5DC (CmpFreeKeyBody.c)
 *     CmpRemoveSubKeyFromList @ 0x14066B670 (CmpRemoveSubKeyFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x14066C518 (CmpFreeSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406A4210 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A4644 (CmpLightWeightCreateSetValueData.c)
 *     CmpRemoveValueFromList @ 0x1406A54A0 (CmpRemoveValueFromList.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406B1544 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpSetValueDataExisting @ 0x1406C145C (CmpSetValueDataExisting.c)
 *     CmpAddValueKeyNew @ 0x140709FA0 (CmpAddValueKeyNew.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071D4D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407292B0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSplitLeaf @ 0x140733848 (CmpSplitLeaf.c)
 *     CmpCopyKeyPartial @ 0x14076F88C (CmpCopyKeyPartial.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpCopyValue @ 0x140878D20 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140879004 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1408790A0 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140879E2C (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x14087A3B0 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14087A5D4 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087B020 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087EEC4 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087F0BC (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HvpRemoveFreeCellHint @ 0x140708130 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1407082E8 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x140708730 (HvpGetCellMap.c)
 *     HvpIsFreeNeighbor @ 0x1407096E0 (HvpIsFreeNeighbor.c)
 */

char __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  volatile signed __int64 *v2; // r14
  ULONG_PTR v3; // rdi
  __int64 v5; // r15
  __int64 CellMap; // rax
  _QWORD *v7; // r10
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  _DWORD *v11; // rbx
  unsigned int v12; // edi
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r11d
  __int64 v22; // rax
  int v23; // r8d
  _DWORD BugCheckParameter3a[18]; // [rsp+30h] [rbp-48h]
  int v25; // [rsp+98h] [rbp+20h]

  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v3 = (unsigned int)BugCheckParameter3;
  v5 = 0LL;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  CellMap = HvpGetCellMap(BugCheckParameter2, v3);
  v7 = (_QWORD *)CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x62EuLL);
  v8 = *(_QWORD *)(CellMap + 8);
  v9 = (unsigned int)v3 >> 31;
  v10 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v8 & 4) != 0 )
  {
    v20 = *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFF0uLL) + 4);
    v21 = v20 + *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    while ( v20 < v21 )
    {
      v22 = HvpGetCellMap(BugCheckParameter2, v20);
      *(_QWORD *)(v22 + 8) &= ~4uLL;
      v20 = v23 + 4096;
    }
  }
  v11 = (_DWORD *)(v10 + *v7 + (v3 & 0xFFF));
  *v11 = -*v11;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v14 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
    v15 = MEMORY[0];
    MEMORY[0] += *v11;
    v11 = 0LL;
    *(&v25 + v14) = v15;
    BugCheckParameter3a[v14] = v3 - v15;
  }
  while ( (unsigned int)v5 < 2 );
  v12 = (_DWORD)v11 + *(_DWORD *)(v10 + 4) + (v9 << 31) - v10;
  if ( (_DWORD)v5 )
  {
    v16 = 0LL;
    do
    {
      v17 = (*(unsigned int *)((char *)&v25 + v16 * 4) >> 3) - 1;
      if ( (unsigned int)v17 >= 0x10 )
      {
        v18 = (unsigned int)v17 >> 4;
        if ( v18 > 0xFF )
        {
          v17 = 23LL;
        }
        else
        {
          _BitScanReverse(&v19, v18);
          v17 = v19 + 16;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter2, (unsigned int)BugCheckParameter3a[v16++], v17, v9, v12);
      --v5;
    }
    while ( v5 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v12, (unsigned int)*v11, v9);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
