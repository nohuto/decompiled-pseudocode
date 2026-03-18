/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140304CF4
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140302CE4 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14030A7AC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140594E08 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140305B0C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  struct _MDL *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  struct _MDL *v14; // rdx

  v3 = *(_QWORD *)(a1 + 800);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 6021) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v3, a2, a3, v3);
  }
  else
  {
    v11 = *(_QWORD *)(v3 + 6216);
    v12 = *(_QWORD *)(v11 + 8LL * a2);
    v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
    v14 = (struct _MDL *)(v12 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v11 + 8 * v5) = v13;
    if ( (v13 & 3) == 0 )
      SmFpFree(v3 + 6608, 5, (__int64)KeGetCurrentThread(), v14);
  }
  v6 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v5, a3, v6);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 6216);
    v8 = *(_QWORD *)(v7 + 8 * v5);
    v9 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
    v10 = (struct _MDL *)(v8 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v7 + 8 * v5) = v9;
    if ( (v9 & 3) == 0 )
      SmFpFree(v6 + 6608, 5, (__int64)KeGetCurrentThread(), v10);
  }
}
