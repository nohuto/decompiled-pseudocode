/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140290D48
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B0E4 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402928CC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A508 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14028F918 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  struct _MDL *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  struct _MDL *v15; // rdx
  int v16; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 800);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 6021) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v3, a2, a3, v3, v16, 1u);
  }
  else
  {
    v12 = *(_QWORD *)(v3 + 6216);
    v13 = *(_QWORD *)(v12 + 8LL * a2);
    v14 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
    v15 = (struct _MDL *)(v13 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v12 + 8 * v5) = v14;
    if ( (v14 & 3) == 0 )
      SmFpFree(v3 + 6608, 5, (__int64)KeGetCurrentThread(), v15);
  }
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 776) )
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v7 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v5, a3, v7, v16, (16 * v6) | 4);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 6216);
    v9 = *(_QWORD *)(v8 + 8 * v5);
    v10 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    v11 = (struct _MDL *)(v9 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v8 + 8 * v5) = v10;
    if ( (v10 & 3) == 0 )
      SmFpFree(v7 + 6608, 5, (__int64)KeGetCurrentThread(), v11);
  }
}
