/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x1406585D4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406584F8 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140658158 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140692AA4 (CmpCleanupDiscardReplaceContext.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087A740 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 NextElement; // rax
  __int64 v6; // rbx
  unsigned int *v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  unsigned int *v10; // rcx
  ULONG_PTR v11; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v12 = 0LL;
    v3 = a1 + 16;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            NextElement = CmListGetNextElement(v3, &v12, 0LL);
            v6 = NextElement;
            if ( !NextElement )
              return;
            v7 = *(unsigned int **)(NextElement + 104);
          }
          while ( !v7 );
          v8 = *(_DWORD *)(NextElement + 68);
          if ( !v8 )
          {
LABEL_16:
            CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL));
            v7 = *(unsigned int **)(v6 + 104);
            goto LABEL_17;
          }
          if ( v8 != 1 )
            break;
LABEL_23:
          *(_QWORD *)(v6 + 104) = 0LL;
        }
        if ( v8 != 2 )
          break;
LABEL_17:
        if ( v7 )
        {
          CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL));
          *(_QWORD *)(v6 + 104) = 0LL;
        }
        v9 = *(_QWORD *)(v6 + 112);
        if ( v9 )
        {
          CmpCleanupDiscardReplaceContext(v9, a3);
          CmSiFreeMemory(*(PPRIVILEGE_SET *)(v6 + 112));
          goto LABEL_21;
        }
      }
      if ( v8 == 3 )
        goto LABEL_23;
      if ( v8 > 3 )
      {
        if ( v8 <= 6 )
        {
          CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), v7);
          v10 = *(unsigned int **)(v6 + 112);
          *(_QWORD *)(v6 + 104) = 0LL;
          if ( v10 )
          {
            v11 = *v10;
            if ( (_DWORD)v11 != -1 )
            {
              CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), v11);
              v10 = *(unsigned int **)(v6 + 112);
            }
            CmpFreeTransientPoolWithTag(v10, 0x77554D43u);
LABEL_21:
            *(_QWORD *)(v6 + 112) = 0LL;
          }
        }
        else
        {
          switch ( v8 )
          {
            case 9:
              ExFreePoolWithTag(v7, 0x77554D43u);
              goto LABEL_23;
            case 10:
              goto LABEL_23;
            case 12:
              goto LABEL_16;
          }
        }
      }
    }
  }
}
