/*
 * XREFs of ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x140290E5C
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1402903D4 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14027556C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1402755B4 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14028E7DC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombinePageRecords(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebp
  char v9; // al
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rcx

  if ( (a2[1] & 0xFFFFF000) != 0x1000 )
    __int2c();
  v8 = ((_DWORD)a4 - *(_DWORD *)(a1 + 472) - ((unsigned int)a4 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)a2);
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, a4);
  if ( (int)ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, (unsigned __int64)a2, a3) < 0 )
    __int2c();
  *a2 = -1;
  a2[1] = v8;
  v9 = *(_BYTE *)(a1 + 1905);
  v10 = *(_DWORD *)(a1 + 1896) + 1;
  *(_DWORD *)(a1 + 1896) = v10;
  if ( (v9 & 3) == 0 && v10 > 0x400 )
  {
    v12 = *(_QWORD *)(a1 + 1912);
    *(_BYTE *)(a1 + 1905) = v9 & 0xFC | 1;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v12, 5LL, 0x7530u, 0xFFFFFFFE);
  }
  if ( (*(_DWORD *)(a4 + 4) & 0xFFFFF000) >= 0xFFFFF000 )
    __int2c();
  result = (unsigned int)(*(_DWORD *)(a4 + 4) + 4096);
  *(_DWORD *)(a4 + 4) = result;
  return result;
}
