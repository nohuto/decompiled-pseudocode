/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140289280
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1402891F0 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140289A38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
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

_BYTE *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  _BYTE *result; // rax
  int v9; // edi
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // rsi
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  _BYTE v35[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v35, 0, 0x80uLL);
  result = v35;
  v31[1] = 0LL;
  v31[2] = 0LL;
  v9 = 0;
  v34 = 0LL;
  v32 = 0;
  v31[0] = v35;
  v33 = 8;
  v10 = 1;
  *(_OWORD *)v30 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = (_BYTE *)ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v12 = v30[0];
  while ( 1 )
  {
    if ( v10 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v31);
      result = (_BYTE *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
                          v13,
                          v30,
                          v31);
      v12 = v30[0];
      v10 = 0;
    }
    if ( v12 )
    {
      v14 = v30[1] + 8;
      v28 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
      v30[1] = v14;
      result = (_BYTE *)(v12 + 8 * v28);
      if ( v14 >= (unsigned __int64)result )
      {
        v29 = *(_QWORD *)(v12 + 8);
        if ( v29 )
        {
          v30[0] = *(_QWORD *)(v12 + 8);
          v30[1] = v29 + 16;
          v12 = v29;
        }
        result = (_BYTE *)(v29 + 16);
        v14 = (v29 + 16) & -(__int64)(v29 != 0);
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( (*(_BYTE *)(v14 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v14 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v14 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v14 + 6) = 0;
    result = (_BYTE *)SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v31, v30);
    v12 = v30[0];
    v10 = 1;
LABEL_12:
    if ( ++v9 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v15 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
      SessionId = MmGetSessionIdEx(v16->ApcState.Process);
    else
      SessionId = -1;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      if ( v20 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v19 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v22 + 40) == SessionId )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
            *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            *(_QWORD *)(v22 + 32) = 0LL;
            v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
            if ( v18 == 1 )
              v16->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, SessionId, 0LL);
LABEL_30:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16);
    v20 = v16->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v25, v24, v26, v27);
    return (_BYTE *)KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
