/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14028A410
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14028A270 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 * Callees:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402865B4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1402891F0 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     SmIoRequestComplete @ 0x14028BB04 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140291B20 (SmAcquireReleaseResAvailForRead.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 *v4; // rbx
  unsigned int v7; // esi
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // rbp
  unsigned int v13; // r8d
  int v14; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax

  v4 = *(__int64 **)(a1 + 32);
  v7 = 1;
  if ( (unsigned __int64)v4 <= 1 )
    v8 = 0LL;
  else
    v8 = *v4;
  v9 = *(_DWORD *)a1;
  v10 = *(_DWORD *)a1 & 7;
  v11 = a3[1504] & 0x3FF;
  if ( (v10 & 0xFFFFFFFD) != 0 )
  {
    v12 = 0LL;
    v13 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_DWORD *)(v12 + 40) >> 12;
    if ( (_DWORD)v10 == 2 )
    {
      v4[1] = 0LL;
      v9 = *(_DWORD *)a1;
    }
  }
  v14 = v9 & 7;
  if ( v14 )
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = *(_DWORD *)(a1 + 8);
        v10 = *(_QWORD *)(a1 + 32);
        if ( (_BYTE)v18 )
        {
          *(_WORD *)(v10 + 8) = (unsigned __int8)v18;
          if ( (dword_140D240F0 & 8) != 0 )
            a4 = 0;
        }
        *(_DWORD *)v10 = a4;
        if ( (dword_140D240F0 & 0x10) != 0 )
          SmAcquireReleaseResAvailForRead(v4, v13, 1LL);
        goto LABEL_8;
      }
      v19 = v17 - 1;
      if ( !v19 )
      {
        *(_DWORD *)v4 = a4;
        v4[1] = *(unsigned int *)(a1 + 12);
        goto LABEL_8;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_8;
LABEL_29:
        *(_DWORD *)v4 = a4;
        v4[1] = 0LL;
        goto LABEL_8;
      }
      if ( (*(_DWORD *)(a1 + 8) & 7) != 0 )
        goto LABEL_29;
    }
    else if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(
        (__int64)&SmGlobals,
        (unsigned int *)(a1 + 8),
        *(_DWORD *)(a1 + 12),
        v11);
      *(_DWORD *)v4 = 0;
      goto LABEL_8;
    }
    return 0;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion((int)&SmGlobals, a1, v13, a3, a4);
LABEL_8:
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v12, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (dword_140D240F0 & 2) != 0 )
      SmFpFree(&dword_140D23FC0, 5LL, v4, v12);
  }
  if ( v8 )
    SmIoRequestComplete(v10, a1, v8, v4);
  return v7;
}
