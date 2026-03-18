/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0066440
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065BA0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060004 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00608BC (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0060A00 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00610A0 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00632A4 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064CA0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0084730 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rax
  PSLIST_ENTRY v2; // rbx
  struct _SLIST_ENTRY *v3; // r15
  unsigned int v4; // ebp
  _QWORD *v5; // rcx
  struct _SLIST_ENTRY *v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // r12
  struct _SLIST_ENTRY *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  struct _SLIST_ENTRY *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _SLIST_ENTRY *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  struct _SLIST_ENTRY *v24; // rcx
  void *v25; // rcx
  struct _SLIST_ENTRY *v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r13
  void *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdi
  _QWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v44; // rax
  struct _SLIST_ENTRY *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  struct _SLIST_ENTRY *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  struct _SLIST_ENTRY *v54; // rsi
  struct _RTL_BALANCED_NODE *v55; // rdi
  struct _RTL_BALANCED_NODE *v56; // rax
  struct _RTL_BALANCED_NODE *v57; // rax
  unsigned int v58; // r12d
  void *v59; // rcx
  __int64 v60; // r14
  __int64 v61; // r13
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r13
  struct _SLIST_ENTRY *v65; // rcx
  __int64 v66; // rdi
  struct _SLIST_ENTRY *v67; // r14
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r14
  void *v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdi
  __int64 v80; // rax
  struct _RTL_BALANCED_NODE *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rcx
  struct VIDMM_RECYCLE_RANGE *v90; // rdi
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // rcx
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // r8
  _QWORD v101[2]; // [rsp+30h] [rbp-68h] BYREF
  char v102; // [rsp+40h] [rbp-58h]
  struct _SLIST_ENTRY *v103; // [rsp+A0h] [rbp+8h]
  __int64 v104; // [rsp+A0h] [rbp+8h]
  __int64 v105; // [rsp+A8h] [rbp+10h]
  __int64 v106; // [rsp+A8h] [rbp+10h]
  __int64 v107; // [rsp+B0h] [rbp+18h]
  struct _SLIST_ENTRY *v108; // [rsp+B0h] [rbp+18h]
  __int64 v109; // [rsp+B8h] [rbp+20h]

  Next = ListEntry[4].Next;
  v2 = ListEntry;
  v3 = ListEntry[5].Next;
  v4 = *((_DWORD *)&ListEntry[13].Next + 2);
  v5 = 0LL;
  v6 = Next[8].Next;
  if ( v6 != (struct _SLIST_ENTRY *)(*((_QWORD *)&Next[4].Next + 1) + 72LL) )
    v5 = &v6[-8].Next + 1;
  v7 = 0LL;
  if ( v5 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v7 = v5[18];
      }
      else if ( v4 == 2 )
      {
        v7 = v5[19];
      }
      else
      {
        v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4 - 1);
        v82[3] = 270LL;
        v82[4] = 52LL;
        v82[5] = 10LL;
        v82[6] = 0LL;
        v82[7] = 0LL;
        WdLogEvent5_WdCriticalError(v82);
      }
    }
    else
    {
      v7 = v5[17];
    }
  }
  v8 = *((_QWORD *)&v2[4].Next + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 120);
  v11 = *(_QWORD *)(v8 + 72) + 72LL;
  if ( v10 != v11 )
    v9 = (_QWORD *)(v10 - 120);
  v12 = 0LL;
  if ( v9 )
  {
    v11 = *((unsigned int *)&v2[13].Next + 2);
    if ( (_DWORD)v11 )
    {
      v11 = (unsigned int)(v11 - 1);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == 1 )
        {
          v12 = v9[19];
        }
        else
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
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
        v12 = v9[18];
      }
    }
    else
    {
      v12 = v9[17];
    }
  }
  if ( v7 )
  {
    if ( v12 )
    {
      v58 = *((_DWORD *)&v2[5].Next + 2);
      v108 = *(struct _SLIST_ENTRY **)(v7 + 64);
      v109 = *(_QWORD *)(v12 + 72);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v2[5].Next[2].Next, v58, v7);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v2[5].Next[2].Next, v58, (__int64)v2);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v2[5].Next[2].Next, v58, v12);
      v59 = *(void **)(v7 + 96);
      v106 = *(_QWORD *)(v7 + 32);
      v104 = *(_QWORD *)(v12 + 40);
      v60 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v59 )
      {
        ExFreePoolWithTag(v59, 0);
        *(_QWORD *)(v7 + 96) = 0LL;
      }
      --*(_QWORD *)(*(_QWORD *)(v7 + 80) + 8LL);
      v61 = *(_QWORD *)(v7 + 80);
      *(_BYTE *)(v7 + 232) = 1;
      *(_QWORD *)(v7 + 224) = 0LL;
      v62 = *(_QWORD *)(v61 + 136);
      if ( v62 )
      {
        v84 = *(_QWORD *)(v62 + 24) + 144LL * *(_QWORD *)(v62 + 32);
        *(_DWORD *)v84 = 1;
        *(_QWORD *)(v84 + 8) = v7;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v84 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v61 + 136) + 32LL);
        v85 = *(_QWORD *)(v61 + 136);
        if ( *(_QWORD *)(v85 + 32) == *(_QWORD *)(v85 + 48) )
        {
          *(_QWORD *)(v85 + 32) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v61 + 136) + 40LL) = 1;
        }
      }
      v63 = *(unsigned int *)(v60 + 1612);
      v64 = *(_QWORD *)(v60 + 1320);
      if ( (unsigned int)v63 >= 4 )
      {
        ++*(_DWORD *)(v64 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v64) < *(_WORD *)(v64 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v64, (PSLIST_ENTRY)v7);
        }
        else
        {
          ++*(_DWORD *)(v64 + 32);
          (*(void (__fastcall **)(__int64, __int64))(v64 + 56))(v7, v64);
        }
      }
      else
      {
        *(_QWORD *)(v60 + 8 * v63 + 1648) = v7;
        ++*(_DWORD *)(v60 + 1612);
      }
      v65 = v2[6].Next;
      v66 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v65 )
      {
        ExFreePoolWithTag(v65, 0);
        v2[6].Next = 0LL;
      }
      --*((_QWORD *)&v2[5].Next->Next + 1);
      v67 = v2[5].Next;
      *((_BYTE *)&v2[14].Next + 8) = 1;
      v2[14].Next = 0LL;
      v68 = *((_QWORD *)&v67[8].Next + 1);
      if ( v68 )
      {
        v86 = *(_QWORD *)(v68 + 24) + 144LL * *(_QWORD *)(v68 + 32);
        *(_DWORD *)v86 = 1;
        *(_QWORD *)(v86 + 8) = v2;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v86 + 16), 0LL);
        ++*(_QWORD *)(*((_QWORD *)&v67[8].Next + 1) + 32LL);
        v87 = *((_QWORD *)&v67[8].Next + 1);
        if ( *(_QWORD *)(v87 + 32) == *(_QWORD *)(v87 + 48) )
        {
          *(_QWORD *)(v87 + 32) = 0LL;
          *(_BYTE *)(*((_QWORD *)&v67[8].Next + 1) + 40LL) = 1;
        }
      }
      v69 = *(unsigned int *)(v66 + 1612);
      v70 = *(_QWORD *)(v66 + 1320);
      if ( (unsigned int)v69 >= 4 )
      {
        ++*(_DWORD *)(v70 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v70) >= *(_WORD *)(v70 + 16) )
        {
          ++*(_DWORD *)(v70 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v70 + 56))(v2, v70);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v70, v2);
        }
      }
      else
      {
        *(_QWORD *)(v66 + 8 * v69 + 1648) = v2;
        ++*(_DWORD *)(v66 + 1612);
      }
      v71 = *(void **)(v12 + 96);
      v72 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v71 )
      {
        ExFreePoolWithTag(v71, 0);
        *(_QWORD *)(v12 + 96) = 0LL;
      }
      --*(_QWORD *)(*(_QWORD *)(v12 + 80) + 8LL);
      v73 = *(_QWORD *)(v12 + 80);
      *(_BYTE *)(v12 + 232) = 1;
      *(_QWORD *)(v12 + 224) = 0LL;
      v74 = *(_QWORD *)(v73 + 136);
      if ( v74 )
      {
        v88 = *(_QWORD *)(v74 + 24) + 144LL * *(_QWORD *)(v74 + 32);
        *(_DWORD *)v88 = 1;
        *(_QWORD *)(v88 + 8) = v12;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v88 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v73 + 136) + 32LL);
        v89 = *(_QWORD *)(v73 + 136);
        if ( *(_QWORD *)(v89 + 32) == *(_QWORD *)(v89 + 48) )
        {
          *(_QWORD *)(v89 + 32) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v73 + 136) + 40LL) = 1;
        }
      }
      v75 = *(unsigned int *)(v72 + 1612);
      v76 = *(_QWORD *)(v72 + 1320);
      if ( (unsigned int)v75 < 4 )
      {
        *(_QWORD *)(v72 + 8 * v75 + 1648) = v12;
        ++*(_DWORD *)(v72 + 1612);
      }
      else
      {
        ++*(_DWORD *)(v76 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v76) >= *(_WORD *)(v76 + 16) )
        {
          ++*(_DWORD *)(v76 + 32);
          (*(void (__fastcall **)(__int64, __int64))(v76 + 56))(v12, v76);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v76, (PSLIST_ENTRY)v12);
        }
      }
      v77 = *((_QWORD *)&v3[2].Next->Next + 1);
      v78 = *(_DWORD *)(v77 + 1612);
      v79 = *(_QWORD *)(v77 + 1320);
      if ( v78 )
      {
        v80 = (unsigned int)(v78 - 1);
        v2 = *(PSLIST_ENTRY *)(v77 + 8 * v80 + 1648);
        *(_QWORD *)(v77 + 8 * v80 + 1648) = 0LL;
        --*(_DWORD *)(v77 + 1612);
      }
      else
      {
        ++*(_DWORD *)(v79 + 20);
        v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v79);
        if ( !v2 )
        {
          ++*(_DWORD *)(v79 + 24);
          v2 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v79 + 48))(
                               *(unsigned int *)(v79 + 36),
                               *(unsigned int *)(v79 + 44),
                               *(unsigned int *)(v79 + 40),
                               v79);
        }
      }
      if ( v2 )
        VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v2, v4, (__int64)v3, v106, v104);
      v2[4].Next = v108;
      *((_QWORD *)&v2[4].Next + 1) = v109;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v2, v77);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(&v3[2].Next->Next, v58, (__int64)v2);
      if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v4 )
      {
        v90 = (struct VIDMM_RECYCLE_RANGE *)v2[4].Next;
        if ( !*((_DWORD *)v90 + 16) )
          goto LABEL_155;
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v2;
    }
    v12 = (__int64)v2;
  }
  else
  {
    if ( !v12 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v2;
    v7 = (__int64)v2;
  }
  v14 = *((int *)&v2[5].Next + 2);
  v15 = v2[5].Next[2].Next;
  v16 = WdLogNewEntry5_WdEvent(v11, v10);
  *(_QWORD *)(v16 + 24) = v7;
  *(_QWORD *)(v16 + 32) = v14;
  WdLogEvent5_WdEvent(v16);
  switch ( (_DWORD)v14 )
  {
    case 0:
      v18 = v15 + 3;
      goto LABEL_24;
    case 1:
      v18 = (struct _SLIST_ENTRY *)((char *)v15 + 56);
      goto LABEL_24;
    case 2:
      v18 = v15 + 4;
LABEL_24:
      RtlAvlRemoveNode(v18, v7);
      goto LABEL_25;
  }
  v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v14 - 1), v17);
  v91[3] = 270LL;
  v91[4] = 52LL;
  v91[5] = 16LL;
  v91[6] = v14;
  v91[7] = 0LL;
  WdLogEvent5_WdCriticalError(v91);
LABEL_25:
  *(_DWORD *)(v7 + 88) = 3;
  v21 = v2[5].Next[2].Next;
  v22 = WdLogNewEntry5_WdEvent(v20, v19);
  *(_QWORD *)(v22 + 24) = v12;
  *(_QWORD *)(v22 + 32) = v14;
  WdLogEvent5_WdEvent(v22);
  switch ( (_DWORD)v14 )
  {
    case 0:
      v24 = v21 + 3;
      goto LABEL_29;
    case 1:
      v24 = (struct _SLIST_ENTRY *)((char *)v21 + 56);
      goto LABEL_29;
    case 2:
      v24 = v21 + 4;
LABEL_29:
      RtlAvlRemoveNode(v24, v12);
      goto LABEL_30;
  }
  v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v14 - 1), v23);
  v92[3] = 270LL;
  v92[4] = 52LL;
  v92[5] = 16LL;
  v92[6] = v14;
  v92[7] = 0LL;
  WdLogEvent5_WdCriticalError(v92);
LABEL_30:
  *(_DWORD *)(v12 + 88) = 3;
  v25 = *(void **)(v7 + 96);
  v26 = *(struct _SLIST_ENTRY **)(v7 + 64);
  v103 = *(struct _SLIST_ENTRY **)(v7 + 32);
  v105 = *(_QWORD *)(v12 + 40);
  v107 = *(_QWORD *)(v12 + 72);
  v27 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    *(_QWORD *)(v7 + 96) = 0LL;
  }
  --*(_QWORD *)(*(_QWORD *)(v7 + 80) + 8LL);
  v28 = *(_QWORD *)(v7 + 80);
  *(_BYTE *)(v7 + 232) = 1;
  *(_QWORD *)(v7 + 224) = 0LL;
  v29 = *(_QWORD *)(v28 + 136);
  if ( v29 )
  {
    v93 = *(_QWORD *)(v29 + 24) + 144LL * *(_QWORD *)(v29 + 32);
    *(_DWORD *)v93 = 1;
    *(_QWORD *)(v93 + 8) = v7;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v93 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v28 + 136) + 32LL);
    v94 = *(_QWORD *)(v28 + 136);
    if ( *(_QWORD *)(v94 + 32) == *(_QWORD *)(v94 + 48) )
    {
      *(_QWORD *)(v94 + 32) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v28 + 136) + 40LL) = 1;
    }
  }
  v30 = *(unsigned int *)(v27 + 1612);
  v31 = *(_QWORD *)(v27 + 1320);
  if ( (unsigned int)v30 >= 4 )
  {
    ++*(_DWORD *)(v31 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v31) < *(_WORD *)(v31 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++*(_DWORD *)(v31 + 32);
      (*(void (__fastcall **)(__int64, __int64))(v31 + 56))(v7, v31);
    }
  }
  else
  {
    *(_QWORD *)(v27 + 8 * v30 + 1648) = v7;
    ++*(_DWORD *)(v27 + 1612);
  }
  v32 = *(void **)(v12 + 96);
  v33 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(v12 + 96) = 0LL;
  }
  --*(_QWORD *)(*(_QWORD *)(v12 + 80) + 8LL);
  v34 = *(_QWORD *)(v12 + 80);
  *(_BYTE *)(v12 + 232) = 1;
  *(_QWORD *)(v12 + 224) = 0LL;
  v35 = *(_QWORD **)(v34 + 136);
  if ( v35 )
  {
    v95 = v35[3] + 144LL * v35[4];
    *(_DWORD *)v95 = 1;
    *(_QWORD *)(v95 + 8) = v12;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v95 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v34 + 136) + 32LL);
    v35 = *(_QWORD **)(v34 + 136);
    if ( v35[4] == v35[6] )
    {
      v35[4] = 0LL;
      *(_BYTE *)(*(_QWORD *)(v34 + 136) + 40LL) = 1;
    }
  }
  v36 = *(unsigned int *)(v33 + 1612);
  v37 = *(_QWORD *)(v33 + 1320);
  if ( (unsigned int)v36 >= 4 )
  {
    ++*(_DWORD *)(v37 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v37) >= *(_WORD *)(v37 + 16) )
    {
      ++*(_DWORD *)(v37 + 32);
      (*(void (__fastcall **)(__int64, __int64))(v37 + 56))(v12, v37);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v37, (PSLIST_ENTRY)v12);
    }
  }
  else
  {
    *(_QWORD *)(v33 + 8 * v36 + 1648) = v12;
    ++*(_DWORD *)(v33 + 1612);
  }
  v38 = *((_QWORD *)&v3[2].Next->Next + 1);
  v39 = *(_DWORD *)(v38 + 1612);
  v40 = *(_QWORD *)(v38 + 1320);
  if ( v39 )
  {
    v41 = (unsigned int)(v39 - 1);
    v2 = *(PSLIST_ENTRY *)(v38 + 8 * v41 + 1648);
    *(_QWORD *)(v38 + 8 * v41 + 1648) = 0LL;
    --*(_DWORD *)(v38 + 1612);
  }
  else
  {
    ++*(_DWORD *)(v40 + 20);
    v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v40);
    if ( !v2 )
    {
      ++*(_DWORD *)(v40 + 24);
      v2 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v40 + 48))(
                           *(unsigned int *)(v40 + 36),
                           *(unsigned int *)(v40 + 44),
                           *(unsigned int *)(v40 + 40),
                           v40);
    }
  }
  if ( v2 )
  {
    v42 = WdLogNewEntry5_WdEvent(v35, v38);
    *(_QWORD *)(v42 + 24) = v2;
    WdLogEvent5_WdEvent(v42);
    v2[2].Next = v103;
    *((_QWORD *)&v2[2].Next + 1) = v105;
    v2[3].Next = v103;
    *((_DWORD *)&v2[1].Next + 2) = 1;
    v2[4].Next = 0LL;
    *((_QWORD *)&v2[4].Next + 1) = 0LL;
    v2[5].Next = v3;
    *((_DWORD *)&v2[13].Next + 2) = v4;
    LOWORD(v2[8].Next) = 0;
    ++*((_QWORD *)&v3->Next + 1);
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v2[2].Next);
    v44 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
    *((_QWORD *)&v2[3].Next + 1) = v44;
    v45 = v2[5].Next;
    *((_QWORD *)&v2[5].Next + 1) = 3LL;
    v2[6].Next = 0LL;
    *((_QWORD *)&v2[6].Next + 1) = 0LL;
    v2[7].Next = 0LL;
    *((_QWORD *)&v2[7].Next + 1) = 0LL;
    BYTE2(v2[8].Next) = 0;
    *((_QWORD *)&v2[8].Next + 1) = 0LL;
    v2[9].Next = 0LL;
    v2[12].Next = 0LL;
    *((_WORD *)&v2[9].Next + 4) = 0;
    v2[10].Next = 0LL;
    *((_QWORD *)&v2[10].Next + 1) = 0LL;
    *((_QWORD *)&v2[11].Next + 1) = 0LL;
    v2[11].Next = 0LL;
    *((_QWORD *)&v2[12].Next + 1) = 0LL;
    v2[13].Next = 0LL;
    *((_BYTE *)&v2[14].Next + 8) = 0;
    v2[14].Next = 0LL;
    v46 = *((_QWORD *)&v45[8].Next + 1);
    if ( v46 )
    {
      v96 = *(_QWORD *)(v46 + 24) + 144LL * *(_QWORD *)(v46 + 32);
      *(_DWORD *)v96 = 0;
      *(_QWORD *)(v96 + 8) = v2;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v96 + 16), 0LL);
      ++*(_QWORD *)(*((_QWORD *)&v45[8].Next + 1) + 32LL);
      v97 = *((_QWORD *)&v45[8].Next + 1);
      if ( *(_QWORD *)(v97 + 32) == *(_QWORD *)(v97 + 48) )
      {
        *(_QWORD *)(v97 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&v45[8].Next + 1) + 40LL) = 1;
      }
    }
  }
  *((_QWORD *)&v2[4].Next + 1) = v107;
  v2[4].Next = v26;
  while ( 1 )
  {
    v47 = *((unsigned int *)&v2[13].Next + 2);
    if ( (_DWORD)v47 )
    {
      v47 = (unsigned int)(v47 - 1);
      if ( (_DWORD)v47 )
      {
        if ( (_DWORD)v47 == 1 )
        {
          *((_QWORD *)&v26[9].Next + 1) = v2;
        }
        else
        {
          v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v38);
          v98[3] = 270LL;
          v98[4] = 52LL;
          v98[5] = 10LL;
          v98[6] = 0LL;
          v98[7] = 0LL;
          WdLogEvent5_WdCriticalError(v98);
        }
      }
      else
      {
        v26[9].Next = v2;
      }
    }
    else
    {
      *((_QWORD *)&v26[8].Next + 1) = v2;
    }
    if ( v26 == *(&v2[4].Next + 1) )
      break;
    v48 = *((_QWORD *)&v26[7].Next + 1);
    if ( v48 == *((_QWORD *)&v26[4].Next + 1) + 72LL )
      v26 = 0LL;
    else
      v26 = (struct _SLIST_ENTRY *)(v48 - 120);
  }
  v49 = v3[2].Next;
  v50 = WdLogNewEntry5_WdEvent(v47, v38);
  *(_QWORD *)(v50 + 24) = v2;
  *(_QWORD *)(v50 + 32) = v14;
  WdLogEvent5_WdEvent(v50);
  v53 = *((_QWORD *)&v2[3].Next + 1);
  v101[0] = *((_QWORD *)&v2[2].Next + 1) - (unsigned __int64)v2[2].Next;
  v101[1] = v53;
  v102 = 0;
  if ( (_DWORD)v14 )
  {
    if ( (_DWORD)v14 == 1 )
    {
      v54 = (struct _SLIST_ENTRY *)((char *)v49 + 56);
      LOBYTE(v52) = 0;
      v55 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)&v49[3].Next + 1);
      if ( v55 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v101, v55) < 0 )
          {
            v57 = v55->Children[0];
            if ( !v55->Children[0] )
              goto LABEL_62;
          }
          else
          {
            v57 = v55->Children[1];
            if ( !v57 )
              goto LABEL_69;
          }
          v55 = v57;
        }
      }
    }
    else
    {
      if ( (_DWORD)v14 != 2 )
      {
        v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v14 - 1), v51);
        v99[3] = 270LL;
        v99[4] = 52LL;
        v99[5] = 15LL;
        v99[6] = v14;
        v99[7] = 0LL;
        WdLogEvent5_WdCriticalError(v99);
        goto LABEL_71;
      }
      v54 = v49 + 4;
      LOBYTE(v52) = 0;
      v55 = (struct _RTL_BALANCED_NODE *)v49[4].Next;
      if ( v55 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v101, v55) < 0 )
          {
            v56 = v55->Children[0];
            if ( !v55->Children[0] )
              goto LABEL_62;
          }
          else
          {
            v56 = v55->Children[1];
            if ( !v56 )
              goto LABEL_69;
          }
          v55 = v56;
        }
      }
    }
  }
  else
  {
    v54 = v49 + 3;
    LOBYTE(v52) = 0;
    v55 = (struct _RTL_BALANCED_NODE *)v49[3].Next;
    if ( v55 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v101, v55) < 0 )
        {
          v81 = v55->Children[0];
          if ( !v55->Children[0] )
          {
LABEL_62:
            LOBYTE(v52) = 0;
            break;
          }
        }
        else
        {
          v81 = v55->Children[1];
          if ( !v81 )
          {
LABEL_69:
            LOBYTE(v52) = 1;
            break;
          }
        }
        v55 = v81;
      }
    }
  }
  RtlAvlInsertNodeEx(v54, v55, v52, v2);
LABEL_71:
  *((_DWORD *)&v2[5].Next + 2) = v14;
  if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v4 )
  {
    v90 = (struct VIDMM_RECYCLE_RANGE *)v2[4].Next;
    if ( !*((_DWORD *)v90 + 16) )
    {
LABEL_155:
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v3[2].Next, 2LL, (__int64)v2);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v2);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v90, v100);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v2;
}
