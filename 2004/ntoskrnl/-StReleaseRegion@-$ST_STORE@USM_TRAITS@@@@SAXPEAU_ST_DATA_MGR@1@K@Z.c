/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140301CF8
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140302CE4 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1403033A0 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140308520 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14030A7AC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402D0D38 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140301E40 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     SmEtwEnabled @ 0x1403084BC (SmEtwEnabled.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140346024 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140597184 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x140598420 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdi
  void *v9; // rbx
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v10 = 0;
  if ( *(_BYTE *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v4 + 6021) & 4) != 0 )
    {
      v5 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0LL);
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 6216);
      v9 = (void *)(*(_QWORD *)(v8 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v9);
      ExFreePoolWithTag(v9, 0);
      v5 = 0;
      *(_QWORD *)(v8 + 8 * v2) = 0LL;
    }
    if ( v5 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL);
    v6 = SmEtwEnabled(0LL);
    if ( v6 )
      SmEtwLogRegionOp(v6, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2), 0);
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v2;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v7 = 0;
  else
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v7 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v10, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v10) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
