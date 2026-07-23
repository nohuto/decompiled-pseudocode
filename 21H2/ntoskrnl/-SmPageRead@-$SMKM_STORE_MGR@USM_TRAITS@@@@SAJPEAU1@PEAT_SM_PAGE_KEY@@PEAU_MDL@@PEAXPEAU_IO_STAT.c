/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402918F0
 * Callers:
 *     SmPageRead @ 0x14022DCBC (SmPageRead.c)
 * Callees:
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14024A2B8 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028A5B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140291B20 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140291C30 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmFpAllocate @ 0x1402920C8 (SmFpAllocate.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  unsigned __int64 v6; // rbp
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r12
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // esi
  char v14; // si
  _OWORD *PoolWithTag; // rdi
  bool v16; // zf
  int v17; // eax
  struct _EX_RUNDOWN_REF *v19; // rax
  unsigned int v20; // [rsp+70h] [rbp+8h]
  int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  v21 = 0;
  v6 = a3;
  v22 = 0LL;
  v8 = 0;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v8 = a3 & 1;
  }
  a5[1] = 0LL;
  *v5 = a4;
  v9 = *(_DWORD *)(v6 + 40) >> 12;
  v20 = v9;
  v10 = (__int64)v5;
  LODWORD(a5) = v9;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                (unsigned int)&SmGlobals,
                (_DWORD)a2,
                (unsigned int)&a5,
                (unsigned int)&v22,
                (__int64)&v21);
  v12 = v22;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = (char)a5;
    v5[1] = (unsigned int)a5;
    if ( v8 >= 2 && !*(_BYTE *)(v12 + 6020) )
    {
      v13 = -1073741791;
      goto LABEL_18;
    }
    if ( (dword_140D240F0 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v8 & 1) != 0 )
      {
        PoolWithTag = RtlpInterlockedPopEntrySList(&stru_140D23EA0);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        LOBYTE(v8) = v8 & 0xFE;
      }
      PoolWithTag = (_OWORD *)SmFpAllocate(&dword_140D23FC0, dword_140D240F0 & 1);
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
LABEL_17:
        v9 = v20;
        goto LABEL_18;
      }
LABEL_9:
      v16 = (v21 & 1) == 0;
      v17 = *a2;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *(_DWORD *)PoolWithTag = 2;
      *((_DWORD *)PoolWithTag + 6) = v17;
      *((_QWORD *)PoolWithTag + 2) = v6;
      *((_BYTE *)PoolWithTag + 8) = v14;
      *((_QWORD *)PoolWithTag + 4) = v5;
      if ( !v16 )
        *((_DWORD *)PoolWithTag + 2) |= 0x1000000u;
      if ( (v8 & 1) != 0 )
        *((_DWORD *)PoolWithTag + 2) |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                  v5,
                  (__int64)&SmGlobals,
                  *(_DWORD *)(v12 + 6016) & 0x3FF,
                  (int *)PoolWithTag) < 0 )
      {
        v13 = -1073741670;
      }
      else
      {
        PoolWithTag = 0LL;
        v10 = 0LL;
        v12 = 0LL;
        LOBYTE(v8) = -5;
        v13 = 259;
      }
      if ( PoolWithTag )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, PoolWithTag, v10);
      goto LABEL_17;
    }
    v8 |= 8 * (SmAcquireReleaseResAvailForRead(v5, v9, 0LL) & 1);
    if ( v8 >= 8 )
    {
      LOBYTE(v8) = v8 | 4;
      goto LABEL_7;
    }
    v13 = -1073741670;
  }
LABEL_18:
  if ( v12 )
  {
    v19 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v12 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v19 + 1);
  }
  if ( (v8 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(v10, v9, 1LL);
  if ( v10 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_DWORD *)v5 = v13;
  }
  return v13;
}
