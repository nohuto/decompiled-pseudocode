/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14037AA7C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140391B70 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14037A5B0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14037AC18 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, __int128 *a3, unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v7; // esi
  __int128 v9; // xmm1
  union _SLIST_HEADER *v10; // rcx
  BOOL v11; // ebx
  struct _EX_RUNDOWN_REF *v12; // rax
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-28h]

  v4 = *((_QWORD *)a3 + 4);
  v5 = *(_DWORD *)a3 & 7;
  v7 = 1;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( a4 )
  {
    v9 = a3[1];
    v14 = *a3;
    v16 = *((_QWORD *)a3 + 4);
    v15 = v9;
  }
  if ( v5 < 4 )
  {
    if ( v5 == 2 )
    {
      if ( (*((_DWORD *)a3 + 2) & 0x4000000) != 0 )
      {
        if ( LOWORD(stru_140D31EE0.Alignment) >= 0x1000u )
        {
          ExFreePoolWithTag(a3, 0);
          goto LABEL_9;
        }
        v10 = &stru_140D31EE0;
        goto LABEL_8;
      }
    }
    else if ( !v5 && *((int *)a3 + 2) < 0 )
    {
      *(_QWORD *)&v15 = **((_QWORD **)a3 + 2);
      v10 = &stru_140D31F80;
LABEL_8:
      RtlpInterlockedPushEntrySList(v10, (PSLIST_ENTRY)a3);
LABEL_9:
      v11 = v5 == 1;
      goto LABEL_10;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, a3, v4);
    goto LABEL_9;
  }
  v13 = *((_DWORD *)a3 + 2) & 7;
  if ( v5 == 5 )
  {
    if ( v13 )
    {
      v11 = 0;
      ExFreePoolWithTag(a3, 0);
      goto LABEL_10;
    }
LABEL_31:
    ExFreePoolWithTag(a3, 0);
LABEL_15:
    v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v12 + 1);
    return;
  }
  v11 = 0;
  if ( !v13 )
  {
    *((_QWORD *)a3 + 4) = 0LL;
    goto LABEL_10;
  }
  if ( v13 == 3 )
    goto LABEL_31;
  if ( (unsigned int)(v13 - 1) <= 1 )
    v7 = 0;
LABEL_10:
  if ( !a4
    || (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, _QWORD))SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete)(
                       &v14,
                       a2,
                       a2,
                       *a4) )
  {
    if ( v11 )
      SmFpFree(&unk_140D31F90, 0LL, v4, v4);
  }
  if ( v7 )
    goto LABEL_15;
}
