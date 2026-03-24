/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A2D8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402DA510 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1402AD21C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     MmStoreDecommitVirtualMemory @ 0x1402D24B4 (MmStoreDecommitVirtualMemory.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x1402DCC88 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x1402DDD88 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402DF9F8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402E13C4 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059BC10 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // r14d
  unsigned int v5; // esi
  int v6; // r13d
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // rdx
  _WORD *v9; // r15
  _WORD *v10; // r12
  _WORD *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  _DWORD *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v24; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+10h]
  _WORD *v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 784);
  v2 = 0;
  v25 = v1;
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v5 = (unsigned int)(v1 - 4096) >> 4;
  v6 = 0;
  v24 = v5;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v8 = *(_QWORD *)(a1 + 1032);
  v27 = UnbiasedInterruptTime;
  v9 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 1096));
  v26 = v9;
  v10 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 856));
  while ( 2 )
  {
    v11 = v9;
    if ( v9 >= v10 )
      goto LABEL_29;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6592LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL)
        && (v6 & 7) == 0
        && v6 )
      {
        v12 = KiQueryUnbiasedInterruptTime() - v27;
        if ( !(v13 >= 0x40 ? v12 < 0x1C9C380 : v12 < 0x2FAF080) )
          break;
      }
      if ( (*v11 & 0x1FFF) == 0 || (*v11 & 0x1FFFu) > v5 )
        goto LABEL_27;
      v15 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v15) )
      {
        v17 = v16 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v17 = 0;
        if ( (_DWORD)v15 == *(_DWORD *)(a1 + 16 * (v17 + 78LL)) )
          goto LABEL_26;
        ++v6;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v15, 0LL, v15, 0) >= 0 )
          goto LABEL_24;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2) != 2 )
          break;
        v19 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v15, 0, 1);
        if ( v19 )
        {
          if ( v19 != -1 )
          {
            if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v19, v15, v19, v15, 0) < 0 )
              NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v15, v20);
LABEL_24:
            v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6216LL) + 8LL * (unsigned int)v15);
            if ( v22 >= 0 )
            {
              v21 = (16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000;
              MmStoreDecommitVirtualMemory(
                (unsigned int)v21 + (v22 & 0x7FFFFFFFFFFF0000LL),
                (unsigned int)(v25 - v21),
                v21,
                v18);
            }
            goto LABEL_26;
          }
        }
      }
      v3 = 1;
LABEL_26:
      v5 = v24;
LABEL_27:
      ++v11;
    }
    while ( v11 < v10 );
    v9 = v26;
    v5 = v24;
LABEL_29:
    if ( v11 == v10 )
    {
      if ( v9 != *(_WORD **)(a1 + 1032) )
      {
        v10 = v9;
        v26 = *(_WORD **)(a1 + 1032);
        v9 = v26;
        continue;
      }
    }
    else
    {
      v2 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
    }
    break;
  }
  *(_DWORD *)(a1 + 1096) = v2;
  return v3 != 0 ? 0xC000022D : 0;
}
