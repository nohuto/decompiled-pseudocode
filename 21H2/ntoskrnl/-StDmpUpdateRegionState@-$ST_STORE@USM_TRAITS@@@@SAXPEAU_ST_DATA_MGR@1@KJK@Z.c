/*
 * XREFs of ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14028C1BC
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14028BF0C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14028DFD8 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14028E7DC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14029FD6C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B358 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14028DB08 (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // rbx
  unsigned int v8; // r8d
  __int64 result; // rax
  _DWORD *v10; // r10

  v4 = *(_QWORD *)(a1 + 1032);
  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = *(unsigned __int16 *)(v4 + 2LL * (unsigned int)a2);
  if ( *(_BYTE *)(a1 + 776) )
    result = 0LL;
  else
    result = v8 >> 13;
  *(_WORD *)(v4 + 2LL * (unsigned int)a2) = v5 + v8;
  v10 = (_DWORD *)(a1 + 16 * (result + 78));
  *(_DWORD *)(a1 + 8 * result + 1828) += v5;
  if ( *v10 != (_DWORD)a2 )
    result = ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
               a1,
               a2,
               v8 & 0x1FFF,
               *(_WORD *)(v4 + 2LL * (unsigned int)a2) & 0x1FFF);
  if ( v5 <= 0 )
  {
    if ( (*(_WORD *)(v4 + 2 * v6) & 0x1FFF) == 0 && (_DWORD)a2 != *v10 && !a4 )
      return ST_STORE<SM_TRAITS>::StReleaseRegion(a1, a2);
  }
  else if ( (_DWORD)a2 == *v10 )
  {
    v10[1] += v5;
  }
  return result;
}
