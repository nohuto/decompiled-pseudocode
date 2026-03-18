/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x1409239EC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14065E380 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14065E3D4 (CmpLightWeightSwapParentSubKeyList.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSearchForOpenSubKeys @ 0x14069E3E0 (CmpSearchForOpenSubKeys.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x14092183C (CmpUpdateParentForEachSon.c)
 */

void __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rsi
  ULONG_PTR v11; // rdx
  __int64 CellPaged; // rax
  __int64 v13; // r8
  unsigned __int16 v14; // cx
  int v15; // eax
  unsigned int *v16; // rsi
  ULONG_PTR v17; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v19 = 0xFFFFFFFFLL;
  v6 = a1[6];
  v20 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(v6 + 32);
  CmpUpdateParentForEachSon(v7, *(unsigned int *)(v6 + 40));
  ++*(_QWORD *)(a1[6] + 304);
  v8 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v8, &v19);
  else
    CellFlat = HvpGetCellPaged(v7, v8, (unsigned int *)&v19);
  v10 = CellFlat;
  *(_DWORD *)(CellFlat + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  v11 = *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v7, v11, &v20);
  else
    CellPaged = HvpGetCellPaged(v7, v11, (unsigned int *)&v20);
  v13 = CellPaged;
  *(_QWORD *)(CellPaged + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 304LL);
  v14 = 2 * *(_WORD *)(v10 + 72);
  v15 = *(_DWORD *)(CellPaged + 52);
  if ( (*(_BYTE *)(v10 + 2) & 0x20) == 0 )
    v14 = *(_WORD *)(v10 + 72);
  if ( (unsigned __int16)v15 < (unsigned int)v14 )
  {
    *(_WORD *)(v13 + 52) = v14;
    *(_WORD *)(*(_QWORD *)(a1[6] + 72) + 176LL) = v14;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v19);
  else
    HvpReleaseCellPaged(v7, (unsigned int *)&v19);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v20);
  else
    HvpReleaseCellPaged(v7, (unsigned int *)&v20);
  v18[1] = a1[6];
  v18[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    v7,
    a3,
    (__int64)v18,
    0);
  CmpSearchForOpenSubKeys(a1[6], 1, 0LL);
  HvFreeCell(v7, *(unsigned int *)(a1[11] + 40));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8LL, a3, 1);
  CmpMarkKeyUnbacked(a1[11], a3);
  CmpDiscardKcb(a1[11]);
  v16 = (unsigned int *)a1[13];
  if ( *v16 == 1 )
    CmpLightWeightSwapParentSubKeyList(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v7, v16);
  v17 = a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v17, a3, 0);
  CmpDereferenceKeyControlBlockWithLock(a1[11], a3, 0);
}
