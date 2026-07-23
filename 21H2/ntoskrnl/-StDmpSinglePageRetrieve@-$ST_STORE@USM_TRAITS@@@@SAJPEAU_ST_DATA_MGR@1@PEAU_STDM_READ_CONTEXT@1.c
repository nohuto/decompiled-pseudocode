/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14028F618
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14029007C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14059C76C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14028F36C (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     SmSetThreadSystemPagePriority @ 0x14028F83C (SmSetThreadSystemPagePriority.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14028F918 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14028FAB0 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14028FEBC (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14059BDFC (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r13d
  unsigned __int64 v7; // r15
  int v8; // ebx
  int v9; // edi
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // r14
  __int16 v13; // cx
  int v14; // edx
  unsigned int IsCurrentRegion; // eax
  unsigned int v16; // ebp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  struct _MDL *v25; // r10
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v28[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+8h]

  v27 = 0LL;
  v5 = a4 & 2 | 1;
  v28[0] = 0LL;
  v29 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v9 = ST_STORE<SM_TRAITS>::StDmpSinglePageLookup(a1, a2, a3, &v27);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v10 = v27;
  }
  v11 = *(_DWORD *)v10 & *(_DWORD *)(a1 + 808);
  v12 = (unsigned int)(*(_DWORD *)v10 >> *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v29 = SmSetThreadSystemPagePriority(v28, 0LL, 0LL);
    v8 = 1;
  }
  *(_DWORD *)a5 = *(_DWORD *)v10;
  v13 = 4096;
  v14 = *(_DWORD *)(v10 + 4) & 0xFFF;
  if ( v14 )
    v13 = v14;
  *(_WORD *)(a5 + 4) = v13;
  *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
  if ( *(_BYTE *)(a1 + 776) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) )
    {
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(a5 + 12) = *(unsigned __int16 *)(v10 + 6);
    }
  }
  else
  {
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 8);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
    IsCurrentRegion = 8;
  else
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, (unsigned int)v12);
  v16 = 16 * v11;
  if ( IsCurrentRegion == 8 )
  {
    v17 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v12, v16, a4, 1);
    v7 = v17;
    if ( v17 <= 3 )
    {
      v9 = -1073741550;
      if ( v17 == 1 )
        v9 = -2147483634;
      goto LABEL_20;
    }
    v18 = v17;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 16LL * IsCurrentRegion + 1256) + v16;
  }
  *(_QWORD *)(a2 + 56) = a3;
  v9 = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(a1, *(_QWORD *)(a2 + 16), v18 | v5, a4, *(_QWORD *)(a3 + 8), a5, a2);
  if ( v9 >= 0 )
    v9 = 0;
  if ( v7 )
  {
    v20 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v20 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v20, v12, v19, v20, v26, 0);
    }
    else
    {
      v22 = *(_QWORD *)(v20 + 6216);
      v23 = *(_QWORD *)(v22 + 8 * v12);
      v24 = v23 & 0xFFFFFFFFFFFFFFFEuLL;
      v25 = (struct _MDL *)(v23 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)(v22 + 8 * v12) = v24;
      if ( (v24 & 3) == 0 )
        SmFpFree(v20 + 6608, 5, (__int64)KeGetCurrentThread(), v25);
    }
  }
LABEL_20:
  if ( v8 )
    SmSetThreadSystemPagePriority(v28, v29, 1LL);
  return (unsigned int)v9;
}
