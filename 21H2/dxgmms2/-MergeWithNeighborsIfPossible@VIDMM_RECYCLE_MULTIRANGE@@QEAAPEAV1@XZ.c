/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007E5E0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00607B0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005F68 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C0005F94 (-AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C00159B8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007B8B4 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BA30 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BCF8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007F2A0 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0086A90 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00896F4 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008A7C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // r13
  _QWORD *v3; // r9
  unsigned int v4; // ecx
  PSLIST_ENTRY v5; // rbx
  struct _SLIST_ENTRY *v6; // rax
  struct _SLIST_ENTRY *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r8
  PSLIST_ENTRY v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // r15d
  struct _SLIST_ENTRY *v18; // rcx
  struct _SLIST_ENTRY *v19; // r12
  __int64 v20; // r14
  struct _SLIST_ENTRY *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  struct _SLIST_ENTRY *v25; // rcx
  __int64 v26; // rbp
  struct _SLIST_ENTRY *v27; // rcx
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rbx
  struct _SLIST_ENTRY *v32; // rcx
  __int64 v33; // rdi
  struct _SLIST_ENTRY *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  unsigned int v38; // r14d
  PSLIST_ENTRY v39; // rbx
  __int64 v41; // r15
  struct _SLIST_ENTRY *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _SLIST_ENTRY *v48; // rcx
  struct _SLIST_ENTRY *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rax
  struct _SLIST_ENTRY *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r12
  struct _SLIST_ENTRY *v56; // rcx
  struct _SLIST_ENTRY *v57; // r15
  struct _SLIST_ENTRY *v58; // rdi
  __int64 v59; // r14
  struct _SLIST_ENTRY *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbp
  struct _SLIST_ENTRY *v64; // rcx
  __int64 v65; // rbp
  __int64 v66; // rdx
  struct _SLIST_ENTRY *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rbp
  int v72; // eax
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v77; // rax
  struct _SLIST_ENTRY *v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rcx
  struct _SLIST_ENTRY *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rax
  _QWORD *v90; // rax
  struct _SLIST_ENTRY *v91; // rsi
  struct _RTL_BALANCED_NODE *v92; // rdi
  struct _RTL_BALANCED_NODE *v93; // rax
  struct VIDMM_RECYCLE_RANGE *v94; // rdi
  _QWORD v95[2]; // [rsp+30h] [rbp-68h] BYREF
  char v96; // [rsp+40h] [rbp-58h]
  unsigned int v97; // [rsp+A0h] [rbp+8h]
  __int64 v98; // [rsp+A8h] [rbp+10h]
  int v99; // [rsp+A8h] [rbp+10h]
  struct _SLIST_ENTRY *v100; // [rsp+B0h] [rbp+18h]
  __int64 v101; // [rsp+B0h] [rbp+18h]
  __int64 v102; // [rsp+B8h] [rbp+20h]

  Next = ListEntry[5].Next;
  v3 = 0LL;
  v4 = *((_DWORD *)&ListEntry[13].Next + 2);
  v5 = 0LL;
  v97 = v4;
  v6 = ListEntry[4].Next;
  v7 = v6[8].Next;
  v8 = *((_QWORD *)&v6[4].Next + 1) + 72LL;
  if ( v7 != (struct _SLIST_ENTRY *)v8 )
    v3 = &v7[-8].Next + 1;
  if ( v3 )
  {
    if ( v4 )
    {
      v9 = v4 - 1;
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == 1 )
        {
          v5 = (PSLIST_ENTRY)v3[19];
        }
        else
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
          v10[3] = 270LL;
          v10[4] = 52LL;
          v10[5] = 10LL;
          v10[6] = 0LL;
          v10[7] = 0LL;
          WdLogEvent5_WdCriticalError(v10);
        }
      }
      else
      {
        v5 = (PSLIST_ENTRY)v3[18];
      }
    }
    else
    {
      v5 = (PSLIST_ENTRY)v3[17];
    }
  }
  v11 = *((_QWORD *)&ListEntry[4].Next + 1);
  v12 = 0LL;
  v13 = 0LL;
  v14 = *(_QWORD *)(v11 + 120);
  v15 = *(_QWORD *)(v11 + 72) + 72LL;
  if ( v14 != v15 )
    v12 = (_QWORD *)(v14 - 120);
  if ( v12 )
  {
    v15 = *((unsigned int *)&ListEntry[13].Next + 2);
    if ( (_DWORD)v15 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 == 1 )
        {
          v13 = (PSLIST_ENTRY)v12[19];
        }
        else
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
          v16[3] = 270LL;
          v16[4] = 52LL;
          v16[5] = 10LL;
          v16[6] = 0LL;
          v16[7] = 0LL;
          WdLogEvent5_WdCriticalError(v16);
        }
      }
      else
      {
        v13 = (PSLIST_ENTRY)v12[18];
      }
    }
    else
    {
      v13 = (PSLIST_ENTRY)v12[17];
    }
  }
  if ( v5 )
  {
    if ( v13 )
    {
      v17 = *((_DWORD *)&ListEntry[5].Next + 2);
      v100 = v5[4].Next;
      v102 = *((_QWORD *)&v13[4].Next + 1);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)ListEntry[5].Next[2].Next, v17, (__int64)v5);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)ListEntry[5].Next[2].Next, v17, (__int64)ListEntry);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)ListEntry[5].Next[2].Next, v17, (__int64)v13);
      v18 = v5[6].Next;
      v19 = v5[2].Next;
      v98 = *((_QWORD *)&v13[2].Next + 1);
      v20 = *((_QWORD *)&Next[2].Next->Next + 1);
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        v5[6].Next = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v5[5].Next, 1, (__int64)v5);
      v21 = v5[5].Next;
      v22 = *((_QWORD *)&v21->Next + 1) - 1LL;
      *((_QWORD *)&v21->Next + 1) = v22;
      if ( !v21->Next && !v22 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v21);
      *((_BYTE *)&v5[14].Next + 8) = 1;
      v5[14].Next = 0LL;
      v23 = *(unsigned int *)(v20 + 1612);
      v24 = *(_QWORD *)(v20 + 1320);
      if ( (unsigned int)v23 >= 4 )
      {
        ++*(_DWORD *)(v24 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v24) < *(_WORD *)(v24 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, v5);
        }
        else
        {
          ++*(_DWORD *)(v24 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v24 + 56))(v5, v24);
        }
      }
      else
      {
        *(_QWORD *)(v20 + 8 * v23 + 1648) = v5;
        ++*(_DWORD *)(v20 + 1612);
      }
      --*(_DWORD *)(v20 + 1680);
      v25 = ListEntry[6].Next;
      v26 = *((_QWORD *)&Next[2].Next->Next + 1);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        ListEntry[6].Next = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)ListEntry[5].Next, 1, (__int64)ListEntry);
      v27 = ListEntry[5].Next;
      v28 = *((_QWORD *)&v27->Next + 1) - 1LL;
      v29 = v27->Next == 0LL;
      *((_QWORD *)&v27->Next + 1) = v28;
      if ( v29 && !v28 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v27);
      *((_BYTE *)&ListEntry[14].Next + 8) = 1;
      ListEntry[14].Next = 0LL;
      v30 = *(unsigned int *)(v26 + 1612);
      v31 = *(_QWORD *)(v26 + 1320);
      if ( (unsigned int)v30 >= 4 )
      {
        ++*(_DWORD *)(v31 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v31) < *(_WORD *)(v31 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, ListEntry);
        }
        else
        {
          ++*(_DWORD *)(v31 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v31 + 56))(ListEntry, v31);
        }
      }
      else
      {
        *(_QWORD *)(v26 + 8 * v30 + 1648) = ListEntry;
        ++*(_DWORD *)(v26 + 1612);
      }
      --*(_DWORD *)(v26 + 1680);
      v32 = v13[6].Next;
      v33 = *((_QWORD *)&Next[2].Next->Next + 1);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        v13[6].Next = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v13[5].Next, 1, (__int64)v13);
      v34 = v13[5].Next;
      v35 = *((_QWORD *)&v34->Next + 1) - 1LL;
      v29 = v34->Next == 0LL;
      *((_QWORD *)&v34->Next + 1) = v35;
      if ( v29 && !v35 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v34);
      *((_BYTE *)&v13[14].Next + 8) = 1;
      v13[14].Next = 0LL;
      v36 = *(unsigned int *)(v33 + 1612);
      v37 = *(_QWORD *)(v33 + 1320);
      if ( (unsigned int)v36 >= 4 )
      {
        ++*(_DWORD *)(v37 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v37) < *(_WORD *)(v37 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v37, v13);
        }
        else
        {
          ++*(_DWORD *)(v37 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v37 + 56))(v13, v37);
        }
      }
      else
      {
        *(_QWORD *)(v33 + 8 * v36 + 1648) = v13;
        ++*(_DWORD *)(v33 + 1612);
      }
      --*(_DWORD *)(v33 + 1680);
      v38 = v97;
      v39 = VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
              *((VIDMM_RECYCLE_HEAP_MGR **)&Next[2].Next->Next + 1),
              *(struct _LOOKASIDE_LIST_EX **)(*((_QWORD *)&Next[2].Next->Next + 1) + 1320LL),
              (void **)(*((_QWORD *)&Next[2].Next->Next + 1) + 1648LL),
              (unsigned int *)(*((_QWORD *)&Next[2].Next->Next + 1) + 1612LL));
      if ( v39 )
        VIDMM_RECYCLE_MULTIRANGE::Init(v39, v97, Next, v19, v98);
      v39[4].Next = v100;
      *((_QWORD *)&v39[4].Next + 1) = v102;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v39);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(&Next[2].Next->Next, v17, (__int64)v39);
      goto LABEL_145;
    }
    v13 = ListEntry;
  }
  else
  {
    if ( !v13 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)ListEntry;
    v5 = ListEntry;
  }
  v41 = *((int *)&ListEntry[5].Next + 2);
  v99 = *((_DWORD *)&ListEntry[5].Next + 2);
  v42 = ListEntry[5].Next[2].Next;
  v43 = WdLogNewEntry5_WdEvent(v15, v14);
  *(_QWORD *)(v43 + 24) = v5;
  *(_QWORD *)(v43 + 32) = v41;
  WdLogEvent5_WdEvent(v43);
  if ( (_DWORD)v41 )
  {
    if ( (_DWORD)v41 == 1 )
    {
      v48 = (struct _SLIST_ENTRY *)((char *)v42 + 56);
    }
    else
    {
      if ( (_DWORD)v41 != 2 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v41 - 1), v44);
        v45[3] = 270LL;
        v45[4] = 52LL;
        v45[5] = 16LL;
        v45[6] = v41;
        v45[7] = 0LL;
        WdLogEvent5_WdCriticalError(v45);
        goto LABEL_68;
      }
      v48 = v42 + 4;
    }
  }
  else
  {
    v48 = v42 + 3;
  }
  RtlAvlRemoveNode(v48, v5);
LABEL_68:
  *((_DWORD *)&v5[5].Next + 2) = 3;
  v49 = ListEntry[5].Next[2].Next;
  v50 = WdLogNewEntry5_WdEvent(v47, v46);
  *(_QWORD *)(v50 + 24) = v13;
  *(_QWORD *)(v50 + 32) = v41;
  WdLogEvent5_WdEvent(v50);
  if ( (_DWORD)v41 )
  {
    if ( (_DWORD)v41 == 1 )
    {
      v53 = (struct _SLIST_ENTRY *)((char *)v49 + 56);
    }
    else
    {
      if ( (_DWORD)v41 != 2 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v41 - 1), v51);
        v52[3] = 270LL;
        v52[4] = 52LL;
        v52[5] = 16LL;
        v52[6] = v41;
        v52[7] = 0LL;
        WdLogEvent5_WdCriticalError(v52);
        goto LABEL_76;
      }
      v53 = v49 + 4;
    }
  }
  else
  {
    v53 = v49 + 3;
  }
  RtlAvlRemoveNode(v53, v13);
LABEL_76:
  v54 = *((_QWORD *)&v13[4].Next + 1);
  v55 = *((_QWORD *)&v13[2].Next + 1);
  *((_DWORD *)&v13[5].Next + 2) = 3;
  v56 = v5[6].Next;
  v57 = v5[2].Next;
  v58 = v5[4].Next;
  v101 = v54;
  v59 = *((_QWORD *)&Next[2].Next->Next + 1);
  if ( v56 )
  {
    ExFreePoolWithTag(v56, 0);
    v5[6].Next = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v5[5].Next, 1, (__int64)v5);
  v60 = v5[5].Next;
  v61 = *((_QWORD *)&v60->Next + 1) - 1LL;
  v29 = v60->Next == 0LL;
  *((_QWORD *)&v60->Next + 1) = v61;
  if ( v29 && !v61 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v60);
  *((_BYTE *)&v5[14].Next + 8) = 1;
  v5[14].Next = 0LL;
  v62 = *(unsigned int *)(v59 + 1612);
  v63 = *(_QWORD *)(v59 + 1320);
  if ( (unsigned int)v62 >= 4 )
  {
    ++*(_DWORD *)(v63 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v63) < *(_WORD *)(v63 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v63, v5);
    }
    else
    {
      ++*(_DWORD *)(v63 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v63 + 56))(v5, v63);
    }
  }
  else
  {
    *(_QWORD *)(v59 + 8 * v62 + 1648) = v5;
    ++*(_DWORD *)(v59 + 1612);
  }
  --*(_DWORD *)(v59 + 1680);
  v64 = v13[6].Next;
  v65 = *((_QWORD *)&Next[2].Next->Next + 1);
  if ( v64 )
  {
    ExFreePoolWithTag(v64, 0);
    v13[6].Next = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v13[5].Next, 1, (__int64)v13);
  v67 = v13[5].Next;
  v68 = *((_QWORD *)&v67->Next + 1) - 1LL;
  v29 = v67->Next == 0LL;
  *((_QWORD *)&v67->Next + 1) = v68;
  if ( v29 && !v68 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v67);
  *((_BYTE *)&v13[14].Next + 8) = 1;
  v13[14].Next = 0LL;
  v69 = *(unsigned int *)(v65 + 1612);
  v70 = *(_QWORD *)(v65 + 1320);
  if ( (unsigned int)v69 >= 4 )
  {
    ++*(_DWORD *)(v70 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v70) < *(_WORD *)(v70 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v70, v13);
    }
    else
    {
      ++*(_DWORD *)(v70 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v70 + 56))(v13, v70);
    }
  }
  else
  {
    *(_QWORD *)(v65 + 8 * v69 + 1648) = v13;
    ++*(_DWORD *)(v65 + 1612);
  }
  --*(_DWORD *)(v65 + 1680);
  v71 = *((_QWORD *)&Next[2].Next->Next + 1);
  v72 = *(_DWORD *)(v71 + 1612);
  v73 = *(_QWORD *)(v71 + 1320);
  if ( v72 )
  {
    v74 = (unsigned int)(v72 - 1);
    v39 = *(PSLIST_ENTRY *)(v71 + 8 * v74 + 1648);
    *(_QWORD *)(v71 + 8 * v74 + 1648) = 0LL;
    --*(_DWORD *)(v71 + 1612);
  }
  else
  {
    ++*(_DWORD *)(v73 + 20);
    v39 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v73);
    if ( !v39 )
    {
      ++*(_DWORD *)(v73 + 24);
      v39 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v73 + 48))(
                            *(unsigned int *)(v73 + 36),
                            *(unsigned int *)(v73 + 44),
                            *(unsigned int *)(v73 + 40),
                            v73);
    }
  }
  if ( v39 )
  {
    ++*(_DWORD *)(v71 + 1680);
    v75 = WdLogNewEntry5_WdEvent(v67, v66);
    *(_QWORD *)(v75 + 24) = v39;
    WdLogEvent5_WdEvent(v75);
    v38 = v97;
    v39[2].Next = v57;
    v39[4].Next = 0LL;
    *((_QWORD *)&v39[4].Next + 1) = 0LL;
    LOWORD(v39[8].Next) = 0;
    *((_DWORD *)&v39[1].Next + 2) = 1;
    v39[5].Next = Next;
    *((_QWORD *)&v39[2].Next + 1) = v55;
    v39[3].Next = v57;
    *((_DWORD *)&v39[13].Next + 2) = v97;
    ++*((_QWORD *)&Next->Next + 1);
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v39[2].Next);
    if ( LeastSignificantBit < 0 )
      v77 = 0LL;
    else
      v77 = 1LL << LeastSignificantBit;
    *((_QWORD *)&v39[3].Next + 1) = v77;
    v78 = v39[5].Next;
    *((_QWORD *)&v39[5].Next + 1) = 3LL;
    v39[6].Next = 0LL;
    *((_QWORD *)&v39[6].Next + 1) = 0LL;
    v39[7].Next = 0LL;
    *((_QWORD *)&v39[7].Next + 1) = 0LL;
    BYTE2(v39[8].Next) = 0;
    *((_QWORD *)&v39[8].Next + 1) = 0LL;
    v39[9].Next = 0LL;
    v39[12].Next = 0LL;
    *((_WORD *)&v39[9].Next + 4) = 0;
    v39[10].Next = 0LL;
    *((_QWORD *)&v39[10].Next + 1) = 0LL;
    *((_QWORD *)&v39[11].Next + 1) = 0LL;
    v39[11].Next = 0LL;
    *((_QWORD *)&v39[12].Next + 1) = 0LL;
    v39[13].Next = 0LL;
    *((_BYTE *)&v39[14].Next + 8) = 0;
    v39[14].Next = 0LL;
    v79 = *((_QWORD *)&v78[8].Next + 1);
    if ( v79 )
    {
      v80 = *(_QWORD *)(v79 + 24) + 144LL * *(_QWORD *)(v79 + 32);
      *(_DWORD *)v80 = 0;
      *(_QWORD *)(v80 + 8) = v39;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v80 + 16), 0LL);
      ++*(_QWORD *)(*((_QWORD *)&v78[8].Next + 1) + 32LL);
      v81 = *((_QWORD *)&v78[8].Next + 1);
      if ( *(_QWORD *)(v81 + 32) == *(_QWORD *)(v81 + 48) )
      {
        *(_QWORD *)(v81 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&v78[8].Next + 1) + 40LL) = 1;
      }
    }
  }
  else
  {
    v38 = v97;
  }
  *((_QWORD *)&v39[4].Next + 1) = v101;
  v39[4].Next = v58;
  while ( 1 )
  {
    v82 = *((unsigned int *)&v39[13].Next + 2);
    if ( (_DWORD)v82 )
    {
      v82 = (unsigned int)(v82 - 1);
      if ( (_DWORD)v82 )
      {
        if ( (_DWORD)v82 == 1 )
        {
          *((_QWORD *)&v58[9].Next + 1) = v39;
        }
        else
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v82, v66);
          v83[3] = 270LL;
          v83[4] = 52LL;
          v83[5] = 10LL;
          v83[6] = 0LL;
          v83[7] = 0LL;
          WdLogEvent5_WdCriticalError(v83);
        }
      }
      else
      {
        v58[9].Next = v39;
      }
    }
    else
    {
      *((_QWORD *)&v58[8].Next + 1) = v39;
    }
    if ( v58 == *(&v39[4].Next + 1) )
      break;
    v66 = *((_QWORD *)&v58[7].Next + 1);
    v84 = *((_QWORD *)&v58[4].Next + 1);
    v58 = 0LL;
    if ( v66 != v84 + 72 )
      v58 = (struct _SLIST_ENTRY *)(v66 - 120);
  }
  v85 = Next[2].Next;
  v86 = WdLogNewEntry5_WdEvent(v82, v66);
  *(_QWORD *)(v86 + 24) = v39;
  *(_QWORD *)(v86 + 32) = v99;
  WdLogEvent5_WdEvent(v86);
  v89 = *((_QWORD *)&v39[3].Next + 1);
  v95[0] = *((_QWORD *)&v39[2].Next + 1) - (unsigned __int64)v39[2].Next;
  v95[1] = v89;
  v96 = 0;
  switch ( v99 )
  {
    case 0:
      v91 = v85 + 3;
      LOBYTE(v88) = 0;
      v92 = (struct _RTL_BALANCED_NODE *)v85[3].Next;
      if ( v92 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v95, v92) < 0 )
          {
            if ( !v92->Children[0] )
              goto LABEL_142;
            v92 = v92->Children[0];
          }
          if ( !v92->Children[1] )
            break;
          v92 = v92->Children[1];
        }
LABEL_127:
        LOBYTE(v88) = 1;
      }
      goto LABEL_143;
    case 1:
      v91 = (struct _SLIST_ENTRY *)((char *)v85 + 56);
      LOBYTE(v88) = 0;
      v92 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)&v85[3].Next + 1);
      if ( v92 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v95, v92) >= 0 )
          {
            if ( !v92->Children[1] )
              goto LABEL_127;
            v92 = v92->Children[1];
          }
          if ( !v92->Children[0] )
            break;
          v92 = v92->Children[0];
        }
LABEL_142:
        LOBYTE(v88) = 0;
      }
      goto LABEL_143;
    case 2:
      v91 = v85 + 4;
      LOBYTE(v88) = 0;
      v92 = (struct _RTL_BALANCED_NODE *)v85[4].Next;
      if ( v92 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v95, v92) < 0 )
          {
            v93 = v92->Children[0];
            if ( !v92->Children[0] )
              goto LABEL_142;
          }
          else
          {
            v93 = v92->Children[1];
            if ( !v93 )
              goto LABEL_127;
          }
          v92 = v93;
        }
      }
LABEL_143:
      RtlAvlInsertNodeEx(v91, v92, v88, v39);
      goto LABEL_144;
  }
  v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v99 - 1), v87);
  v90[3] = 270LL;
  v90[4] = 52LL;
  v90[5] = 15LL;
  v90[6] = v99;
  v90[7] = 0LL;
  WdLogEvent5_WdCriticalError(v90);
LABEL_144:
  *((_DWORD *)&v39[5].Next + 2) = v99;
LABEL_145:
  if ( Next->Next == (struct _SLIST_ENTRY *)1 && !v38 )
  {
    v94 = (struct VIDMM_RECYCLE_RANGE *)v39[4].Next;
    if ( !*((_DWORD *)v94 + 16) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)Next[2].Next, 2LL, (__int64)v39);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
        *((VIDMM_RECYCLE_HEAP_MGR **)&Next[2].Next->Next + 1),
        (struct VIDMM_RECYCLE_MULTIRANGE *)v39);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&Next[2].Next->Next + 1), v94);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v39;
}
