/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4
 * Callers:
 *     SmpPageWrite @ 0x140288D9C (SmpPageWrite.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140238150 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140289170 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140289A38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreReferenceEx @ 0x14028A8EC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140414300 (memset.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405994F8 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        _DWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  _QWORD *v7; // r12
  _OWORD *PoolWithTag; // rdi
  void *v9; // r15
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ebx
  PVOID v22; // rax
  bool v23; // cf
  int v24; // ebx
  SIZE_T v26; // rdx
  ULONG v27; // r8d
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // eax
  struct _EX_RUNDOWN_REF *v31; // rax
  _QWORD *v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+A0h] [rbp+28h]

  v7 = a6;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v33 = a6;
  a6[1] = 0LL;
  *v7 = a5;
  v34 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (a3 & 0x7FF) == 0x400 || (v13 = SmKmStoreReferenceEx(), (v14 = (_DWORD *)v13) == 0LL) )
  {
    v24 = -1073741811;
    goto LABEL_29;
  }
  LODWORD(a6) = 0;
  v15 = (unsigned __int16)a3 >> 13;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v13 + 80, &a6, 0LL);
  if ( v14[234] <= (unsigned int)a6 )
  {
    v28 = v14[2 * v15 + 477];
    v29 = v14[2 * v15 + 476];
    v30 = v29 * (v14[216] >> 4);
    if ( v30 >= v28 && v30 - v28 < v29 << 8 )
    {
      v24 = -1073741110;
      goto LABEL_23;
    }
  }
  if ( (a3 & 0x40000) != 0 && (unsigned int)(v15 - 5) <= 1 )
    LODWORD(v15) = 6;
  if ( (_DWORD)v15 == 6 )
    SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1);
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v14 & 0x400) != 0 )
  {
    v26 = 40LL;
    v27 = 1767337331;
  }
  else
  {
    PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
    if ( PoolWithTag )
      goto LABEL_10;
    v26 = 4096LL;
    v27 = 2002218355;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v26, v27);
  if ( !PoolWithTag )
  {
    v24 = -1073741670;
    goto LABEL_23;
  }
LABEL_10:
  v18 = (int)a2;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_DWORD *)PoolWithTag + 6) = *a2;
  v19 = *((_DWORD *)PoolWithTag + 2) & 0xFFFFFFF8;
  *((_QWORD *)PoolWithTag + 2) = a4;
  v20 = v15 | v19;
  *((_DWORD *)PoolWithTag + 2) = v20;
  if ( (a3 & 0x10000) != 0 )
  {
    v20 |= 0x40000000u;
    *((_DWORD *)PoolWithTag + 2) = v20;
  }
  if ( (a3 & 0x20000) != 0 )
    *((_DWORD *)PoolWithTag + 2) = v20 | 0x40000000;
  *((_QWORD *)PoolWithTag + 4) = v7;
  v21 = v14[1504] & 0x3FF;
  if ( (*(_DWORD *)(a1 + 1840) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v9 = *(void **)(a4 + 24);
    }
    else
    {
      v22 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u);
      v18 = (int)a2;
      v9 = v22;
    }
    if ( !v9 )
    {
      v24 = -1073741688;
      goto LABEL_23;
    }
  }
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v14 & 0x400) != 0 )
  {
    v24 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v18, v34, v21, (__int64)PoolWithTag, (__int64)v7, 0);
    if ( v24 < 0 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v23 = a7 != 0;
  a7 = -a7;
  v24 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v18, v34, v21, 0LL, 0LL, (unsigned int)v23 + 2);
  if ( v24 >= 0 )
  {
    memset((char *)PoolWithTag + 40, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 13) = v14;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((PEX_SPIN_LOCK)(a1 + 1264));
LABEL_22:
    v14 = 0LL;
    PoolWithTag = 0LL;
    v9 = 0LL;
    v24 = 259;
    v33 = 0LL;
  }
LABEL_23:
  if ( v14 )
  {
    v31 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v14[1504] & 0x3FF, v16, v17);
    ExReleaseRundownProtection(v31 + 1);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    MmUnmapLockedPages(v9, (PMDL)a4);
LABEL_29:
  if ( v33 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)v7 = v24;
  }
  return (unsigned int)v24;
}
