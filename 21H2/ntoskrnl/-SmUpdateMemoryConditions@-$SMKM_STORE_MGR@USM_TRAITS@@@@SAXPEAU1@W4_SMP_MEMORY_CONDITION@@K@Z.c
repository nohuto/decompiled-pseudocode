/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402D94BC
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402712E4 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402D04DC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     SmKmStoreReferenceEx @ 0x1402D959C (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1402D95D8 (SmKmStoreRefFromStoreIndex.c)
 *     KeQueryPriorityThread @ 0x1402DA450 (KeQueryPriorityThread.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402DF32C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2, int a3)
{
  unsigned int i; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  int v10; // edi
  struct _KTHREAD *v11; // r15
  KPRIORITY PriorityThread; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  struct _EX_RUNDOWN_REF *v15; // rax

  if ( (*(_DWORD *)(a1 + 1840) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition((PEX_SPIN_LOCK)(a1 + 1264), a2, a3);
  for ( i = 0; i < 0x400; ++i )
  {
    v6 = SmKmStoreReferenceEx(a1, i);
    v7 = v6;
    if ( v6 )
    {
      *(_BYTE *)(v6 + 6022) = a2;
      v8 = *(unsigned __int8 *)(v6 + 6022);
      v9 = *(unsigned __int8 *)(v6 + 6022);
      if ( v8 == 4 )
        v10 = *(_DWORD *)(v7 + 6728);
      else
        v10 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v9);
      v11 = *(struct _KTHREAD **)(v7 + 6200);
      PriorityThread = KeQueryPriorityThread(v11);
      if ( a2 < 4 )
      {
        if ( PriorityThread != v10 )
          KeSetActualBasePriorityThread((__int64)v11, v10);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v7 + 80, v7 + 5976);
      }
      else if ( PriorityThread > v10 )
      {
        KeSetActualBasePriorityThread((__int64)v11, v10);
      }
      v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v7 + 6016) & 0x3FF, v13, v14);
      ExReleaseRundownProtection_0(v15 + 1);
    }
  }
}
