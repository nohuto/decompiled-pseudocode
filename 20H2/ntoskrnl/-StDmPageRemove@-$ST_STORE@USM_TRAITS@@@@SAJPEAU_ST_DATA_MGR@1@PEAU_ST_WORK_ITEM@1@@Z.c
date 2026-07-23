/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14025A05C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140257D60 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14059A678 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14059B050 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140257CC8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmEtwEnabled @ 0x140258658 (SmEtwEnabled.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14025903C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140259248 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402595A4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140259738 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14025A3BC (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14025A430 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14025ACDC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14025B2E8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14025B51C (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14025B5D8 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     SmHpChunkFree @ 0x14025B86C (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026462C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140331300 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14059687C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x14059C0C4 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059D454 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
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
  _DWORD *v23; // r12
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned int v27; // eax
  __int64 LeafSibling; // rax
  int v30; // eax
  __int64 v31; // r15
  unsigned __int64 v32; // r15
  struct _KTHREAD *v33; // rbx
  unsigned int v34; // edx
  unsigned __int8 v35; // r12
  unsigned int v36; // r8d
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _DWORD *v45; // rcx
  __int64 v46; // r14
  unsigned __int64 v47; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v50; // r15
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v60; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v61; // [rsp+50h] [rbp-19h]
  _DWORD *v62; // [rsp+58h] [rbp-11h]
  ULONGLONG *v63; // [rsp+60h] [rbp-9h]
  _OWORD v64[5]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v65; // [rsp+D0h] [rbp+67h]
  unsigned int v67; // [rsp+E0h] [rbp+77h] BYREF
  int v68; // [rsp+E8h] [rbp+7Fh] BYREF

  v64[0] = 0LL;
  v63 = SmEtwEnabled(0);
  v3 = a1 + 24;
  v5 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  v6 = *(_DWORD *)(a1 + 56);
  v60 = v5;
  if ( (v6 & 1) != 0 )
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
      (char **)(a1 + 64),
      a1 + 88);
    v7 = *(_DWORD *)(a1 + 120);
  }
  v65 = 0;
  *(_DWORD *)(a1 + 120) = v7 & 0xFFFFFFFE;
  v8 = 0;
  v9 = 0;
LABEL_6:
  v67 = v9;
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
      v64,
      v3);
    v12 = *(_QWORD *)&v64[0];
    if ( !*(_QWORD *)&v64[0] )
      goto LABEL_33;
    v13 = *((_QWORD *)&v64[0] + 1) + 8LL;
    v14 = (unsigned __int16)**(_DWORD **)&v64[0] + 2LL;
    *((_QWORD *)&v64[0] + 1) = v13;
    if ( v13 < *(_QWORD *)&v64[0] + 8 * v14 )
      goto LABEL_10;
    v11 = a1 + 16;
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      LeafSibling = *(_QWORD *)(*(_QWORD *)&v64[0] + 8LL);
    }
    else
    {
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      *(_QWORD *)&v64[0]);
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
      *(_QWORD *)&v64[0] = LeafSibling;
      *((_QWORD *)&v64[0] + 1) = LeafSibling + 16;
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
      v8 = v65;
      goto LABEL_33;
    }
    v16 = *(_DWORD *)v15;
    if ( v60 < *(_DWORD *)v15 )
    {
      v8 = v65;
LABEL_33:
      if ( v8 )
      {
        v46 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v46 + 6021) & 4) != 0 )
        {
          v47 = v46 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v47, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v47);
          v59 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v47) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v50 = ++CurrentThread->AbAllocationRegionCount;
          v51 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v37 = !_BitScanReverse((unsigned int *)&v52, v51);
            if ( v37 )
              goto LABEL_107;
            v53 = (__int64)&CurrentThread->LockEntries[v52];
            v51 &= ~(1 << v52);
            if ( (*(_BYTE *)(v53 + 26) & 1) != 0
              && (*(_DWORD *)(v53 + 32) & 1) == 0
              && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v47 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v53 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v53 + 26) &= ~1u;
              if ( *(_QWORD *)(v53 + 32) )
                break;
            }
          }
          if ( !v53 )
          {
LABEL_107:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v47, SessionId, 0LL);
            goto LABEL_119;
          }
          *(_BYTE *)(v53 + 32) |= 2u;
          if ( *(__int64 *)(v53 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v53);
          v59 = *(_DWORD *)(v53 + 88) & 0x1FFFF;
          *(_DWORD *)(v53 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v53 + 25) &= ~1u;
          *(_QWORD *)(v53 + 32) = 0LL;
          v54 = (signed __int64)(v53 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v50 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v54;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v54);
LABEL_119:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v47, &v59);
          v37 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v37
            && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v56, v55, v57, v58);
          }
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v11, &v67, v8);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v27 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v27 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v27);
      }
      v10 = 0;
      break;
    }
    v17 = ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v15);
    v61 = *(_DWORD *)(v15 + 4);
    v62 = (_DWORD *)v17;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v17);
    if ( v63 )
      SmEtwLogStoreOp((_DWORD)v63, 1, v15, (_DWORD)v63, *v62, a1, 0, 0);
    v18 = *(_DWORD *)(v3 + 24);
    v19 = v3 + 8;
    v20 = v3 + 8;
    if ( v18 == -1 || !v18 )
    {
      v21 = a1 + 24;
    }
    else
    {
      v26 = 16LL * (unsigned int)(v18 - 1);
      v21 = a1 + 24;
      v20 = *(_QWORD *)(a1 + 24) + v26;
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
        v30 = *(_DWORD *)(a1 + 48);
        if ( v30 != -1 && v30 )
          v19 = *(_QWORD *)v3 + 16LL * (unsigned int)(v30 - 1);
        *(_QWORD *)(v19 + 8) = v13;
        goto LABEL_21;
      }
      *(_OWORD *)v20 = v64[0];
    }
    v3 = a1 + 24;
LABEL_21:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v64,
      a1);
    v64[0] = 0LL;
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
    v23 = v62;
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v24 = v62[1];
      if ( !(v24 >> 12) )
        __int2c();
      v8 = v65;
      v62[1] = v24 & 0xFFF | (((v24 >> 12) - 1) << 12);
      if ( ((v24 >> 12) - 1) << 12 )
        continue;
    }
    v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            (char **)(a1 + 64),
            v61,
            a1 + 88);
    if ( v10 < 0 )
    {
      if ( v10 == -1073741818 )
        goto LABEL_59;
      if ( v10 != -1073741275 || (v8 = v65, **(int **)(a1 + 1920) < 2) )
      {
        __int2c();
LABEL_59:
        if ( v10 != -1073741275 )
          break;
        v8 = v65;
      }
    }
    else
    {
      v10 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v23, a1 + 88);
      if ( v10 < 0 )
        break;
      SmHpChunkFree(a1 + 192, v23);
      v25 = a2;
      v8 = v65;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        if ( v65 && v16 - v9 != v65 )
        {
          v31 = *(_QWORD *)(a1 + 800);
          if ( (*(_BYTE *)(v31 + 6021) & 4) != 0 )
          {
            v32 = v31 + 6024;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v32);
            v68 = 0;
            v33 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v32) == 1 )
              v34 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
            else
              v34 = -1;
            --v33->SpecialApcDisable;
            v35 = ++v33->AbAllocationRegionCount;
            v36 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v37 = !_BitScanReverse((unsigned int *)&v38, v36);
              if ( v37 )
                break;
              v39 = (__int64)&v33->LockEntries[v38];
              v36 &= ~(1 << v38);
              if ( (*(_BYTE *)(v39 + 26) & 1) != 0
                && (*(_DWORD *)(v39 + 32) & 1) == 0
                && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v32 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v39 + 40) == v34 )
              {
                *(_BYTE *)(v39 + 26) &= ~1u;
                if ( *(_QWORD *)(v39 + 32) )
                {
                  if ( v39 )
                  {
                    *(_BYTE *)(v39 + 32) |= 2u;
                    if ( *(__int64 *)(v39 + 32) < 0 )
                      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
                    v68 = 0;
                    v68 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
                    *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
                    *(_BYTE *)(v39 + 25) &= ~1u;
                    *(_QWORD *)(v39 + 32) = 0LL;
                    v40 = (signed __int64)(v39 - (unsigned __int64)v33->LockEntries) / 96;
                    if ( v35 == 1 )
                      v33->AbEntrySummary |= 1 << v40;
                    else
                      _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v40);
                    goto LABEL_81;
                  }
                  break;
                }
              }
            }
            if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v33, v32, v34, 0LL);
LABEL_81:
            --v33->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v33, v32, &v68);
            v37 = v33->SpecialApcDisable++ == -1;
            if ( v37 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
              KiCheckForKernelApcDelivery(v42, v41, v43, v44);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v25, &v67, v65);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
          v9 = v67;
          v3 = a1 + 24;
          v8 = 0;
          v65 = 0;
        }
        v45 = *(_DWORD **)(a1 + 1920);
        if ( !*v45 || *v45 == 3 && v16 < v45[1] )
        {
          if ( !v8 )
            v9 = v16;
          v65 = ++v8;
          goto LABEL_6;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v64,
    a1);
  return (unsigned int)v10;
}
