/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405FC7D8
 * Callers:
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405FC72C (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
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

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // edi
  int v6; // r15d
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct _KTHREAD *v15; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v18; // edx
  int v19; // r9d
  struct _KTHREAD *v20; // rax
  __int128 v23; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-99h] BYREF
  int v25; // [rsp+58h] [rbp-81h]
  int v26; // [rsp+5Ch] [rbp-7Dh]
  __int64 v27; // [rsp+60h] [rbp-79h]
  _BYTE v28[136]; // [rsp+68h] [rbp-71h] BYREF

  v3 = *a2;
  memset(v28, 0, 0x80uLL);
  v26 = 8;
  v24[1] = 0LL;
  v24[2] = 0LL;
  v27 = 0LL;
  v24[0] = v28;
  v6 = 1;
  v25 = 0;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v10 = v23;
  while ( 1 )
  {
    if ( v6 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v3,
        (__int64)v24);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v11,
        (__int64)&v23,
        (__int64)v24);
      v10 = v23;
      v6 = 0;
    }
    if ( v10 )
    {
      v12 = *((_QWORD *)&v23 + 1) + 8LL;
      v13 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      *((_QWORD *)&v23 + 1) = v12;
      if ( v12 >= v10 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)&v23 = v14;
          *((_QWORD *)&v23 + 1) = v14 + 16;
        }
        v12 = (v14 + 16) & ((unsigned __int128)-(__int128)v14 >> 64);
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( *(_BYTE *)(v12 + 6) == 3 )
    {
      *(_BYTE *)(v12 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v24, (__int64 *)&v23);
      v10 = v23;
      v6 = 1;
    }
    if ( ++v7 == a3 )
      break;
    ++v3;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)v9 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  _disable();
  p_Process = (__int64)&v15[1].Process;
  v18 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v18;
    p_Process += 96LL;
    if ( v18 >= 6 )
      goto LABEL_25;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_25:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, a1 + 440, SessionId, 0LL);
    _enable();
    goto LABEL_33;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v19 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v15->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v19 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v15, a1 + 440, v19);
LABEL_33:
  v20 = KeGetCurrentThread();
  if ( v20->SpecialApcDisable++ == -1 )
  {
    v20 = (struct _KTHREAD *)((char *)v20 + 152);
    if ( *(struct _KTHREAD **)&v20->Header.Lock != v20 )
      LOBYTE(v20) = KiCheckForKernelApcDelivery();
  }
  return (char)v20;
}
