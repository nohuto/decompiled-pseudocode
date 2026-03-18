/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1403790A8
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14023814C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14038F99C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405F80DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140379208 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1403792A8 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140379A64 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14038770C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14039050C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405F7240 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405FA244 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int VirtualRegion; // eax
  int v11; // edx
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rdi
  int v15; // r8d
  int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-28h]

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
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
        || !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v5) )
      {
        SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v5, 0, v13, 2);
        return v14;
      }
      v14 = -1LL;
      if ( *(_BYTE *)(a1 + 776) )
        v17 = 0;
      else
        v17 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
      v18 = *(_QWORD *)(a1 + 800);
      if ( (*(_BYTE *)(v18 + 6021) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v18, v5, v15, v18, v23, (16 * v17) | 4);
      }
      else
      {
        v19 = *(_QWORD *)(v18 + 6216);
        v20 = *(_QWORD *)(v19 + 8 * v5);
        v21 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
        v22 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
        *(_QWORD *)(v19 + 8 * v5) = v21;
        if ( (v21 & 3) == 0 )
          SmFpFree(v18 + 6608, 5LL, KeGetCurrentThread(), v22);
      }
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL);
      v14 = (v14 != 1) - 1LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
  return v14;
}
