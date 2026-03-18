/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14039050C
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14023814C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1403790A8 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14038032C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14038F99C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140240FB0 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     SmEtwEnabled @ 0x140261818 (SmEtwEnabled.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1403905FC (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405FA244 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x1405FB2F0 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  ULONGLONG *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  void *v10; // rbx
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v11 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v5 + 6021) & 4) != 0 )
    {
      v6 = a2;
      if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0LL) == -1073741650 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL);
    }
    else
    {
      v9 = *(_QWORD *)(v5 + 6216);
      v10 = (void *)(*(_QWORD *)(v9 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(v9 + 8 * v2) = 0LL;
      v6 = v4;
    }
    v7 = SmEtwEnabled(0);
    if ( v7 )
      SmEtwLogRegionOp((_DWORD)v7, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6), 0);
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v2;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v8 = 0;
  else
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v8 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v11, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v11) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
