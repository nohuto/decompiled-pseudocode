/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059BE40
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14029FD6C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A508 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14022B444 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14022B578 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     SmWorkQueueGetDepth @ 0x14028F33C (SmWorkQueueGetDepth.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14028FAB0 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14029067C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14059BDFC (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, unsigned __int64 a3)
{
  int v4; // ecx
  int v6; // ebx
  unsigned int v7; // ebp
  char v8; // di
  unsigned int v9; // r10d
  __int64 v10; // rdx
  unsigned int v11; // r9d
  _DWORD *v12; // r11
  _DWORD *v13; // r8
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // r10
  _DWORD *v17; // r8
  unsigned int v18; // ecx
  unsigned int i; // eax
  unsigned int v20; // r13d
  __int64 v21; // r12
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdi
  void *v25; // rbx
  __int64 v26; // rcx
  int v27; // r9d
  int v28; // edx
  __int16 v29; // ax
  int v31; // [rsp+80h] [rbp+8h]
  char v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+98h] [rbp+20h]

  v4 = 0;
  v31 = 0;
  v6 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v7 = 0;
  v8 = a2 & 1;
  v32 = a2 & 1;
  do
  {
LABEL_4:
    v9 = *(_DWORD *)(a1 + 840);
    if ( v9 <= v7 )
    {
LABEL_44:
      v28 = 0;
      goto LABEL_45;
    }
    v10 = *(_QWORD *)(a1 + 848);
    v11 = v7;
    v12 = (_DWORD *)(v10 + 4 * ((unsigned __int64)(v9 - 1) >> 5));
    v13 = (_DWORD *)(v10 + 4 * ((unsigned __int64)v7 >> 5));
    if ( v13 != v12 )
    {
      v14 = v7 & 0x1F;
      if ( (*v13 | *((_DWORD *)qword_140012120 + v14)) == -1 )
      {
        v11 = v7 - v14 + 32;
        for ( ++v13; v13 < v12 && *v13 == -1; ++v13 )
          v11 += 32;
      }
    }
    for ( ; v11 < v9; ++v11 )
    {
      if ( !_bittest(*(const signed __int32 **)(a1 + 848), v11) )
        break;
    }
    v15 = 0;
    if ( v13 != v12 )
    {
      v16 = v11 & 0x1F;
      if ( (*v13 & ~*((_DWORD *)qword_140012120 + v16)) == 0 )
      {
        v15 = 32 - v16;
        if ( (_DWORD)v16 == 33 )
          goto LABEL_25;
        v17 = v13 + 1;
        while ( v17 < v12 && !*v17 )
        {
          ++v17;
          v15 += 32;
          if ( v15 == -1 )
            goto LABEL_25;
        }
      }
    }
    v18 = *(_DWORD *)(a1 + 840);
    for ( i = v15 + v11; i < v18; ++v15 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 848), i) )
        break;
      if ( v15 == -1 )
        break;
      ++i;
    }
LABEL_25:
    v4 = v31;
    v7 = v11;
    if ( !v15 )
      goto LABEL_44;
    v20 = v15 + v11;
  }
  while ( v11 >= v15 + v11 );
  v21 = 2LL * v11;
  while ( 1 )
  {
    v33 = ++v6;
    if ( (v6 & 0xF) == 0
      && a3
      && (unsigned int)SmWorkQueueGetDepth(*(_DWORD **)(a1 + 800), *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6022LL) == 0) )
    {
      break;
    }
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v7) != 8 )
      goto LABEL_40;
    v22 = *(_QWORD *)(a1 + 800);
    if ( (*(_WORD *)(v21 + *(_QWORD *)(a1 + 1032)) & 0x1FFF) != 0 )
    {
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(v22, v7)
        || SMKM_STORE<SM_TRAITS>::SmStMapRegion(v26, v7, 0, v27, 8) != 3 )
      {
        goto LABEL_40;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v22 + 6021) & 4) != 0 )
      {
        v23 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(v22, v7, v8 | 2u);
      }
      else
      {
        v24 = *(_QWORD *)(v22 + 6216);
        v25 = (void *)(*(_QWORD *)(v24 + 8LL * v7) & 0xFFFFFFFFFFFFFFF8uLL);
        MiFreePagesFromMdl((ULONG_PTR)v25, 0);
        ExFreePoolWithTag(v25, 0);
        *(_QWORD *)(v24 + 8LL * v7) = 0LL;
        v6 = v33;
        v8 = v32;
        v23 = 0;
      }
      if ( v23 >= 0 )
      {
LABEL_40:
        v4 = v31;
        _bittestandset(*(signed __int32 **)(a1 + 848), v7);
        goto LABEL_41;
      }
    }
    v4 = 1;
    v31 = 1;
LABEL_41:
    ++v7;
    v21 += 2LL;
    if ( v7 >= v20 )
      goto LABEL_4;
  }
  v28 = 1;
  v4 = 1;
LABEL_45:
  if ( a3 )
  {
    v29 = *(_WORD *)(a3 + 12) & 1;
    if ( v29 || v4 )
    {
      if ( v28 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v29 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
