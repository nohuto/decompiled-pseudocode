/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14028A80C
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14024E85C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     SmKmStoreReferenceEx @ 0x14028A8EC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     KeQueryPriorityThread @ 0x14028B7A0 (KeQueryPriorityThread.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14029067C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2, int a3)
{
  unsigned int i; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // edi
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
          KeSetActualBasePriorityThread(v11, v10);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v7 + 80, v7 + 5976);
      }
      else if ( PriorityThread > (int)v10 )
      {
        KeSetActualBasePriorityThread(v11, v10);
      }
      v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v7 + 6016) & 0x3FF, v13, v14);
      ExReleaseRundownProtection(v15 + 1);
    }
  }
}
