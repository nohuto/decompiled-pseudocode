/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037D8B8
 * Callers:
 *     MiStoreEvictPageFile @ 0x14024FDF0 (MiStoreEvictPageFile.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140379C88 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14037A5B0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmFpAllocate @ 0x14037DA00 (SmFpAllocate.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405F6DBC (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, unsigned int *a2, unsigned int a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebp
  __int64 *v8; // rax
  int v9; // r15d
  __int64 v10; // r14
  struct _MDL *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r12d
  struct _MDL *v14; // rbx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF
  int v20; // [rsp+9Ch] [rbp+24h]

  v20 = HIDWORD(a4);
  v18 = a3;
  v19 = 0;
  v5 = 0LL;
  v6 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, (int)&v18, (int)&v19);
  v7 = v6;
  if ( v6 != 1024 )
  {
    v8 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v6 & 0x3FF);
    v9 = dword_140D32130 & 1;
    v10 = *v8;
    v11 = (struct _MDL *)SmFpAllocate(dword_140D31F90, v9);
    v13 = v18;
    v14 = v11;
    if ( !v11 )
      goto LABEL_6;
    *(_QWORD *)&v11->Size = 0LL;
    v11->Next = 0LL;
    v15 = SmFpAllocate(dword_140D31F90, v9);
    v5 = (_DWORD *)v15;
    if ( !v15
      || (*(_DWORD *)(v15 + 4) = 0,
          *(_QWORD *)(v15 + 16) = 0LL,
          *(_QWORD *)(v15 + 24) = 0LL,
          *(_DWORD *)v15 = 1,
          *(_DWORD *)(v15 + 8) = *a2,
          *(_DWORD *)(v15 + 12) = v13,
          *(_QWORD *)(v15 + 32) = v14,
          (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork((__int64 *)v14, (__int64)&SmGlobals, v7, (int *)v15) < 0) )
    {
LABEL_6:
      if ( v10 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(v12, a2, v13);
        v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v10 + 6016) & 0x3FF);
        ExReleaseRundownProtection(v17 + 1);
      }
      if ( v5 )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, v5, (__int64)v14);
      if ( v14 )
        SmFpFree((__int64)dword_140D31F90, 0, (__int64)v14, v14);
    }
  }
  return v19;
}
