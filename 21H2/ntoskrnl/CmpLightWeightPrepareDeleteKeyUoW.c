/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F770
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140660490 (CmpRemoveSubKeyFromList.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140660F20 (CmpCleanupDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876558 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087EC24 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14087F36C (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  struct _PRIVILEGE_SET *v4; // rsi
  ULONG_PTR v7; // r14
  unsigned int *v8; // rdi
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r15
  struct _LOOKASIDE_LIST_EX *v12; // r9
  __int64 v13; // rax
  _QWORD *TransientPoolWithTag; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int *v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+60h] [rbp+18h] BYREF
  int v20; // [rsp+64h] [rbp+1Ch]

  v19 = -1;
  v20 = 0;
  v4 = 0LL;
  v7 = *(_QWORD *)(a1[6] + 32);
  v8 = *(unsigned int **)(a1[10] + 104);
  v18 = v8;
  if ( v8 )
  {
    ++*v8;
LABEL_5:
    v11 = *(unsigned int *)(a1[6] + 40);
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, int *))(v7 + 8))(v7, v11, &v19) )
    {
LABEL_6:
      v10 = -1073741670;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v19);
    if ( !CmpMarkKeyDirty(v7, (unsigned int)v11, 0)
      || !HvMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0) )
    {
      v10 = -1073741443;
      goto LABEL_18;
    }
    v13 = *(_QWORD *)(a1[6] + 192);
    if ( !v13 || *(_QWORD *)(v13 + 32) == v13 + 32 )
      goto LABEL_24;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x31374D43u, v12);
    v4 = (struct _PRIVILEGE_SET *)TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      goto LABEL_6;
    *TransientPoolWithTag = 0LL;
    v15 = (__int64)TransientPoolWithTag;
    *((_DWORD *)TransientPoolWithTag + 3) = 0;
    TransientPoolWithTag[3] = 0LL;
    *((_DWORD *)TransientPoolWithTag + 2) = -1073741823;
    v16 = TransientPoolWithTag + 2;
    v16[1] = v16;
    *v16 = v16;
    v10 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v15);
    if ( v10 >= 0 )
    {
LABEL_24:
      if ( CmpRemoveSubKeyFromList(v7, (int *)&v8[(v11 >> 31) + 3], v11) )
      {
        --v8[(v11 >> 31) + 1];
        v10 = 0;
        a1[13] = (__int64)v8;
        a1[14] = (__int64)v4;
        return (unsigned int)v10;
      }
      v10 = -1073741670;
    }
    if ( v4 )
    {
      CmpCleanupDiscardReplaceContext(v4, a2);
      CmSiFreeMemory(v4);
    }
    goto LABEL_18;
  }
  v9 = CmpLightWeightCreateModificationData((__int64)a1, &v18, a3, a4);
  v8 = v18;
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_5;
LABEL_18:
  if ( v8 )
    CmpLightWeightCleanupModifyKeyDataUoW(v7, v8);
  return (unsigned int)v10;
}
