/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402928CC
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140288120 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14029287C (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059AFC8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14059C650 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B358 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1402755B4 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14028DB08 (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14028DFD8 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140290D48 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140292714 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int64 result; // rax
  __int16 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax

  v3 = (unsigned int)a3;
  v5 = (unsigned int *)(a1 + 16 * (a2 + 78LL));
  v6 = *v5;
  if ( (_DWORD)a3 == -1 )
  {
    v7 = 0LL;
    v8 = -1;
LABEL_3:
    *v5 = -1;
    if ( (_DWORD)v3 != (_DWORD)v6 && (_DWORD)v6 != -1 )
    {
      if ( !*(_BYTE *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v6, a3);
      v10 = *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6);
      if ( (v10 & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(a1, v6, 0, v10 & 0x1FFF);
      else
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6);
    }
    if ( (_DWORD)v3 != -1 )
    {
      if ( v8 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(a1, v3, v8, 0);
      if ( !*(_BYTE *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), 3LL, 0x1388u, 0xFFFFFFFE);
    }
    *v5 = v3;
    result = 0LL;
    v5[1] = v8;
    *((_QWORD *)v5 + 1) = v7;
    return result;
  }
  v11 = *(_QWORD *)(a1 + 1032);
  v12 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0);
  v7 = v12;
  if ( !v12 )
    return 3221225514LL;
  if ( v12 == -1 )
    return 3221226029LL;
  v8 = *(_WORD *)(v11 + 2 * v3) & 0x1FFF;
  if ( (*(_WORD *)(v11 + 2 * v3) & 0x1FFF) == 0 )
    goto LABEL_3;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v12, v3, v12, v3, 0);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
