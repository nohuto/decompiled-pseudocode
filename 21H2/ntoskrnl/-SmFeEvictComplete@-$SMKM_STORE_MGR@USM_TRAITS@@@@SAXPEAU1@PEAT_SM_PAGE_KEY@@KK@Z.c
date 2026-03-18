/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14037A04C
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14037AC18 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14035F344 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14037A368 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037C45C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CCE8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, __int16 a4)
{
  unsigned int v4; // edi
  int v6; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  struct _KEVENT *v10; // rcx
  __int64 v11; // r14
  struct _KTHREAD *v12; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v15; // edx
  int v16; // r8d
  struct _KTHREAD *v17; // rax
  bool v18; // zf
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v26; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[136]; // [rsp+78h] [rbp-88h] BYREF

  v4 = *a2;
  memset(v31, 0, 0x80uLL);
  v27[1] = 0LL;
  v27[2] = 0LL;
  v30 = 0LL;
  v6 = 0;
  v28 = 0;
  v27[0] = v31;
  v29 = 8;
  CurrentThread = KeGetCurrentThread();
  v26 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      v27);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v8,
      &v26,
      v27);
    if ( (_QWORD)v26 )
    {
      v9 = *((_QWORD *)&v26 + 1) + 8LL;
      v22 = (unsigned __int16)*(_DWORD *)v26 + 2LL;
      *((_QWORD *)&v26 + 1) = v9;
      if ( v9 >= (__int64)v26 + 8 * v22 )
      {
        v23 = *(_QWORD *)(v26 + 8);
        if ( v23 )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(v26 + 8);
          *((_QWORD *)&v26 + 1) = v23 + 16;
        }
        v9 = (v23 + 16) & -(__int64)(v23 != 0);
      }
    }
    else
    {
      v9 = 0LL;
    }
    v10 = *(struct _KEVENT **)(a1 + 1656);
    if ( v10 && *(_DWORD *)(a1 + 1648) == *(_DWORD *)v9 )
      KeSetEvent(v10, 0, 0);
    *(_BYTE *)(v9 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v27, &v26);
    if ( ++v6 == a3 )
      break;
    ++v4;
  }
  v11 = a1 + 440;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v12 = KeGetCurrentThread();
  if ( (unsigned __int64)(v11 - qword_140C50630) < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&v12[1].Process;
  v15 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v11 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v15;
    p_Process += 96LL;
    if ( v15 >= 6 )
      goto LABEL_30;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v16 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v12->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v16 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, a1 + 440, v16);
    goto LABEL_20;
  }
LABEL_30:
  if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, a1 + 440, SessionId, 0LL);
  _enable();
LABEL_20:
  v17 = KeGetCurrentThread();
  v18 = v17->SpecialApcDisable++ == -1;
  if ( v18 && ($CEA84C04E3712D858E5667A507841A2A *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  v19 = (__int64 *)SmKmStoreRefFromStoreIndex(a1, a4 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v20, *v19);
}
