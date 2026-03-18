/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14035A68C
 * Callers:
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1402586BC (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14025C760 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140359448 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1403599FC (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140256F90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmEtwEnabled @ 0x140258658 (SmEtwEnabled.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140317310 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14035A4FC (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14059AC24 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x14059BEC0 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  int v7; // eax
  ULONGLONG *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdi
  void *v11; // rbx
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  v12 = 0;
  if ( *(_BYTE *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
    {
      v7 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0, a4);
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 6216);
      v11 = (void *)(*(_QWORD *)(v10 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v11, 0);
      ExFreePoolWithTag(v11, 0);
      v7 = 0;
      *(_QWORD *)(v10 + 8 * v4) = 0LL;
    }
    if ( v7 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v4, 1LL);
    v8 = SmEtwEnabled(0);
    if ( v8 )
      SmEtwLogRegionOp((_DWORD)v8, 5, a1, v4, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v4), 0);
    if ( (unsigned int)v4 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v4;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v9 = 0;
  else
    v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v4) >> 13;
  --*(_DWORD *)(a1 + 8LL * v9 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v4) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v12, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v12) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
