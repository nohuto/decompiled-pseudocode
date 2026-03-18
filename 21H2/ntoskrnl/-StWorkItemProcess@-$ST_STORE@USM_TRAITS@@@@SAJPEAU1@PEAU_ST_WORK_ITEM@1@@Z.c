/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FA00
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14037E958 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     SmHpChunkHeapProtect @ 0x14023807C (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1402380FC (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     SmKmStoreReference @ 0x14035F464 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037EEA8 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14037FC24 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FC84 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1403812F8 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14038217C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14038F8FC (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14038F99C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140390A50 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140391D3C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14045F42A (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405F7EEC (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405F80DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405F8978 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405F8ED4 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405F9824 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1405FA31C (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405FA3A4 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405FA434 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405FA9D8 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebp
  int v5; // r15d
  unsigned __int64 v6; // r14
  int v7; // ebx
  unsigned int Stats; // eax
  unsigned int v9; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  struct _EX_RUNDOWN_REF *v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // eax
  char v24; // bl
  int v25; // eax

  v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v4 = -1;
  v5 = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)v3 & 7;
  if ( (a2 & 1) == 0 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 718);
  if ( !v7 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 10, v3);
LABEL_7:
    v9 = Stats;
    goto LABEL_8;
  }
  v12 = v7 - 1;
  if ( !v12 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((__int64)(a1 + 10), v3);
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 10, a1 + 124, v3);
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v3);
    goto LABEL_7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      v9 = 0;
LABEL_8:
      if ( v9 == -1073741818 )
        ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v3 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v3);
      v4 = 0;
      goto LABEL_7;
    }
LABEL_66:
    v9 = -1073741811;
    goto LABEL_8;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v9 = v16 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion((char *)a1 + ((*(_DWORD *)(v3 + 28) & 2) != 0 ? 2016LL : 80LL), v3);
        return 259;
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    v4 = 259;
    if ( *(_DWORD *)(v3 + 8) != 1 )
      v6 = v3;
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1[3] + 6016LL)) )
    {
      v9 = -1073741431;
      goto LABEL_10;
    }
    v17 = *(_DWORD *)(v3 + 8);
    v5 = 1;
    switch ( v17 )
    {
      case 1:
        v19 = *(_DWORD *)(v3 + 16);
        if ( v19 < 0 )
          goto LABEL_10;
        if ( v19 <= 1 )
        {
          Stats = ST_STORE<SM_TRAITS>::StCompactionWorker((char *)a1 + (v19 != 0 ? 2016LL : 80LL));
        }
        else
        {
          if ( v19 == 4 )
          {
            SmHpChunkHeapProtect((__int64)(a1 + 34), 0, 0);
            goto LABEL_10;
          }
          if ( v19 == 3 )
          {
            ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions((__int64)(a1 + 10));
            goto LABEL_10;
          }
          if ( v19 != 2 )
          {
            if ( v19 == 5 )
            {
              ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(a1 + 10);
            }
            else if ( v19 == 6 )
            {
              v9 = -1073741811;
            }
LABEL_10:
            if ( v6 )
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v6);
            if ( !v5 )
              goto LABEL_13;
            goto LABEL_33;
          }
          Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 10, 0LL, a1 + 118);
        }
        goto LABEL_7;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 10);
        goto LABEL_7;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v3);
        v6 = 0LL;
        goto LABEL_7;
      case 4:
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
          a1[249],
          2LL,
          (*(_WORD *)(v3 + 14) & 1) != 0 ? 200 : 2000,
          (*(_WORD *)(v3 + 14) & 1) != 0 ? 2000 : 30000);
        goto LABEL_33;
      case 5:
        _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
LABEL_33:
        v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                          (__int64)&SmGlobals,
                                          *(_DWORD *)(a1[3] + 6016LL) & 0x3FF);
        ExReleaseRundownProtection(v18 + 1);
LABEL_13:
        if ( v4 != -1 )
          return v4;
        return v9;
      case 6:
        _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
        if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - a1[751]) >= 0x989680
          && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 10, 2LL) == 2 )
        {
          ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 10);
          a1[751] = KiQueryUnbiasedInterruptTime();
        }
        goto LABEL_33;
    }
    goto LABEL_66;
  }
  v20 = (__int64)(a1 + 10);
  v21 = v20;
  v22 = *(_DWORD *)(v3 + 8) & 7;
  if ( v22 )
  {
    if ( v22 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(v20);
    }
    else if ( v22 == 3 )
    {
      v23 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v20, 0LL);
      if ( v23 )
        ST_STORE<SM_TRAITS>::StQueueCompaction(v20, v23);
    }
    else
    {
      while ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v21, 1LL) == 2 )
      {
        v24 = *(_BYTE *)(v20 + 1904);
        *(_BYTE *)(v20 + 1904) = v24 | 3;
        v25 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v20, 0LL);
        *(_BYTE *)(v20 + 1904) ^= (*(_BYTE *)(v20 + 1904) ^ v24) & 3;
        if ( v25 < 0 )
          break;
        v21 = v20;
      }
    }
  }
  else
  {
    ST_STORE<SM_TRAITS>::StDmEtaRefresh(v20);
  }
  return 0;
}
