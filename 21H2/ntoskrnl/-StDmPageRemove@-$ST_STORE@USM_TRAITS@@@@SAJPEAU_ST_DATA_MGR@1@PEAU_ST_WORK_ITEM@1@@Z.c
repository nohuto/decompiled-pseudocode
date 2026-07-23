/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028DB5C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14059C2D8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14059CCB0 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140251AF8 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14027556C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkFree @ 0x140286524 (SmHpChunkFree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028B7C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmEtwEnabled @ 0x14028C158 (SmEtwEnabled.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028CB3C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028CD48 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14028D0A4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028D238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14028DEBC (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14028DF30 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14028E7DC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028EDE8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14028F01C (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14028F0D8 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405984DC (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x14059DD24 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059F0B4 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // eax
  __int64 LeafSibling; // rax
  int v29; // eax
  __int64 v30; // r15
  ULONG_PTR v31; // r15
  struct _KTHREAD *v32; // rbx
  unsigned int v33; // edx
  unsigned __int8 v34; // r12
  unsigned int v35; // r8d
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _DWORD *v44; // rcx
  __int64 v45; // r14
  ULONG_PTR v46; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v49; // r15
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v59; // [rsp+50h] [rbp-19h]
  _DWORD *v60; // [rsp+58h] [rbp-11h]
  ULONGLONG *v61; // [rsp+60h] [rbp-9h]
  _OWORD v62[5]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v63; // [rsp+D0h] [rbp+67h]
  unsigned int v65; // [rsp+E0h] [rbp+77h] BYREF
  int v66; // [rsp+E8h] [rbp+7Fh]

  v62[0] = 0LL;
  v61 = SmEtwEnabled(0);
  v3 = a1 + 24;
  v5 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  v6 = *(_DWORD *)(a1 + 56);
  v58 = v5;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (char **)a1,
      a1 + 24);
    v6 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v6 & 0xFFFFFFFE;
  v7 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (_DWORD *)(a1 + 64),
      a1 + 88);
    v7 = *(_DWORD *)(a1 + 120);
  }
  v63 = 0;
  *(_DWORD *)(a1 + 120) = v7 & 0xFFFFFFFE;
  v8 = 0;
  v9 = 0;
LABEL_6:
  v65 = v9;
  while ( 1 )
  {
    v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            (char **)a1,
            *(_DWORD *)(a2 + 8),
            v3);
    if ( v10 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      v62,
      v3);
    v12 = *(_QWORD *)&v62[0];
    if ( !*(_QWORD *)&v62[0] )
      goto LABEL_33;
    v13 = *((_QWORD *)&v62[0] + 1) + 8LL;
    v14 = (unsigned __int16)**(_DWORD **)&v62[0] + 2LL;
    *((_QWORD *)&v62[0] + 1) = v13;
    if ( v13 < *(_QWORD *)&v62[0] + 8 * v14 )
      goto LABEL_10;
    v11 = a1 + 16;
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      LeafSibling = *(_QWORD *)(*(_QWORD *)&v62[0] + 8LL);
    }
    else
    {
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      *(_QWORD *)&v62[0]);
      v11 = -1LL;
      if ( LeafSibling == -1 )
      {
        v15 = -1LL;
        goto LABEL_11;
      }
    }
    if ( LeafSibling )
    {
      v13 = LeafSibling + 16;
      *(_QWORD *)&v62[0] = LeafSibling;
      *((_QWORD *)&v62[0] + 1) = LeafSibling + 16;
      v12 = LeafSibling;
LABEL_10:
      v15 = v13;
      goto LABEL_11;
    }
    v15 = 0LL;
LABEL_11:
    if ( v15 == -1 )
    {
      v10 = -1073741818;
      break;
    }
    if ( !v15 )
    {
      v8 = v63;
      goto LABEL_33;
    }
    v16 = *(_DWORD *)v15;
    if ( v58 < *(_DWORD *)v15 )
    {
      v8 = v63;
LABEL_33:
      if ( v8 )
      {
        v45 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v45 + 6021) & 4) != 0 )
        {
          v46 = v45 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v46);
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v46) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v49 = ++CurrentThread->AbAllocationRegionCount;
          v50 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v36 = !_BitScanReverse((unsigned int *)&v51, v50);
            if ( v36 )
              goto LABEL_107;
            v52 = (__int64)&CurrentThread->LockEntries[v51];
            v50 &= ~(1 << v51);
            if ( (*(_BYTE *)(v52 + 26) & 1) != 0
              && (*(_DWORD *)(v52 + 32) & 1) == 0
              && (*(_QWORD *)(v52 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v46 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v52 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v52 + 26) &= ~1u;
              if ( *(_QWORD *)(v52 + 32) )
                break;
            }
          }
          if ( !v52 )
          {
LABEL_107:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v46, SessionId, 0LL);
            goto LABEL_119;
          }
          *(_BYTE *)(v52 + 32) |= 2u;
          if ( *(__int64 *)(v52 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v52);
          *(_DWORD *)(v52 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v52 + 25) &= ~1u;
          *(_QWORD *)(v52 + 32) = 0LL;
          v53 = (signed __int64)(v52 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v49 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v53;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v53);
LABEL_119:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
          v36 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v36
            && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v55, v54, v56, v57);
          }
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v11, &v65, v8);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v26 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v26 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v26);
      }
      v10 = 0;
      break;
    }
    v17 = ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v15);
    v59 = *(_DWORD *)(v15 + 4);
    v60 = (_DWORD *)v17;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v17);
    if ( v61 )
      SmEtwLogStoreOp((_DWORD)v61, 1, v15, (_DWORD)v61, *v60, a1, 0, 0);
    v18 = *(_DWORD *)(v3 + 24);
    v19 = v3 + 8;
    v20 = v3 + 8;
    if ( v18 == -1 || !v18 )
    {
      v21 = a1 + 24;
    }
    else
    {
      v25 = 16LL * (unsigned int)(v18 - 1);
      v21 = a1 + 24;
      v20 = *(_QWORD *)(a1 + 24) + v25;
    }
    if ( *(_QWORD *)v20 == v12 )
    {
      *(_QWORD *)(v20 + 8) = v13;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (char **)a1,
        v21);
      if ( *(_DWORD *)(a1 + 48) != -1 )
      {
        v3 = a1 + 24;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v12 + 16),
          a1 + 24);
        v29 = *(_DWORD *)(a1 + 48);
        if ( v29 != -1 && v29 )
          v19 = *(_QWORD *)v3 + 16LL * (unsigned int)(v29 - 1);
        *(_QWORD *)(v19 + 8) = v13;
        goto LABEL_21;
      }
      *(_OWORD *)v20 = v62[0];
    }
    v3 = a1 + 24;
LABEL_21:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v62,
      a1);
    v62[0] = 0LL;
    v22 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            v3);
    v10 = v22;
    if ( v22 < 0 )
    {
      if ( v22 != -1073741818 )
        __int2c();
      break;
    }
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v23 = v60[1];
      if ( !(v23 >> 12) )
        __int2c();
      v8 = v63;
      v60[1] = v23 & 0xFFF | (((v23 >> 12) - 1) << 12);
      if ( ((v23 >> 12) - 1) << 12 )
        continue;
    }
    v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            (_DWORD *)(a1 + 64),
            v59,
            a1 + 88);
    if ( v10 < 0 )
    {
      if ( v10 == -1073741818 )
        goto LABEL_59;
      if ( v10 != -1073741275 || (v8 = v63, **(int **)(a1 + 1920) < 2) )
      {
        __int2c();
LABEL_59:
        if ( v10 != -1073741275 )
          break;
        v8 = v63;
      }
    }
    else
    {
      v10 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v60, a1 + 88);
      if ( v10 < 0 )
        break;
      SmHpChunkFree((_DWORD *)(a1 + 192), (unsigned __int64)v60);
      v24 = a2;
      v8 = v63;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        if ( v63 && v16 - v9 != v63 )
        {
          v30 = *(_QWORD *)(a1 + 800);
          if ( (*(_BYTE *)(v30 + 6021) & 4) != 0 )
          {
            v31 = v30 + 6024;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v31);
            v66 = 0;
            v32 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
              v33 = MmGetSessionIdEx(v32->ApcState.Process);
            else
              v33 = -1;
            --v32->SpecialApcDisable;
            v34 = ++v32->AbAllocationRegionCount;
            v35 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v36 = !_BitScanReverse((unsigned int *)&v37, v35);
              if ( v36 )
                break;
              v38 = (__int64)&v32->LockEntries[v37];
              v35 &= ~(1 << v37);
              if ( (*(_BYTE *)(v38 + 26) & 1) != 0
                && (*(_DWORD *)(v38 + 32) & 1) == 0
                && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v31 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v38 + 40) == v33 )
              {
                *(_BYTE *)(v38 + 26) &= ~1u;
                if ( *(_QWORD *)(v38 + 32) )
                {
                  if ( v38 )
                  {
                    *(_BYTE *)(v38 + 32) |= 2u;
                    if ( *(__int64 *)(v38 + 32) < 0 )
                      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
                    v66 = 0;
                    v66 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
                    *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
                    *(_BYTE *)(v38 + 25) &= ~1u;
                    *(_QWORD *)(v38 + 32) = 0LL;
                    v39 = (signed __int64)(v38 - (unsigned __int64)v32->LockEntries) / 96;
                    if ( v34 == 1 )
                      v32->AbEntrySummary |= 1 << v39;
                    else
                      _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v39);
                    goto LABEL_81;
                  }
                  break;
                }
              }
            }
            if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v32, v31, v33, 0LL);
LABEL_81:
            --v32->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v32);
            v36 = v32->SpecialApcDisable++ == -1;
            if ( v36 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
              KiCheckForKernelApcDelivery(v41, v40, v42, v43);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v24, &v65, v63);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
          v9 = v65;
          v3 = a1 + 24;
          v8 = 0;
          v63 = 0;
        }
        v44 = *(_DWORD **)(a1 + 1920);
        if ( !*v44 || *v44 == 3 && v16 < v44[1] )
        {
          if ( !v8 )
            v9 = v16;
          v63 = ++v8;
          goto LABEL_6;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v62,
    a1);
  return (unsigned int)v10;
}
