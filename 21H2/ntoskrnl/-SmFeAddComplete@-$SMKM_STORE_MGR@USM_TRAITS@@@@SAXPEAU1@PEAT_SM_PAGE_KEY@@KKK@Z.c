/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14037C144
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14037C0B4 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14037C880 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14037A368 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037C45C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CCE8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  int v7; // r14d
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // rsi
  struct _KTHREAD *v14; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v17; // edx
  int v18; // r9d
  struct _KTHREAD *v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int128 v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+40h] [rbp-C0h]
  _QWORD v25[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  _BYTE v29[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  v24 = a3;
  memset(v29, 0, 0x80uLL);
  v25[1] = 0LL;
  v25[2] = 0LL;
  v28 = 0LL;
  v26 = 0;
  v7 = 0;
  v25[0] = v29;
  v27 = 8;
  v8 = 1;
  v23 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v10 = v23;
  while ( 1 )
  {
    if ( v8 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v25);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v11,
        &v23,
        v25);
      v10 = v23;
      v8 = 0;
    }
    if ( v10 )
    {
      v12 = *((_QWORD *)&v23 + 1) + 8LL;
      v21 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      *((_QWORD *)&v23 + 1) = v12;
      if ( v12 >= v10 + 8 * v21 )
      {
        v22 = *(_QWORD *)(v10 + 8);
        if ( v22 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)&v23 = v22;
          *((_QWORD *)&v23 + 1) = v22 + 16;
        }
        v12 = (v22 + 16) & ((unsigned __int128)-(__int128)v22 >> 64);
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( (*(_BYTE *)(v12 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v12 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v12 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v12 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v25, (__int64 *)&v23);
    v10 = v23;
    v8 = 1;
LABEL_12:
    if ( ++v7 == v24 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v13 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    v14 = KeGetCurrentThread();
    if ( v13 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (__int64)&v14[1].Process;
    v17 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v13 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v17;
      p_Process += 96LL;
      if ( v17 >= 6 )
        goto LABEL_36;
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
      v18 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v14->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v18 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, v13, v18);
      goto LABEL_28;
    }
LABEL_36:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v13, SessionId, 0LL);
    _enable();
LABEL_28:
    v19 = KeGetCurrentThread();
    if ( v19->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
