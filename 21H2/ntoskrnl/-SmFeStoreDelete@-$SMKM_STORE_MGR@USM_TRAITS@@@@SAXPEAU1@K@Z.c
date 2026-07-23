/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14029F4C4
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14029F430 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140286934 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402895F4 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140289EDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r14
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  __int64 v26[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[136]; // [rsp+78h] [rbp-88h] BYREF

  memset(v31, 0, 0x80uLL);
  v27[1] = 0LL;
  v27[2] = 0LL;
  v4 = 0;
  v30 = 0LL;
  v5 = 0;
  v28 = 0;
  v27[0] = v31;
  v29 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v8 = *(_QWORD *)(a1 + 448);
  *(_OWORD *)v26 = 0LL;
  if ( !v8 )
    goto LABEL_2;
  while ( !*(_BYTE *)(v8 + 3) )
    v8 = *(_QWORD *)(v8 + 8);
  v26[0] = v8;
  v26[1] = v8 + 8;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        (__int64)v27);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v25,
        (__int64)v26,
        (__int64)v27);
      v8 = v26[0];
      v4 = 0;
    }
    if ( !v8 )
      break;
    v9 = v26[1] + 8;
    v10 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
    v26[1] = v9;
    if ( v9 >= v8 + 8 * v10 )
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( v11 )
      {
        v26[0] = *(_QWORD *)(v8 + 8);
        v26[1] = v11 + 16;
        v8 = v11;
      }
      v9 = (v11 + 16) & -(__int64)(v11 != 0);
    }
    if ( !v9 )
      break;
    if ( *(unsigned __int16 *)(v9 + 4) == a2 )
    {
      v5 = *(_DWORD *)v9;
      *(_BYTE *)(v9 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v27, v26);
      v4 = 1;
LABEL_2:
      v8 = v26[0];
      continue;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v12 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx(v12->ApcState.Process);
  else
    SessionId = -1;
  --v12->SpecialApcDisable;
  v14 = ++v12->AbAllocationRegionCount;
  v15 = ((char)v12->AbEntrySummary | (char)v12->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v15);
    if ( v16 )
      break;
    v18 = (__int64)&v12->LockEntries[v17];
    v15 &= ~(1 << v17);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v18 + 40) == SessionId )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
      {
        if ( v18 )
        {
          *(_BYTE *)(v18 + 32) |= 2u;
          if ( *(__int64 *)(v18 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
          *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v18 + 25) &= ~1u;
          *(_QWORD *)(v18 + 32) = 0LL;
          v19 = (signed __int64)(v18 - (unsigned __int64)v12->LockEntries) / 96;
          if ( v14 == 1 )
            v12->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v12->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_29;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, v7, SessionId, 0LL);
LABEL_29:
  --v12->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v12);
  v16 = v12->SpecialApcDisable++ == -1;
  if ( v16 && ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery(v21, v20, v22, v23);
  return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
}
