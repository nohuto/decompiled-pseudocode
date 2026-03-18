/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00801C0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007C6C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0080070 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00807B8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0080850 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00809B0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rax
  _QWORD *v2; // r8
  struct _SLIST_ENTRY *v3; // rbp
  PSLIST_ENTRY v4; // rbx
  int v5; // r14d
  struct _SLIST_ENTRY *v6; // rdx
  PSLIST_ENTRY v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r10
  __int64 v10; // rdx
  PSLIST_ENTRY v11; // rsi
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // r15d
  struct _SLIST_ENTRY *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rbx
  struct _SLIST_ENTRY *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  struct _SLIST_ENTRY *v23; // rcx
  __int64 v24; // rbx
  struct _SLIST_ENTRY *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned int v34; // r12d
  struct _SLIST_ENTRY *v35; // rcx
  __int64 v36; // r15
  struct _SLIST_ENTRY *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r13
  struct _SLIST_ENTRY *v41; // rcx
  __int64 v42; // rdi
  struct _SLIST_ENTRY *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r15
  struct _SLIST_ENTRY *v47; // rcx
  __int64 v48; // rbx
  struct _SLIST_ENTRY *v49; // rdi
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rcx
  struct VIDMM_RECYCLE_RANGE *v63; // rdi
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // [rsp+80h] [rbp+8h]
  __int64 v70; // [rsp+80h] [rbp+8h]
  struct _SLIST_ENTRY *v71; // [rsp+88h] [rbp+10h]
  __int64 v72; // [rsp+88h] [rbp+10h]
  __int64 v73; // [rsp+90h] [rbp+18h]
  struct _SLIST_ENTRY *v74; // [rsp+90h] [rbp+18h]
  __int64 v75; // [rsp+98h] [rbp+20h]

  Next = ListEntry[4].Next;
  v2 = 0LL;
  v3 = ListEntry[5].Next;
  v4 = ListEntry;
  v5 = *((_DWORD *)&ListEntry[13].Next + 2);
  v6 = Next[8].Next;
  if ( v6 != (struct _SLIST_ENTRY *)(*((_QWORD *)&Next[4].Next + 1) + 72LL) )
    v2 = &v6[-8].Next + 1;
  v7 = 0LL;
  if ( v2 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v7 = (PSLIST_ENTRY)v2[18];
      }
      else if ( v5 == 2 )
      {
        v7 = (PSLIST_ENTRY)v2[19];
      }
      else
      {
        WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
      }
    }
    else
    {
      v7 = (PSLIST_ENTRY)v2[17];
    }
  }
  v8 = *((_QWORD *)&v4[4].Next + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 120);
  if ( v10 != *(_QWORD *)(v8 + 72) + 72LL )
    v9 = (_QWORD *)(v10 - 120);
  v11 = 0LL;
  if ( v9 )
  {
    v12 = *((_DWORD *)&v4[13].Next + 2);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          v11 = (PSLIST_ENTRY)v9[19];
        else
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
      }
      else
      {
        v11 = (PSLIST_ENTRY)v9[18];
      }
    }
    else
    {
      v11 = (PSLIST_ENTRY)v9[17];
    }
  }
  if ( v7 )
  {
    if ( v11 )
    {
      v34 = *((_DWORD *)&v4[5].Next + 2);
      v74 = v7[4].Next;
      v75 = *((_QWORD *)&v11[4].Next + 1);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v34, v7);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v34, v4);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v34, v11);
      v35 = v7[6].Next;
      v72 = (__int64)v7[2].Next;
      v70 = *((_QWORD *)&v11[2].Next + 1);
      v36 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0);
        v7[6].Next = 0LL;
      }
      --*((_QWORD *)&v7[5].Next->Next + 1);
      v37 = v7[5].Next;
      *((_BYTE *)&v7[14].Next + 8) = 1;
      v7[14].Next = 0LL;
      v38 = *((_QWORD *)&v37[8].Next + 1);
      if ( v38 )
      {
        v57 = *(_QWORD *)(v38 + 24) + 144LL * *(_QWORD *)(v38 + 32);
        *(_DWORD *)v57 = 1;
        *(_QWORD *)(v57 + 8) = v7;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v57 + 16), 0LL);
        ++*(_QWORD *)(*((_QWORD *)&v37[8].Next + 1) + 32LL);
        v58 = *((_QWORD *)&v37[8].Next + 1);
        if ( *(_QWORD *)(v58 + 32) == *(_QWORD *)(v58 + 48) )
        {
          *(_QWORD *)(v58 + 32) = 0LL;
          *(_BYTE *)(*((_QWORD *)&v37[8].Next + 1) + 40LL) = 1;
        }
      }
      v39 = *(unsigned int *)(v36 + 1620);
      v40 = *(_QWORD *)(v36 + 1320);
      if ( (unsigned int)v39 >= 4 )
      {
        ++*(_DWORD *)(v40 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v40) < *(_WORD *)(v40 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v40, v7);
        }
        else
        {
          ++*(_DWORD *)(v40 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v40 + 56))(v7, v40);
        }
      }
      else
      {
        *(_QWORD *)(v36 + 8 * v39 + 1656) = v7;
        ++*(_DWORD *)(v36 + 1620);
      }
      v41 = v4[6].Next;
      v42 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v41 )
      {
        ExFreePoolWithTag(v41, 0);
        v4[6].Next = 0LL;
      }
      --*((_QWORD *)&v4[5].Next->Next + 1);
      v43 = v4[5].Next;
      *((_BYTE *)&v4[14].Next + 8) = 1;
      v4[14].Next = 0LL;
      v44 = *((_QWORD *)&v43[8].Next + 1);
      if ( v44 )
      {
        v59 = *(_QWORD *)(v44 + 24) + 144LL * *(_QWORD *)(v44 + 32);
        *(_DWORD *)v59 = 1;
        *(_QWORD *)(v59 + 8) = v4;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v59 + 16), 0LL);
        ++*(_QWORD *)(*((_QWORD *)&v43[8].Next + 1) + 32LL);
        v60 = *((_QWORD *)&v43[8].Next + 1);
        if ( *(_QWORD *)(v60 + 32) == *(_QWORD *)(v60 + 48) )
        {
          *(_QWORD *)(v60 + 32) = 0LL;
          *(_BYTE *)(*((_QWORD *)&v43[8].Next + 1) + 40LL) = 1;
        }
      }
      v45 = *(unsigned int *)(v42 + 1620);
      v46 = *(_QWORD *)(v42 + 1320);
      if ( (unsigned int)v45 >= 4 )
      {
        ++*(_DWORD *)(v46 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v46) < *(_WORD *)(v46 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v46, v4);
        }
        else
        {
          ++*(_DWORD *)(v46 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v46 + 56))(v4, v46);
        }
      }
      else
      {
        *(_QWORD *)(v42 + 8 * v45 + 1656) = v4;
        ++*(_DWORD *)(v42 + 1620);
      }
      v47 = v11[6].Next;
      v48 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v47 )
      {
        ExFreePoolWithTag(v47, 0);
        v11[6].Next = 0LL;
      }
      --*((_QWORD *)&v11[5].Next->Next + 1);
      v49 = v11[5].Next;
      *((_BYTE *)&v11[14].Next + 8) = 1;
      v11[14].Next = 0LL;
      v50 = *((_QWORD *)&v49[8].Next + 1);
      if ( v50 )
      {
        v61 = *(_QWORD *)(v50 + 24) + 144LL * *(_QWORD *)(v50 + 32);
        *(_DWORD *)v61 = 1;
        *(_QWORD *)(v61 + 8) = v11;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v61 + 16), 0LL);
        ++*(_QWORD *)(*((_QWORD *)&v49[8].Next + 1) + 32LL);
        v62 = *((_QWORD *)&v49[8].Next + 1);
        if ( *(_QWORD *)(v62 + 32) == *(_QWORD *)(v62 + 48) )
        {
          *(_QWORD *)(v62 + 32) = 0LL;
          *(_BYTE *)(*((_QWORD *)&v49[8].Next + 1) + 40LL) = 1;
        }
      }
      v51 = *(unsigned int *)(v48 + 1620);
      v52 = *(_QWORD *)(v48 + 1320);
      if ( (unsigned int)v51 < 4 )
      {
        *(_QWORD *)(v48 + 8 * v51 + 1656) = v11;
        ++*(_DWORD *)(v48 + 1620);
      }
      else
      {
        ++*(_DWORD *)(v52 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v52) >= *(_WORD *)(v52 + 16) )
        {
          ++*(_DWORD *)(v52 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v52 + 56))(v11, v52);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v52, v11);
        }
      }
      v53 = *((_QWORD *)&v3[2].Next->Next + 1);
      v54 = *(_DWORD *)(v53 + 1620);
      v55 = *(_QWORD *)(v53 + 1320);
      if ( v54 )
      {
        v56 = (unsigned int)(v54 - 1);
        v4 = *(PSLIST_ENTRY *)(v53 + 8 * v56 + 1656);
        *(_QWORD *)(v53 + 8 * v56 + 1656) = 0LL;
        --*(_DWORD *)(v53 + 1620);
      }
      else
      {
        ++*(_DWORD *)(v55 + 20);
        v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v55);
        if ( !v4 )
        {
          ++*(_DWORD *)(v55 + 24);
          v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v55 + 48))(
                               *(unsigned int *)(v55 + 36),
                               *(unsigned int *)(v55 + 44),
                               *(unsigned int *)(v55 + 40),
                               v55);
        }
      }
      if ( v4 )
        VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v4, v5, (__int64)v3, v72, v70);
      v4[4].Next = v74;
      *((_QWORD *)&v4[4].Next + 1) = v75;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v4);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v3[2].Next, v34, v4);
      if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v5 )
      {
        v63 = (struct VIDMM_RECYCLE_RANGE *)v4[4].Next;
        if ( !*((_DWORD *)v63 + 16) )
          goto LABEL_100;
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    }
    v11 = v4;
  }
  else
  {
    if ( !v11 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    v7 = v4;
  }
  v14 = *((_DWORD *)&v4[5].Next + 2);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v14, v7);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v14, v11);
  v15 = v7[6].Next;
  v16 = *((_QWORD *)&v11[2].Next + 1);
  v17 = (__int64)v7[2].Next;
  v71 = v7[4].Next;
  v73 = *((_QWORD *)&v11[4].Next + 1);
  v69 = v16;
  v18 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    v16 = v69;
    v7[6].Next = 0LL;
  }
  --*((_QWORD *)&v7[5].Next->Next + 1);
  v19 = v7[5].Next;
  *((_BYTE *)&v7[14].Next + 8) = 1;
  v7[14].Next = 0LL;
  v20 = *((_QWORD *)&v19[8].Next + 1);
  if ( v20 )
  {
    v64 = *(_QWORD *)(v20 + 24) + 144LL * *(_QWORD *)(v20 + 32);
    *(_DWORD *)v64 = 1;
    *(_QWORD *)(v64 + 8) = v7;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v64 + 16), 0LL);
    v16 = v69;
    ++*(_QWORD *)(*((_QWORD *)&v19[8].Next + 1) + 32LL);
    v65 = *((_QWORD *)&v19[8].Next + 1);
    if ( *(_QWORD *)(v65 + 32) == *(_QWORD *)(v65 + 48) )
    {
      *(_QWORD *)(v65 + 32) = 0LL;
      *(_BYTE *)(*((_QWORD *)&v19[8].Next + 1) + 40LL) = 1;
    }
  }
  v21 = *(unsigned int *)(v18 + 1620);
  v22 = *(_QWORD *)(v18 + 1320);
  if ( (unsigned int)v21 >= 4 )
  {
    ++*(_DWORD *)(v22 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v22) < *(_WORD *)(v22 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v22, v7);
    }
    else
    {
      ++*(_DWORD *)(v22 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v22 + 56))(v7, v22);
    }
    v16 = v69;
  }
  else
  {
    *(_QWORD *)(v18 + 8 * v21 + 1656) = v7;
    ++*(_DWORD *)(v18 + 1620);
  }
  v23 = v11[6].Next;
  v24 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    v16 = v69;
    v11[6].Next = 0LL;
  }
  --*((_QWORD *)&v11[5].Next->Next + 1);
  v25 = v11[5].Next;
  *((_BYTE *)&v11[14].Next + 8) = 1;
  v11[14].Next = 0LL;
  v26 = *((_QWORD *)&v25[8].Next + 1);
  if ( v26 )
  {
    v66 = *(_QWORD *)(v26 + 24) + 144LL * *(_QWORD *)(v26 + 32);
    *(_DWORD *)v66 = 1;
    *(_QWORD *)(v66 + 8) = v11;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v66 + 16), 0LL);
    v16 = v69;
    ++*(_QWORD *)(*((_QWORD *)&v25[8].Next + 1) + 32LL);
    v67 = *((_QWORD *)&v25[8].Next + 1);
    if ( *(_QWORD *)(v67 + 32) == *(_QWORD *)(v67 + 48) )
    {
      *(_QWORD *)(v67 + 32) = 0LL;
      *(_BYTE *)(*((_QWORD *)&v25[8].Next + 1) + 40LL) = 1;
    }
  }
  v27 = *(unsigned int *)(v24 + 1620);
  v28 = *(_QWORD *)(v24 + 1320);
  if ( (unsigned int)v27 >= 4 )
  {
    ++*(_DWORD *)(v28 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v28) >= *(_WORD *)(v28 + 16) )
    {
      ++*(_DWORD *)(v28 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v28 + 56))(v11, v28);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v28, v11);
    }
    v16 = v69;
  }
  else
  {
    *(_QWORD *)(v24 + 8 * v27 + 1656) = v11;
    ++*(_DWORD *)(v24 + 1620);
  }
  v29 = *((_QWORD *)&v3[2].Next->Next + 1);
  v30 = *(_DWORD *)(v29 + 1620);
  v31 = *(_QWORD *)(v29 + 1320);
  if ( v30 )
  {
    v32 = (unsigned int)(v30 - 1);
    v4 = *(PSLIST_ENTRY *)(v29 + 8 * v32 + 1656);
    *(_QWORD *)(v29 + 8 * v32 + 1656) = 0LL;
    --*(_DWORD *)(v29 + 1620);
  }
  else
  {
    ++*(_DWORD *)(v31 + 20);
    v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v31);
    if ( !v4 )
    {
      ++*(_DWORD *)(v31 + 24);
      v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v31 + 48))(
                           *(unsigned int *)(v31 + 36),
                           *(unsigned int *)(v31 + 44),
                           *(unsigned int *)(v31 + 40),
                           v31);
    }
    v16 = v69;
  }
  if ( v4 )
    VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v4, v5, (__int64)v3, v17, v16);
  v4[4].Next = v71;
  *((_QWORD *)&v4[4].Next + 1) = v73;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v4);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v3[2].Next, v14, v4);
  if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v5 )
  {
    v63 = (struct VIDMM_RECYCLE_RANGE *)v4[4].Next;
    if ( !*((_DWORD *)v63 + 16) )
    {
LABEL_100:
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v3[2].Next, 2LL, v4);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v4);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v63, v68);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
}
