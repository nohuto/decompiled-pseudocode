/*
 * XREFs of HvFreeCell @ 0x140706E0C
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1403EFD44 (CmpDereferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x1405E1B48 (CmpGetSecurityDescriptorNode.c)
 *     CmpSetValueKeyExisting @ 0x14066C27C (CmpSetValueKeyExisting.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     HvReallocateCell @ 0x14066CE2C (HvReallocateCell.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406A4720 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A55B8 (CmpLightWeightCreateSetValueData.c)
 *     CmpRemoveValueFromList @ 0x1406C83E0 (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x1406E0F50 (CmpSetValueDataExisting.c)
 *     CmpFreeSecurityDescriptor @ 0x140701EC0 (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveSubKeyFromList @ 0x140702BC8 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x1407037B8 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140703C10 (CmpAddToLeaf.c)
 *     CmpFreeKeyBody @ 0x1407042D8 (CmpFreeKeyBody.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpFreeValueData @ 0x140705FFC (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x140706124 (CmpFreeValue.c)
 *     CmpSetValueDataNew @ 0x1407061A0 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x14070647C (CmpAddValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSplitLeaf @ 0x14072F814 (CmpSplitLeaf.c)
 *     CmpCopyKeyPartial @ 0x1407610A0 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x140778DFC (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpCopyValue @ 0x14087B3A0 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x14087B684 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x14087B720 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14087C4AC (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x14087CA38 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14087CC5C (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087D688 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1408819A4 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140881BA4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x140706FC0 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x140707930 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140707AE8 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x140707F30 (HvpGetCellMap.c)
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
