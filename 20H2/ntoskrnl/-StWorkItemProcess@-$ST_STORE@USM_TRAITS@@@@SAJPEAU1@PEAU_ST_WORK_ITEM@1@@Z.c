/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140257D60
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14032E09C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x140256CA8 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140256E28 (SmKmStoreRefFromStoreIndex.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x140257FA4 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140258150 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14025A05C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14025B5D8 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14025C710 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmHpChunkHeapProtect @ 0x14025D8A0 (SmHpChunkHeapProtect.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14025DAD0 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140264674 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140331300 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14035783C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1403599FC (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405986C0 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405988A8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140599064 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140599368 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405998DC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059A1E0 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14059AD5C (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059ADE4 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059AE74 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059B530 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  int v4; // r15d
  unsigned __int64 v5; // rbp
  unsigned int v6; // r14d
  int v7; // ebx
  unsigned int Stats; // eax
  unsigned int v9; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  char v26; // bl
  int v27; // eax

  v2 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v4 = 0;
  v5 = 0LL;
  if ( (a2 & 1) == 0 )
    v2 = a2;
  v6 = -1;
  v7 = *(_DWORD *)v2 & 7;
  if ( (a2 & 1) == 0 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 5744);
  if ( !v7 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 80, v2);
LABEL_7:
    v9 = Stats;
    goto LABEL_8;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove(a1 + 80, v2);
    goto LABEL_7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 992, v2);
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v2);
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v2 + 8) & 7u) - 4 <= 1 )
      {
        Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v2);
        v6 = 0;
        goto LABEL_7;
      }
      goto LABEL_56;
    }
    ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
    goto LABEL_38;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v22 = a1 + 80;
    v23 = *(_DWORD *)(v2 + 8) & 7;
    if ( !v23 )
    {
      ST_STORE<SM_TRAITS>::StDmEtaRefresh(v22);
      goto LABEL_38;
    }
    if ( v23 != 1 )
    {
      if ( v23 == 3 )
      {
        v24 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v22, 0LL);
        if ( v24 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 80, v24);
      }
      else
      {
        while ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v22, 1LL) == 2 )
        {
          v26 = *(_BYTE *)(a1 + 1984);
          *(_BYTE *)(a1 + 1984) = v26 | 3;
          v27 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1 + 80, 0LL);
          *(_BYTE *)(a1 + 1984) ^= (*(_BYTE *)(a1 + 1984) ^ v26) & 3;
          if ( v27 < 0 )
            break;
          v22 = a1 + 80;
        }
      }
      goto LABEL_38;
    }
    goto LABEL_41;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1 + ((*(_DWORD *)(v2 + 28) & 2) != 0 ? 2016LL : 80LL), v2);
      v9 = 259;
    }
    else
    {
      v9 = -1073741822;
    }
    goto LABEL_8;
  }
  v5 = v2;
  v6 = 259;
  if ( *(_DWORD *)(v2 + 8) == 1 )
    v5 = 0LL;
  v17 = -(__int64)SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 6016LL));
  v9 = v17 == 0 ? 0xC0000189 : 0;
  if ( v17 )
  {
    v19 = *(_DWORD *)(v2 + 8);
    v4 = 1;
    if ( v19 != 1 )
    {
      switch ( v19 )
      {
        case 2:
          Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
          goto LABEL_7;
        case 3:
          Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v2);
          v5 = 0LL;
          goto LABEL_7;
        case 4:
          ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
            *(_QWORD *)(a1 + 1992),
            2LL,
            (*(_WORD *)(v2 + 14) & 1) != 0 ? 200 : 2000,
            (*(_WORD *)(v2 + 14) & 1) != 0 ? 2000 : 30000);
          goto LABEL_33;
        case 5:
          _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
LABEL_33:
          v5 = 0LL;
          goto LABEL_8;
        case 6:
          _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
          LOBYTE(v18) = 1;
          v5 = 0LL;
          if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime(v18) - *(_QWORD *)(a1 + 6008)) >= 0x989680
            && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL) == 2 )
          {
            ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
            LOBYTE(v25) = 1;
            *(_QWORD *)(a1 + 6008) = KiQueryUnbiasedInterruptTime(v25);
          }
          goto LABEL_8;
      }
LABEL_56:
      v9 = -1073741811;
      goto LABEL_8;
    }
    v21 = *(_DWORD *)(v2 + 16);
    if ( v21 < 0 )
      goto LABEL_8;
    if ( v21 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(a1 + (v21 != 0 ? 2016LL : 80LL));
      goto LABEL_7;
    }
    switch ( v21 )
    {
      case 4:
        SmHpChunkHeapProtect(a1 + 272, 0LL, 0LL);
        goto LABEL_38;
      case 3:
        v22 = a1 + 80;
LABEL_41:
        ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(v22);
        goto LABEL_38;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL, a1 + 944);
        goto LABEL_7;
    }
    if ( v21 != 5 )
    {
      if ( v21 != 6 )
        goto LABEL_8;
      goto LABEL_56;
    }
    ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(a1 + 80);
LABEL_38:
    v9 = 0;
  }
LABEL_8:
  if ( v9 == -1073741818 )
    ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
  if ( v5 )
    ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v5);
  if ( v4 )
  {
    v20 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                      (__int64)&SmGlobals,
                                      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 6016LL) & 0x3FF);
    ExReleaseRundownProtection_0(v20 + 1);
  }
  if ( v6 == -1 )
    return v9;
  return v6;
}
