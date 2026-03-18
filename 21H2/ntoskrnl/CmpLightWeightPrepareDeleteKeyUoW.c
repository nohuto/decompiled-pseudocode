/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x140923D00
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14065E380 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14065E480 (CmpLightWeightCreateModificationData.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14067E8A8 (CmpCleanupDiscardReplaceContext.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CF4C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  struct _PRIVILEGE_SET *v6; // rsi
  ULONG_PTR v7; // rbp
  unsigned int *v8; // rdi
  int v9; // eax
  int v10; // ebx
  ULONG_PTR v11; // r12
  __int64 CellFlat; // rax
  struct _LOOKASIDE_LIST_EX *v13; // r9
  __int64 v14; // rax
  _QWORD *TransientPoolWithTag; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1[6] + 32);
  v8 = *(unsigned int **)(a1[10] + 104);
  v20 = v8;
  if ( v8 )
  {
    ++*v8;
  }
  else
  {
    v9 = CmpLightWeightCreateModificationData((__int64)a1, &v20, a3, a4);
    v8 = v20;
    v10 = v9;
    if ( v9 < 0 )
      goto LABEL_23;
  }
  v11 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v11, &v19);
  else
    CellFlat = HvpGetCellPaged(v7, v11, (unsigned int *)&v19);
  if ( !CellFlat )
  {
LABEL_9:
    v10 = -1073741670;
    goto LABEL_23;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v19);
  else
    HvpReleaseCellPaged(v7, (unsigned int *)&v19);
  v10 = CmpMarkKeyDirty(v7, (unsigned int)v11, 0);
  if ( v10 < 0 )
    goto LABEL_23;
  v10 = HvpMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0);
  if ( v10 < 0 )
    goto LABEL_23;
  v14 = *(_QWORD *)(a1[6] + 192);
  if ( v14 && *(_QWORD *)(v14 + 32) != v14 + 32 )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x31374D43u, v13);
    v6 = (struct _PRIVILEGE_SET *)TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      goto LABEL_9;
    *TransientPoolWithTag = 0LL;
    v16 = (__int64)TransientPoolWithTag;
    *((_DWORD *)TransientPoolWithTag + 3) = 0;
    TransientPoolWithTag[3] = 0LL;
    *((_DWORD *)TransientPoolWithTag + 2) = -1073741823;
    v17 = TransientPoolWithTag + 2;
    v17[1] = v17;
    *v17 = v17;
    v10 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v16);
    if ( v10 < 0 )
      goto LABEL_22;
  }
  if ( CmpRemoveSubKeyFromList(v7, &v8[(v11 >> 31) + 3], v11) )
  {
    --v8[(v11 >> 31) + 1];
    v10 = 0;
    a1[13] = (__int64)v8;
    a1[14] = (__int64)v6;
    return (unsigned int)v10;
  }
  v10 = -1073741670;
  if ( v6 )
  {
LABEL_22:
    CmpCleanupDiscardReplaceContext(v6, a2);
    CmSiFreeMemory(v6);
  }
LABEL_23:
  if ( v8 )
    CmpLightWeightCleanupModifyKeyDataUoW(v7, v8);
  return (unsigned int)v10;
}
