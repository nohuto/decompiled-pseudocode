/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14037C880 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037D8B8 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140393778 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14037A5B0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14037D1B0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140397F20 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(__int64 *a1, __int64 a2, int a3, int *a4)
{
  int v4; // r15d
  __int16 v6; // r14
  int v9; // r15d
  int v10; // ebx
  unsigned __int64 *v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // r9
  struct _MDL *v14; // r9
  void (__fastcall *v16)(__int64, __int64 *, __int64); // rax
  __int64 v17; // r10
  struct _KTHREAD *v18; // r10
  __int64 v19; // r11
  unsigned __int64 *v20; // rcx
  unsigned int PriorityThread; // eax
  unsigned __int64 *v22; // r9
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h]
  __int16 v25; // [rsp+3Ch] [rbp-24h]
  __int16 v26; // [rsp+3Eh] [rbp-22h]
  unsigned __int64 *v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v28; // [rsp+48h] [rbp-18h]
  __int128 v29; // [rsp+50h] [rbp-10h]

  v4 = *a4;
  v28 = (unsigned __int64 *)&v27;
  v6 = a3;
  v27 = 0LL;
  v29 = 0LL;
  v9 = v4 & 7;
  v10 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a1, a2, a3, (_DWORD)a4, (__int64)&v27);
  if ( v10 < 0 )
  {
    v14 = (struct _MDL *)v29;
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_3;
    v16 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 1848);
    if ( v16 )
    {
      v23 = *a1;
      v24 = a4[6];
      v26 = 0;
      v25 = v6;
      v16(a2, &v23, 5LL);
    }
    if ( (*(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex(a2, v6 & 0x3FF) + 6021LL) & 4) != 0
      && (a4[2] & 0x4000000) != 0
      && (int)PsGetIoPriorityThread(v17) >= 2 )
    {
      if ( v28 != (unsigned __int64 *)&v27 )
      {
        v20 = v27;
        v27 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v20 == v28 )
        {
          v27 = 0LL;
          v28 = (unsigned __int64 *)&v27;
        }
        else
        {
          *v28 = *v28 & 7 | (8 * (*v28 >> 3) - 8);
        }
      }
      *(_OWORD *)(a4 + 10) = 0LL;
      *(_OWORD *)(a4 + 14) = 0LL;
      *(_OWORD *)(a4 + 18) = 0LL;
      *((_QWORD *)a4 + 9) = v19;
      *((_QWORD *)a4 + 10) = a2 + 464;
      PriorityThread = KeQueryPriorityThread(v18);
      SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2 + 464, a4 + 10, PriorityThread);
    }
    else
    {
LABEL_3:
      if ( v28 != (unsigned __int64 *)&v27 )
      {
        v11 = v27;
        v27 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v11 == v28 )
        {
          v27 = 0LL;
          v28 = (unsigned __int64 *)&v27;
        }
        else
        {
          *v28 = *v28 & 7 | (8 * (*v28 >> 3) - 8);
        }
      }
      v12 = (_QWORD *)SmKmStoreRefFromStoreIndex(a2, v6 & 0x3FF);
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*v12, v13, 0LL);
    }
    v14 = 0LL;
    *(_QWORD *)&v29 = 0LL;
    v10 = 0;
  }
  if ( v14 )
    SmFpFree(a2 + 1536, 5, -1LL, v14);
  while ( v28 != (unsigned __int64 *)&v27 )
  {
    v22 = v27;
    v27 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( v22 == v28 )
    {
      v27 = 0LL;
      v28 = (unsigned __int64 *)&v27;
    }
    else
    {
      *v28 = *v28 & 7 | (8 * (*v28 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v22, -1LL);
  }
  return (unsigned int)v10;
}
