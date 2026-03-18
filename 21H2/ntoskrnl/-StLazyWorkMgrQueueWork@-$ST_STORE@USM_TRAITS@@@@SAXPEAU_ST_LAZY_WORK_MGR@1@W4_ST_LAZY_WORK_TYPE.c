/*
 * XREFs of ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1403812F8
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14023814C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FA00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1403812B0 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140390A50 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1403944E0 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14045F42A (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1405FA31C (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1403814C4 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v10 = UnbiasedInterruptTime;
  if ( (_DWORD)v5 == -1 )
  {
    v11 = -1LL;
    v12 = -1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24 * v9 + 16) = UnbiasedInterruptTime;
    v11 = UnbiasedInterruptTime + 10000 * v5;
    v12 = 10000 * v6;
  }
  *(_QWORD *)(a1 + 24 * v9) = v12;
  *(_QWORD *)(a1 + 24 * v9 + 8) = v11;
  result = *(unsigned int *)(a1 + 224);
  if ( (result & 1) == 0 )
    return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(a1, v10, v8);
  return result;
}
