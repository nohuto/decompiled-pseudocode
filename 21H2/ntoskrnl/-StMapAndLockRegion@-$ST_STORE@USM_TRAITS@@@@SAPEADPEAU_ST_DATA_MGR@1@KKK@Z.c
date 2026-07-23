/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140292714
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B0E4 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402928CC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A508 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B358 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14022B578 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14028F918 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14028FAB0 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140292674 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140599730 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14059C884 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r15d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int VirtualRegion; // eax
  int v11; // edx
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rdi
  int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  struct _MDL *v23; // rdx
  int v24; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v9 + 6021) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v9, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v9, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1824);
    if ( !*(_BYTE *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v11 = 0;
  else
    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v12 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v5, 0, a4, a4 | (v11 << 7) | 0x10u);
  v14 = v12;
  if ( v12 )
  {
    if ( ((v12 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v5) )
      {
        SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v5, 0, v13, 2);
        return v14;
      }
      v16 = -1LL;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL);
      v16 = (v14 != 1) - 1LL;
      v14 = 0LL;
    }
    if ( v14 )
    {
      if ( *(_BYTE *)(a1 + 776) )
        v18 = 0;
      else
        v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
      v19 = *(_QWORD *)(a1 + 800);
      if ( (*(_BYTE *)(v19 + 6021) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v19, v5, v15, v19, v24, (16 * v18) | 4);
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 6216);
        v21 = *(_QWORD *)(v20 + 8 * v5);
        v22 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
        v23 = (struct _MDL *)(v21 & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)(v20 + 8 * v5) = v22;
        if ( (v22 & 3) == 0 )
          SmFpFree(v19 + 6608, 5, (__int64)KeGetCurrentThread(), v23);
      }
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v5);
  return v16;
}
