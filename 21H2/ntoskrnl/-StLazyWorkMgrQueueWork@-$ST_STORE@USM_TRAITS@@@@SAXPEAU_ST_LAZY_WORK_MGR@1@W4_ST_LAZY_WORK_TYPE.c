/*
 * XREFs of ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1402755B4
 * Callers:
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140251AF8 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14027556C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x140290E5C (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402928CC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14059ACC4 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14059C9BC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140275324 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v4 = a1;
  v5 = a4;
  LOBYTE(a1) = 1;
  v6 = a3;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  v9 = UnbiasedInterruptTime;
  if ( (_DWORD)v5 == -1 )
  {
    v10 = -1LL;
    v11 = -1LL;
  }
  else
  {
    *(_QWORD *)(v4 + 24 * v8 + 16) = UnbiasedInterruptTime;
    v10 = UnbiasedInterruptTime + 10000 * v5;
    v11 = 10000 * v6;
  }
  *(_QWORD *)(v4 + 24 * v8) = v11;
  *(_QWORD *)(v4 + 24 * v8 + 8) = v10;
  result = *(unsigned int *)(v4 + 224);
  if ( (result & 1) == 0 )
    return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule((_QWORD *)v4, v9);
  return result;
}
