/*
 * XREFs of CmpLightWeightPrepareAddKeyUoW @ 0x140881E9C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406A4414 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyToList @ 0x140703A3C (CmpAddSubKeyToList.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140707168 (HvAllocateCell.c)
 *     CmpCopyKeyPartial @ 0x1407610A0 (CmpCopyKeyPartial.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408815A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140881CF4 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareAddKeyUoW(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v5; // r15d
  __int64 v6; // rax
  unsigned int v7; // ebx
  _WORD *v8; // r13
  ULONG_PTR v9; // rsi
  __int64 v10; // rax
  unsigned int *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r12
  __int64 (__fastcall *v15)(ULONG_PTR, _QWORD, _DWORD *); // rax
  unsigned int *v16; // r12
  unsigned int v17; // r13d
  unsigned int Cell; // edx
  _WORD *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // [rsp+28h] [rbp-30h]
  _DWORD v24[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v25; // [rsp+48h] [rbp-10h]
  unsigned int v26; // [rsp+A0h] [rbp+48h]
  int v27; // [rsp+A8h] [rbp+50h] BYREF
  int v28; // [rsp+ACh] [rbp+54h]
  unsigned int *v29; // [rsp+B0h] [rbp+58h] BYREF
  _WORD *v30; // [rsp+B8h] [rbp+60h] BYREF

  v24[1] = 0;
  v28 = 0;
  v5 = -1;
  v24[0] = -1;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 72);
  v27 = -1;
  v26 = v7;
  v8 = 0LL;
  v9 = *(_QWORD *)(v6 + 32);
  v10 = *(_QWORD *)(a1 + 80);
  v30 = 0LL;
  v11 = *(unsigned int **)(v10 + 104);
  v29 = v11;
  if ( v11 )
  {
    ++*v11;
  }
  else
  {
    v12 = CmpLightWeightCreateModificationData(a1, &v29, a3, a4);
    v11 = v29;
    v13 = v12;
    if ( v12 < 0 )
      goto LABEL_23;
    v7 = v26;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  v15 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8);
  v25 = v14;
  v29 = (unsigned int *)v15(v9, *(unsigned int *)(v14 + 40), v24);
  if ( !v29 )
  {
    v13 = -1073741670;
    goto LABEL_23;
  }
  if ( !HvMarkCellDirty(v9, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1)
    || !HvMarkCellDirty(v9, *(unsigned int *)(v14 + 40), 1)
    || !HvMarkCellDirty(v9, v29[v7 + 7], 1) )
  {
    v13 = -1073741443;
    goto LABEL_19;
  }
  v16 = &v11[v7];
  if ( v16[3] != -1 )
  {
LABEL_14:
    v20 = CmpCopyKeyPartial(v9, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), v9, *(_DWORD *)(v25 + 40), 38, v23, v26);
    v5 = v20;
    if ( v20 == -1 || !CmpAddSubKeyToList(v9, v16 + 3, v20) )
    {
      v13 = -1073741670;
    }
    else
    {
      ++v11[v7 + 1];
      v13 = 0;
      v21 = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v21 + 40);
      *(_DWORD *)(v21 + 40) = v5;
      v5 = -1;
      *(_QWORD *)(a1 + 104) = v11;
      v11 = 0LL;
    }
    goto LABEL_19;
  }
  v17 = *(_DWORD *)(v9 + 212);
  Cell = HvAllocateCell(v9, 12, v26, (__int64)&v30, (__int64)&v27);
  if ( Cell != -1 )
  {
    v19 = v30;
    *v30 = v17 < 5 ? 26220 : 26732;
    v19[1] = 0;
    v16[3] = Cell;
    v11[v7 + 1] = 0;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v27);
    v8 = 0LL;
    goto LABEL_14;
  }
  v8 = v30;
  v13 = -1073741670;
LABEL_19:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v24);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v27);
  if ( v5 != -1 )
    CmpFreeKeyByCell(v9, v5, 0);
LABEL_23:
  if ( v11 )
  {
    CmpLightWeightCleanupModifyKeyDataUoW(v9, v11);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return v13;
}
