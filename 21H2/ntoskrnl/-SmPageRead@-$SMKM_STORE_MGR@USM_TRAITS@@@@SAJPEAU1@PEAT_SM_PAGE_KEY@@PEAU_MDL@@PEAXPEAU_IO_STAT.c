/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140393778
 * Callers:
 *     SmPageRead @ 0x140394BE8 (SmPageRead.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14037A5B0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmFpAllocate @ 0x14037DA00 (SmFpAllocate.c)
 *     SmAcquireReleaseResAvailForRead @ 0x1403939B8 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140393AA0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbp
  __int64 *v7; // r14
  unsigned int v8; // esi
  __int64 *v9; // r15
  int PickStore; // eax
  __int64 v11; // r13
  unsigned int v12; // edi
  char v13; // di
  __int64 PoolWithTag; // rsi
  bool v15; // zf
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int v18; // [rsp+90h] [rbp+8h]
  int v20; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v20 = 0;
  v5 = 0;
  v21 = 0LL;
  v6 = a3;
  v7 = a5;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v5 = a3 & 1;
  }
  a5[1] = 0LL;
  *v7 = a4;
  v8 = *(_DWORD *)(v6 + 40) >> 12;
  v18 = v8;
  v9 = v7;
  LODWORD(a5) = v8;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                (unsigned int)&SmGlobals,
                (_DWORD)a2,
                (unsigned int)&a5,
                (unsigned int)&v21,
                (__int64)&v20);
  v11 = v21;
  v12 = PickStore;
  if ( PickStore >= 0 )
  {
    v13 = (char)a5;
    v7[1] = (unsigned int)a5;
    if ( v5 >= 2 && !*(_BYTE *)(v11 + 6020) )
    {
      v12 = -1073741791;
      goto LABEL_16;
    }
    if ( (dword_140D32130 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = (__int64)RtlpInterlockedPopEntrySList(&stru_140D31EE0);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        LOBYTE(v5) = v5 & 0xFE;
      }
      PoolWithTag = SmFpAllocate(dword_140D32000, 1, (__int64)v7, 0LL, dword_140D32130 & 1);
      if ( !PoolWithTag )
      {
        v12 = -1073741670;
LABEL_15:
        v8 = v18;
        goto LABEL_16;
      }
LABEL_9:
      v15 = (v20 & 1) == 0;
      *(_OWORD *)PoolWithTag = 0LL;
      *(_OWORD *)(PoolWithTag + 16) = 0LL;
      *(_DWORD *)(PoolWithTag + 24) = *a2;
      *(_DWORD *)PoolWithTag = 2;
      *(_QWORD *)(PoolWithTag + 16) = v6;
      *(_BYTE *)(PoolWithTag + 8) = v13;
      *(_QWORD *)(PoolWithTag + 32) = v7;
      if ( !v15 )
        *(_DWORD *)(PoolWithTag + 8) |= 0x1000000u;
      if ( (v5 & 1) != 0 )
        *(_DWORD *)(PoolWithTag + 8) |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                  v7,
                  (__int64)&SmGlobals,
                  *(_DWORD *)(v11 + 6016) & 0x3FF,
                  (int *)PoolWithTag) < 0 )
      {
        v12 = -1073741670;
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, (_DWORD *)PoolWithTag, (__int64)v7);
      }
      else
      {
        v9 = 0LL;
        LOBYTE(v5) = -5;
        v11 = 0LL;
        v12 = 259;
      }
      goto LABEL_15;
    }
    v5 |= 8 * (SmAcquireReleaseResAvailForRead(v7, v8, 0LL) & 1);
    if ( v5 >= 8 )
    {
      LOBYTE(v5) = v5 | 4;
      goto LABEL_7;
    }
    v12 = -1073741670;
  }
LABEL_16:
  if ( v11 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v11 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v17 + 1);
  }
  if ( (v5 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(v9, v8, 1LL);
  if ( v9 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)v7 = v12;
  }
  return v12;
}
