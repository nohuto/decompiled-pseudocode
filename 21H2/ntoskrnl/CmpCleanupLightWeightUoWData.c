/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x1405E17F4
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x1405DF3A4 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceSecurityNode @ 0x1403F086C (CmpDereferenceSecurityNode.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1405E1CE0 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140660F20 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087EC24 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpCleanupLightWeightUoWData(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  ULONG_PTR v8; // rdx
  unsigned int *v9; // rcx
  ULONG_PTR v10; // rdx

  v3 = *(ULONG_PTR **)(a1 + 104);
  if ( !v3 )
    return;
  v6 = *(_DWORD *)(a1 + 68);
  switch ( v6 )
  {
    case 0:
      goto LABEL_11;
    case 1:
      goto LABEL_25;
    case 2:
      goto LABEL_12;
    case 3:
LABEL_25:
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
  }
  if ( v6 <= 3 )
    return;
  if ( v6 > 6 )
  {
    if ( v6 == 9 )
    {
      v8 = *(unsigned int *)v3;
      if ( (_DWORD)v8 != -1 )
        CmpDereferenceSecurityNode(v3[1], v8);
      ExFreePoolWithTag(v3, 0x77554D43u);
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
    }
    if ( v6 != 10 )
    {
      if ( v6 != 12 )
        return;
LABEL_11:
      CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 88) = 0;
      v3 = *(ULONG_PTR **)(a1 + 104);
LABEL_12:
      if ( v3 )
      {
        CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v7 = *(_QWORD *)(a1 + 112);
      if ( v7 )
      {
        CmpCleanupDiscardReplaceContext(v7, a3);
        CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
LABEL_16:
        *(_QWORD *)(a1 + 112) = 0LL;
        return;
      }
      return;
    }
    goto LABEL_25;
  }
  CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v3);
  v9 = *(unsigned int **)(a1 + 112);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v9 )
  {
    v10 = *v9;
    if ( (_DWORD)v10 != -1 )
    {
      CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v10);
      v9 = *(unsigned int **)(a1 + 112);
    }
    CmpFreeTransientPoolWithTag(v9, 0x77554D43u);
    goto LABEL_16;
  }
}
