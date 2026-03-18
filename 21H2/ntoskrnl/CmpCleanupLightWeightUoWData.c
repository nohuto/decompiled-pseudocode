/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x14065CFD4
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14065CF84 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpDereferenceSecurityNode @ 0x1402A2104 (CmpDereferenceSecurityNode.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14065DDC4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14065E380 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14067E8A8 (CmpCleanupDiscardReplaceContext.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 68);
    switch ( v6 )
    {
      case 0:
        goto LABEL_11;
      case 1:
        goto LABEL_24;
      case 2:
        goto LABEL_12;
      case 3:
LABEL_24:
        *(_QWORD *)(a1 + 104) = 0LL;
        return;
    }
    if ( v6 <= 3 )
      return;
    if ( v6 <= 6 )
    {
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
LABEL_15:
        *(_QWORD *)(a1 + 112) = 0LL;
      }
    }
    else
    {
      if ( v6 != 9 )
      {
        if ( v6 != 10 )
        {
          if ( v6 != 12 )
            return;
LABEL_11:
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = *(_DWORD *)(a1 + 88);
          *(_DWORD *)(a1 + 88) = 0;
          v3 = *(ULONG_PTR **)(a1 + 104);
          if ( !v3 )
          {
LABEL_13:
            v7 = *(_QWORD *)(a1 + 112);
            if ( !v7 )
              return;
            CmpCleanupDiscardReplaceContext(v7, a3);
            CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
            goto LABEL_15;
          }
LABEL_12:
          CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v3);
          *(_QWORD *)(a1 + 104) = 0LL;
          goto LABEL_13;
        }
        goto LABEL_24;
      }
      v8 = *(unsigned int *)v3;
      if ( (_DWORD)v8 != -1 )
        CmpDereferenceSecurityNode(v3[1], v8);
      ExFreePoolWithTag(v3, 0x77554D43u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
}
