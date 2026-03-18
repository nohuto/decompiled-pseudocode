/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065BA0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0061E80 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065900 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060004 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0060844 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00610A0 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0061128 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006114C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00634BC (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0064610 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064CA0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0066440 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0084730 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C18B8 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

char __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_MULTIRANGE *v2; // r15
  _QWORD *Alignment_low; // rdx
  struct VIDMM_RECYCLE_RANGE *v4; // rsi
  _QWORD *v5; // r13
  union _SLIST_HEADER *v6; // rcx
  int v7; // eax
  struct _SLIST_ENTRY *v8; // r14
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  PSLIST_ENTRY v12; // rdi
  __int64 v13; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v15; // rax
  __int64 v16; // r9
  struct _SLIST_ENTRY *v17; // rbx
  struct _SLIST_ENTRY *Next; // r14
  __int64 v19; // rcx
  struct _SLIST_ENTRY *v20; // rax
  __int64 v21; // rax
  struct VIDMM_RECYCLE_RANGE *v22; // rbx
  __int64 *NextRange; // r14
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // r12
  __int64 v27; // rax
  PSLIST_ENTRY v28; // rbx
  __int64 v29; // rax
  CCHAR v30; // al
  __int64 v31; // rax
  struct _SLIST_ENTRY *v32; // r15
  struct _SLIST_ENTRY *v33; // r12
  __int64 v34; // rcx
  struct _SLIST_ENTRY *v35; // rax
  _QWORD *v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r8
  struct _RTL_BALANCED_NODE **v40; // r12
  __int64 v41; // rax
  struct _RTL_BALANCED_NODE *v42; // rbx
  struct _RTL_BALANCED_NODE *v43; // rax
  struct _SLIST_ENTRY *v44; // rcx
  _QWORD *v45; // r13
  _QWORD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v49; // r15
  __int64 v50; // r14
  _QWORD *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  struct _RTL_BALANCED_NODE *v57; // rbx
  struct _RTL_BALANCED_NODE *v58; // rax
  char *v59; // rcx
  struct _SLIST_ENTRY *v60; // rcx
  __int64 v61; // rbx
  struct VIDMM_RECYCLE_RANGE *v62; // r10
  struct VIDMM_RECYCLE_RANGE *v63; // r8
  int v64; // ecx
  int v65; // r9d
  struct VIDMM_RECYCLE_RANGE *v66; // rdi
  struct VIDMM_RECYCLE_RANGE *v67; // rdx
  _QWORD *v68; // rbx
  unsigned __int8 v69; // cl
  char result; // al
  __int64 v71; // rdx
  struct _RTL_BALANCED_NODE *v72; // rax
  PSLIST_ENTRY v73; // rax
  struct _SLIST_ENTRY *v74; // rax
  struct VIDMM_RECYCLE_RANGE *v75; // rdi
  __int64 v76; // r8
  struct VIDMM_RECYCLE_RANGE *v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rcx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v82; // r8
  struct _SLIST_ENTRY *v83; // rax
  struct _SLIST_ENTRY *v84; // r8
  __int64 v85; // r8
  __int64 v86; // rcx
  _QWORD *v87; // rax
  struct _RTL_BALANCED_NODE *v88; // rbx
  struct _RTL_BALANCED_NODE *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rbx
  _QWORD *v92; // rdx
  struct VIDMM_RECYCLE_RANGE *v93; // rbx
  char v94; // di
  int v95; // ecx
  int v96; // ecx
  _QWORD *v97; // [rsp+30h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v98; // [rsp+38h] [rbp-30h]
  __int64 v99; // [rsp+40h] [rbp-28h] BYREF
  __int64 v100; // [rsp+48h] [rbp-20h]
  char v101; // [rsp+50h] [rbp-18h]
  union _SLIST_HEADER *v104; // [rsp+C0h] [rbp+58h]
  struct _SLIST_ENTRY *v105; // [rsp+C0h] [rbp+58h]
  _QWORD *v106; // [rsp+C0h] [rbp+58h]
  __int64 v107; // [rsp+C8h] [rbp+60h]

  v2 = a2;
  Alignment_low = (_QWORD *)*((_QWORD *)this + 1);
  v98 = (struct _SLIST_ENTRY *)&v97;
  v97 = &v97;
  v4 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v2 + 8);
  v5 = (_QWORD *)*((_QWORD *)v2 + 9);
  v6 = (union _SLIST_HEADER *)Alignment_low[165];
  v7 = *((_DWORD *)Alignment_low + 403);
  v8 = (struct _SLIST_ENTRY *)*((_QWORD *)v4 + 4);
  v9 = v5[5];
  v10 = *((_QWORD *)v4 + 9);
  v104 = v6;
  if ( v7 )
  {
    v11 = (unsigned int)(v7 - 1);
    v12 = (PSLIST_ENTRY)Alignment_low[v11 + 206];
    Alignment_low[v11 + 206] = 0LL;
    --*((_DWORD *)Alignment_low + 403);
  }
  else
  {
    ++*((_DWORD *)&v6[1].HeaderX64 + 1);
    v12 = ExpInterlockedPopEntrySList(v6);
    if ( !v12 )
    {
      ++*((_DWORD *)&v104[1].HeaderX64 + 2);
      v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))v104[3].Alignment)(
                            *((unsigned int *)&v104[2].HeaderX64 + 1),
                            *((unsigned int *)&v104[2].HeaderX64 + 3),
                            *((unsigned int *)&v104[2].HeaderX64 + 2),
                            v104);
    }
  }
  if ( !v12 )
    goto LABEL_119;
  v13 = WdLogNewEntry5_WdEvent(v6, Alignment_low);
  *(_QWORD *)(v13 + 24) = v12;
  WdLogEvent5_WdEvent(v13);
  v12[2].Next = v8;
  v12[4].Next = 0LL;
  *((_QWORD *)&v12[4].Next + 1) = 0LL;
  *((_DWORD *)&v12[13].Next + 2) = 0;
  LOWORD(v12[8].Next) = 0;
  *((_DWORD *)&v12[1].Next + 2) = 1;
  v12[5].Next = (struct _SLIST_ENTRY *)v10;
  *((_QWORD *)&v12[2].Next + 1) = v9;
  v12[3].Next = v8;
  ++*(_QWORD *)(v10 + 8);
  LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v12[2].Next);
  if ( LeastSignificantBit < 0 )
  {
    v16 = 0LL;
    v15 = 0LL;
  }
  else
  {
    v15 = 1LL << LeastSignificantBit;
    v16 = 0LL;
  }
  *((_QWORD *)&v12[3].Next + 1) = v15;
  v17 = (PSLIST_ENTRY)((char *)v12 + 200);
  Next = v12[5].Next;
  *((_QWORD *)&v12[5].Next + 1) = 3LL;
  v12[6].Next = 0LL;
  *((_QWORD *)&v12[6].Next + 1) = 0LL;
  v12[7].Next = 0LL;
  *((_QWORD *)&v12[7].Next + 1) = 0LL;
  BYTE2(v12[8].Next) = 0;
  *((_QWORD *)&v12[8].Next + 1) = 0LL;
  v12[9].Next = 0LL;
  v12[12].Next = 0LL;
  *((_WORD *)&v12[9].Next + 4) = 0;
  v12[10].Next = 0LL;
  *((_QWORD *)&v12[10].Next + 1) = 0LL;
  *((_QWORD *)&v12[11].Next + 1) = 0LL;
  v12[11].Next = 0LL;
  *((_QWORD *)&v12[12].Next + 1) = 0LL;
  v12[13].Next = 0LL;
  *((_BYTE *)&v12[14].Next + 8) = 0;
  v12[14].Next = 0LL;
  v19 = *((_QWORD *)&Next[8].Next + 1);
  if ( v19 )
  {
    v78 = *(_QWORD *)(v19 + 24) + 144LL * *(_QWORD *)(v19 + 32);
    *(_DWORD *)v78 = 0;
    *(_QWORD *)(v78 + 8) = v12;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v78 + 16), 0LL);
    v16 = 0LL;
    ++*(_QWORD *)(*((_QWORD *)&Next[8].Next + 1) + 32LL);
    v79 = *((_QWORD *)&Next[8].Next + 1);
    if ( *(_QWORD *)(v79 + 32) == *(_QWORD *)(v79 + 48) )
    {
      *(_QWORD *)(v79 + 32) = 0LL;
      *(_BYTE *)(*((_QWORD *)&Next[8].Next + 1) + 40LL) = 1;
    }
  }
  v12[4].Next = (struct _SLIST_ENTRY *)v4;
  *((_QWORD *)&v12[4].Next + 1) = v5;
  *((_DWORD *)&v12[5].Next + 2) = 2;
  v20 = v98;
  if ( v98->Next != (struct _SLIST_ENTRY *)&v97 )
    goto LABEL_117;
  v12[13].Next = v98;
  v17->Next = (struct _SLIST_ENTRY *)&v97;
  v20->Next = v17;
  v21 = *((_QWORD *)v2 + 10);
  v98 = (PSLIST_ENTRY)((char *)v12 + 200);
  v6 = *(union _SLIST_HEADER **)(v21 + 32);
  Alignment_low = (_QWORD *)LODWORD(v6->Alignment);
  if ( (unsigned int)((_DWORD)Alignment_low - 3) > 3 && (unsigned int)((_DWORD)Alignment_low - 9) > 1 )
  {
    v22 = v4;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v22 + 16) )
      {
        if ( !NextRange )
          NextRange = (__int64 *)v22;
      }
      else if ( NextRange )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v22);
        Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                       *((_QWORD *)this + 1),
                       1u,
                       *((_QWORD *)v4 + 9),
                       NextRange[4],
                       *((_QWORD *)PreviousRange + 5));
        v82 = Multirange;
        if ( !Multirange )
          goto LABEL_119;
        Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          NextRange[18] = (__int64)v82;
          if ( NextRange == (__int64 *)PreviousRange )
            break;
          NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
        }
        v83 = v98;
        v84 = (PSLIST_ENTRY)((char *)v82 + 200);
        if ( v98->Next != (struct _SLIST_ENTRY *)&v97 )
          goto LABEL_117;
        *((_QWORD *)&v84->Next + 1) = v98;
        v6 = (union _SLIST_HEADER *)&v97;
        v84->Next = (struct _SLIST_ENTRY *)&v97;
        v16 = 0LL;
        v83->Next = v84;
        NextRange = 0LL;
        v98 = v84;
      }
      if ( v22 == (struct VIDMM_RECYCLE_RANGE *)v5 )
        break;
      v22 = VIDMM_RECYCLE_RANGE::GetNextRange(v22);
    }
    if ( !NextRange )
      goto LABEL_26;
    v24 = *((_QWORD *)v4 + 9);
    v107 = v5[5];
    v105 = (struct _SLIST_ENTRY *)NextRange[4];
    Alignment_low = (_QWORD *)*((_QWORD *)this + 1);
    v25 = *((_DWORD *)Alignment_low + 403);
    v26 = Alignment_low[165];
    if ( v25 )
    {
      v27 = (unsigned int)(v25 - 1);
      v28 = (PSLIST_ENTRY)Alignment_low[v27 + 206];
      Alignment_low[v27 + 206] = v16;
      --*((_DWORD *)Alignment_low + 403);
    }
    else
    {
      ++*(_DWORD *)(v26 + 20);
      v28 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v26);
      if ( !v28 )
      {
        ++*(_DWORD *)(v26 + 24);
        v28 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v26 + 48))(
                              *(unsigned int *)(v26 + 36),
                              *(unsigned int *)(v26 + 44),
                              *(unsigned int *)(v26 + 40),
                              v26);
      }
    }
    if ( v28 )
    {
      v29 = WdLogNewEntry5_WdEvent(v6, Alignment_low);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdEvent(v29);
      v28[4].Next = 0LL;
      *((_QWORD *)&v28[4].Next + 1) = 0LL;
      v28[2].Next = v105;
      *((_QWORD *)&v28[2].Next + 1) = v107;
      v28[3].Next = v105;
      *((_DWORD *)&v28[1].Next + 2) = 1;
      v28[5].Next = (struct _SLIST_ENTRY *)v24;
      *((_DWORD *)&v28[13].Next + 2) = 1;
      LOWORD(v28[8].Next) = 0;
      ++*(_QWORD *)(v24 + 8);
      v30 = RtlFindLeastSignificantBit((ULONGLONG)v28[2].Next);
      if ( v30 < 0 )
      {
        v16 = 0LL;
        v31 = 0LL;
      }
      else
      {
        v31 = 1LL << v30;
        v16 = 0LL;
      }
      *((_QWORD *)&v28[3].Next + 1) = v31;
      v32 = (PSLIST_ENTRY)((char *)v28 + 200);
      v33 = v28[5].Next;
      *((_QWORD *)&v28[5].Next + 1) = 3LL;
      v28[6].Next = 0LL;
      *((_QWORD *)&v28[6].Next + 1) = 0LL;
      v28[7].Next = 0LL;
      *((_QWORD *)&v28[7].Next + 1) = 0LL;
      BYTE2(v28[8].Next) = 0;
      *((_QWORD *)&v28[8].Next + 1) = 0LL;
      v28[9].Next = 0LL;
      v28[12].Next = 0LL;
      *((_WORD *)&v28[9].Next + 4) = 0;
      v28[10].Next = 0LL;
      *((_QWORD *)&v28[10].Next + 1) = 0LL;
      *((_QWORD *)&v28[11].Next + 1) = 0LL;
      v28[11].Next = 0LL;
      *((_QWORD *)&v28[12].Next + 1) = 0LL;
      v28[13].Next = 0LL;
      *((_BYTE *)&v28[14].Next + 8) = 0;
      v28[14].Next = 0LL;
      v34 = *((_QWORD *)&v33[8].Next + 1);
      if ( v34 )
      {
        v85 = *(_QWORD *)(v34 + 24) + 144LL * *(_QWORD *)(v34 + 32);
        *(_DWORD *)v85 = 0;
        *(_QWORD *)(v85 + 8) = v28;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v85 + 16), 0LL);
        v16 = 0LL;
        ++*(_QWORD *)(*((_QWORD *)&v33[8].Next + 1) + 32LL);
        v86 = *((_QWORD *)&v33[8].Next + 1);
        if ( *(_QWORD *)(v86 + 32) == *(_QWORD *)(v86 + 48) )
        {
          *(_QWORD *)(v86 + 32) = 0LL;
          *(_BYTE *)(*((_QWORD *)&v33[8].Next + 1) + 40LL) = 1;
        }
      }
      v28[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&v28[4].Next + 1) = v5;
      *((_DWORD *)&v28[5].Next + 2) = 1;
      while ( 1 )
      {
        NextRange[18] = (__int64)v28;
        if ( NextRange == v5 )
          break;
        NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      v35 = v98;
      if ( v98->Next == (struct _SLIST_ENTRY *)&v97 )
      {
        v28[13].Next = v98;
        v6 = (union _SLIST_HEADER *)&v97;
        v32->Next = (struct _SLIST_ENTRY *)&v97;
        v35->Next = v32;
        v98 = (PSLIST_ENTRY)((char *)v28 + 200);
        goto LABEL_26;
      }
LABEL_117:
      __fastfail(3u);
    }
LABEL_118:
    v2 = a2;
LABEL_119:
    v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, Alignment_low);
    v90[3] = *((_QWORD *)v2 + 10);
    v90[4] = *(_QWORD *)(*((_QWORD *)v2 + 8) + 32LL);
    v90[5] = *(_QWORD *)(*((_QWORD *)v2 + 9) + 40LL);
    v90[6] = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
    WdLogEvent5_WdWarning(v90);
    v91 = v97;
    while ( v91 != &v97 )
    {
      v92 = v91 - 25;
      v91 = (_QWORD *)*v91;
      *((_DWORD *)v92 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), (struct _SLIST_ENTRY *)v92);
    }
    v93 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v2 + 8);
    v94 = 0;
    while ( 1 )
    {
      v95 = *((_DWORD *)v93 + 16);
      *((_QWORD *)v93 + 17) = 0LL;
      *((_QWORD *)v93 + 18) = 0LL;
      *((_QWORD *)v93 + 19) = 0LL;
      *((_QWORD *)v93 + 20) = 0LL;
      if ( v95 )
      {
        v96 = v95 - 4;
        if ( v96 )
        {
          if ( v96 == 1 )
            VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 1LL, v93);
        }
        else
        {
          VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 0LL, v93);
        }
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 2LL, v93);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v93 + 9), v93);
        v94 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)v93 + 9), v93);
      }
      if ( v93 == *((struct VIDMM_RECYCLE_RANGE **)v2 + 9) )
        break;
      v93 = VIDMM_RECYCLE_RANGE::GetNextRange(v93);
    }
    return v94;
  }
  while ( 1 )
  {
LABEL_26:
    if ( *((_DWORD *)v4 + 16) == 4 )
    {
      v73 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2u,
              *((_QWORD *)v4 + 9),
              *((_QWORD *)v4 + 4),
              *((_QWORD *)v4 + 5));
      if ( !v73 )
        goto LABEL_118;
      v73[4].Next = (struct _SLIST_ENTRY *)v4;
      *((_QWORD *)&v73[4].Next + 1) = v4;
      v16 = 0LL;
      *((_QWORD *)v4 + 19) = v73;
      *((_DWORD *)&v73[5].Next + 2) = 0;
      v74 = (PSLIST_ENTRY)((char *)v73 + 200);
      v6 = (union _SLIST_HEADER *)v98;
      if ( v98->Next != (struct _SLIST_ENTRY *)&v97 )
        goto LABEL_117;
      *((_QWORD *)&v74->Next + 1) = v98;
      Alignment_low = &v97;
      v74->Next = (struct _SLIST_ENTRY *)&v97;
      v6->Alignment = (ULONGLONG)v74;
      v98 = v74;
    }
    *((_QWORD *)v4 + 17) = v12;
    *((_QWORD *)v4 + 20) = v16;
    if ( v4 == (struct VIDMM_RECYCLE_RANGE *)v5 )
      break;
    v4 = VIDMM_RECYCLE_RANGE::GetNextRange(v4);
  }
  v36 = v97;
  *((_DWORD *)v97 - 28) = 3;
  v37 = v36 - 25;
  v38 = WdLogNewEntry5_WdEvent(v6, Alignment_low);
  *(_QWORD *)(v38 + 24) = v36 - 25;
  *(_QWORD *)(v38 + 32) = 2LL;
  WdLogEvent5_WdEvent(v38);
  LOBYTE(v39) = 0;
  v40 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
  v41 = *(v36 - 18);
  v99 = v37[5] - v37[4];
  v42 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  v100 = v41;
  v101 = 0;
  if ( !v42 )
    goto LABEL_35;
  while ( (int)VidMmCompareForInsertAlignedRange(&v99, v42) < 0 )
  {
    v43 = v42->Children[0];
    if ( !v42->Children[0] )
    {
      LOBYTE(v39) = 0;
      goto LABEL_35;
    }
LABEL_31:
    v42 = v43;
  }
  v43 = v42->Children[1];
  if ( v43 )
    goto LABEL_31;
  LOBYTE(v39) = 1;
LABEL_35:
  RtlAvlInsertNodeEx(v40, v42, v39, v36 - 25);
  *((_DWORD *)v37 + 22) = 2;
  v44 = (struct _SLIST_ENTRY *)(v36 - 25);
  v106 = (_QWORD *)*v36;
  v46 = (_QWORD *)*v36;
  v45 = v46;
  v49 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v44);
  if ( v46 != &v97 )
  {
LABEL_36:
    v50 = *((int *)v46 - 28);
    v51 = v46 - 25;
    *((_DWORD *)v46 - 28) = 3;
    v52 = WdLogNewEntry5_WdEvent(v48, v47);
    *(_QWORD *)(v52 + 24) = v46 - 25;
    *(_QWORD *)(v52 + 32) = v50;
    WdLogEvent5_WdEvent(v52);
    v55 = v51[5] - v51[4];
    v56 = *(v46 - 18);
    v99 = v55;
    v100 = v56;
    v101 = 0;
    if ( (_DWORD)v50 != 1 )
    {
      if ( !(_DWORD)v50 )
      {
        v57 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
        LOBYTE(v54) = 0;
        if ( v57 )
        {
          while ( 1 )
          {
            if ( (int)VidMmCompareForInsertAlignedRange(&v99, v57) < 0 )
            {
              v72 = v57->Children[0];
              if ( !v57->Children[0] )
              {
                LOBYTE(v54) = 0;
                break;
              }
            }
            else
            {
              v72 = v57->Children[1];
              if ( !v72 )
              {
                LOBYTE(v54) = 1;
                break;
              }
            }
            v57 = v72;
          }
        }
        v59 = (char *)this + 48;
        goto LABEL_45;
      }
      if ( (_DWORD)v50 != 2 )
      {
        v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v53);
        v87[3] = 270LL;
        v87[4] = 52LL;
        v87[5] = 15LL;
        v87[6] = v50;
        v87[7] = 0LL;
        WdLogEvent5_WdCriticalError(v87);
        goto LABEL_46;
      }
      v88 = *v40;
      LOBYTE(v54) = 0;
      if ( *v40 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v99, v88) < 0 )
          {
            v89 = v88->Children[0];
            if ( !v88->Children[0] )
            {
              LOBYTE(v54) = 0;
              break;
            }
          }
          else
          {
            v89 = v88->Children[1];
            if ( !v89 )
            {
              LOBYTE(v54) = 1;
              break;
            }
          }
          v88 = v89;
        }
      }
      RtlAvlInsertNodeEx(v40, v88, v54, v46 - 25);
      goto LABEL_46;
    }
    v57 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
    LOBYTE(v54) = 0;
    if ( !v57 )
      goto LABEL_44;
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(&v99, v57) < 0 )
      {
        v58 = v57->Children[0];
        if ( !v57->Children[0] )
        {
          LOBYTE(v54) = 0;
          goto LABEL_44;
        }
      }
      else
      {
        v58 = v57->Children[1];
        if ( !v58 )
        {
          LOBYTE(v54) = 1;
LABEL_44:
          v59 = (char *)this + 56;
LABEL_45:
          RtlAvlInsertNodeEx(v59, v57, v54, v46 - 25);
          v40 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
LABEL_46:
          *((_DWORD *)v51 + 22) = v50;
          v60 = (struct _SLIST_ENTRY *)(v46 - 25);
          v46 = (_QWORD *)*v46;
          VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v60);
          if ( v46 == &v97 )
          {
            v45 = v106;
            break;
          }
          goto LABEL_36;
        }
      }
      v57 = v58;
    }
  }
  v61 = *((_QWORD *)v49 + 8);
  v62 = (struct VIDMM_RECYCLE_RANGE *)v61;
  v63 = (struct VIDMM_RECYCLE_RANGE *)v61;
  v64 = *(_DWORD *)(v61 + 64);
  v65 = *(_DWORD *)(v61 + 92);
  while ( 1 )
  {
    v66 = (struct VIDMM_RECYCLE_RANGE *)v61;
    if ( *(_DWORD *)(v61 + 64) != v64 || *(_DWORD *)(v61 + 92) != v65 )
    {
      v64 = *(_DWORD *)(v61 + 64);
      if ( v62 != v63 )
      {
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)v49, v62, v63);
        v64 = *(_DWORD *)(v61 + 64);
      }
      v65 = *(_DWORD *)(v61 + 92);
      v62 = (struct VIDMM_RECYCLE_RANGE *)v61;
    }
    if ( v61 == *((_QWORD *)v49 + 9) )
      break;
    v71 = *(_QWORD *)(v61 + 120);
    if ( v71 == *(_QWORD *)(v61 + 72) + 72LL )
      v61 = 0LL;
    else
      v61 = v71 - 120;
    v63 = v66;
  }
  if ( v62 != (struct VIDMM_RECYCLE_RANGE *)v61 )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)v49, v62, (struct VIDMM_RECYCLE_RANGE *)v61);
  if ( !*((_DWORD *)v49 + 54) )
  {
    v67 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v49 + 8);
    if ( v67 == *((struct VIDMM_RECYCLE_RANGE **)v49 + 9) && !*((_DWORD *)v67 + 16) )
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v49 + 10), v67);
  }
  v68 = (_QWORD *)*((_QWORD *)v49 + 10);
  if ( *v68 != 1LL
    || *((_DWORD *)v49 + 54)
    || (v75 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v49 + 8), *((_DWORD *)v75 + 16)) )
  {
    v69 = 0;
  }
  else
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v68[4], 2LL, (__int64)v49);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v68[4] + 8LL), (struct _SLIST_ENTRY *)v49);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v68[4] + 8LL), v75, v76);
    v69 = 1;
  }
  result = v69;
  if ( v45 == &v97 && !v69 )
  {
    v77 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v49 + 8);
    result = 0;
    if ( v77 == *((struct VIDMM_RECYCLE_RANGE **)v49 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v49 + 10), v77);
      return VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
               *((VIDMM_RECYCLE_BLOCK **)v49 + 10),
               *((struct VIDMM_RECYCLE_RANGE **)v49 + 8));
    }
  }
  return result;
}
