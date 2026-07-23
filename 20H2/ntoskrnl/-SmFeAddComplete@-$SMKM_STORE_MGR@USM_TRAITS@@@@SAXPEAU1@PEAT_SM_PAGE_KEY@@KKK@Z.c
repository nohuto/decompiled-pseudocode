/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140255780
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1402556F0 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140255F38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140255AF4 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402563DC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14031C158 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  int v8; // edi
  int v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  struct _KTHREAD *v15; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r14
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  _BYTE v35[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v35, 0, 0x80uLL);
  v31[1] = 0LL;
  v31[2] = 0LL;
  v8 = 0;
  v34 = 0LL;
  v32 = 0;
  v31[0] = v35;
  v33 = 8;
  v9 = 1;
  v30 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v11 = v30;
  while ( 1 )
  {
    if ( v9 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v12,
        &v30,
        v31);
      v11 = v30;
      v9 = 0;
    }
    if ( v11 )
    {
      v13 = *((_QWORD *)&v30 + 1) + 8LL;
      v27 = (unsigned __int16)*(_DWORD *)v11 + 2LL;
      *((_QWORD *)&v30 + 1) = v13;
      if ( v13 >= v11 + 8 * v27 )
      {
        v28 = *(_QWORD *)(v11 + 8);
        if ( v28 )
        {
          *(_QWORD *)&v30 = *(_QWORD *)(v11 + 8);
          *((_QWORD *)&v30 + 1) = v28 + 16;
          v11 = v28;
        }
        v13 = (v28 + 16) & -(__int64)(v28 != 0);
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( (*(_BYTE *)(v13 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v13 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v13 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v31, &v30);
    v11 = v30;
    v9 = 1;
LABEL_12:
    if ( ++v8 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v14 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14);
    v29 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
    else
      SessionId = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount;
    v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      if ( v19 )
        break;
      v21 = (__int64)&v15->LockEntries[v20];
      v18 &= ~(1 << v20);
      if ( (*(_BYTE *)(v21 + 26) & 1) != 0
        && (*(_DWORD *)(v21 + 32) & 1) == 0
        && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v21 + 40) == SessionId )
      {
        *(_BYTE *)(v21 + 26) &= ~1u;
        if ( *(_QWORD *)(v21 + 32) )
        {
          if ( v21 )
          {
            *(_BYTE *)(v21 + 32) |= 2u;
            if ( *(__int64 *)(v21 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
            v29 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
            *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v21 + 25) &= ~1u;
            *(_QWORD *)(v21 + 32) = 0LL;
            v22 = (signed __int64)(v21 - (unsigned __int64)v15->LockEntries) / 96;
            if ( v17 == 1 )
              v15->AbEntrySummary |= 1 << v22;
            else
              _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
LABEL_30:
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v15, v14, &v29);
    v19 = v15->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery(v24, v23, v25, v26);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
