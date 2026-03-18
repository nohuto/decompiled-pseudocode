/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007F02C (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D39C (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0080070 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00801C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008130C (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081AA8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BE0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A3D5C (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E637C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

bool __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v2; // r8
  struct VIDMM_RECYCLE_RANGE *v3; // rbx
  _QWORD *v4; // r14
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rax
  PSLIST_ENTRY v11; // r15
  struct _SLIST_ENTRY *v12; // rax
  struct _SLIST_ENTRY *v13; // rcx
  int v14; // edx
  __int64 v15; // r9
  struct VIDMM_RECYCLE_RANGE *v16; // rdi
  __int64 *NextRange; // rsi
  VIDMM_RECYCLE_HEAP *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rax
  PSLIST_ENTRY v26; // rdi
  struct _SLIST_ENTRY *v27; // rax
  struct _SLIST_ENTRY *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rax
  PSLIST_ENTRY v36; // rdi
  struct _SLIST_ENTRY *v37; // rdi
  struct _SLIST_ENTRY *v38; // rax
  _QWORD *v39; // rsi
  _QWORD *v40; // rdi
  __int64 v41; // r8
  struct _RTL_BALANCED_NODE **v42; // r15
  __int64 v43; // rax
  struct _RTL_BALANCED_NODE *v44; // rbx
  struct _RTL_BALANCED_NODE *v45; // rax
  struct _SLIST_ENTRY *v46; // rcx
  _QWORD *v47; // r12
  _QWORD *v48; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v49; // r13
  __int64 v50; // r14
  _QWORD *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rax
  struct _RTL_BALANCED_NODE *v54; // rbx
  struct _RTL_BALANCED_NODE *v55; // rax
  char *v56; // rcx
  struct _SLIST_ENTRY *v57; // rcx
  bool result; // al
  struct _RTL_BALANCED_NODE *v59; // rax
  struct VIDMM_RECYCLE_RANGE *v60; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r13
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v63; // r8
  struct _SLIST_ENTRY *v64; // rax
  struct _SLIST_ENTRY *v65; // r8
  struct _RTL_BALANCED_NODE *v66; // rbx
  struct _RTL_BALANCED_NODE *v67; // rax
  _QWORD *v68; // rdi
  _QWORD *v69; // rdx
  struct VIDMM_RECYCLE_RANGE *v70; // rdi
  bool v71; // si
  int v72; // ecx
  int v73; // ecx
  _QWORD *v74; // [rsp+30h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v75; // [rsp+38h] [rbp-30h]
  __int64 v76; // [rsp+40h] [rbp-28h] BYREF
  __int64 v77; // [rsp+48h] [rbp-20h]
  char v78; // [rsp+50h] [rbp-18h]
  __int64 v81; // [rsp+C0h] [rbp+58h]
  __int64 v82; // [rsp+C0h] [rbp+58h]
  _QWORD *v83; // [rsp+C0h] [rbp+58h]
  __int64 v84; // [rsp+C8h] [rbp+60h]

  v2 = *((_QWORD *)this + 1);
  v75 = (struct _SLIST_ENTRY *)&v74;
  v74 = &v74;
  v3 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v4 = (_QWORD *)*((_QWORD *)a2 + 9);
  v5 = *(_DWORD *)(v2 + 1620);
  v6 = *(_QWORD *)(v2 + 1320);
  v7 = *((_QWORD *)v3 + 4);
  v8 = v4[5];
  v9 = *((_QWORD *)v3 + 9);
  if ( v5 )
  {
    v10 = (unsigned int)(v5 - 1);
    v11 = *(PSLIST_ENTRY *)(v2 + 8 * v10 + 1656);
    *(_QWORD *)(v2 + 8 * v10 + 1656) = 0LL;
    --*(_DWORD *)(v2 + 1620);
  }
  else
  {
    ++*(_DWORD *)(v6 + 20);
    v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
    if ( !v11 )
    {
      ++*(_DWORD *)(v6 + 24);
      v11 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v6 + 48))(
                            *(unsigned int *)(v6 + 36),
                            *(unsigned int *)(v6 + 44),
                            *(unsigned int *)(v6 + 40),
                            v6);
    }
  }
  if ( !v11 )
    goto LABEL_91;
  VIDMM_RECYCLE_MULTIRANGE::Init(v11, 0LL, v9, v7, v8);
  v11[4].Next = (struct _SLIST_ENTRY *)v3;
  *((_QWORD *)&v11[4].Next + 1) = v4;
  v12 = (PSLIST_ENTRY)((char *)v11 + 200);
  *((_DWORD *)&v11[5].Next + 2) = 2;
  v13 = v75;
  if ( v75->Next != (struct _SLIST_ENTRY *)&v74 )
    goto LABEL_90;
  v11[13].Next = v75;
  v12->Next = (struct _SLIST_ENTRY *)&v74;
  v13->Next = v12;
  v75 = (PSLIST_ENTRY)((char *)v11 + 200);
  v14 = **(_DWORD **)(*((_QWORD *)a2 + 10) + 32LL);
  if ( (unsigned int)(v14 - 3) > 3 && (unsigned int)(v14 - 9) > 1 )
  {
    v15 = 0LL;
    v16 = v3;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v16 + 16) )
      {
        v18 = this;
        if ( !NextRange )
          NextRange = (__int64 *)v16;
      }
      else if ( NextRange )
      {
        v18 = this;
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v16);
        Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                       *((_QWORD *)this + 1),
                       1u,
                       *((_QWORD *)v3 + 9),
                       NextRange[4],
                       *((_QWORD *)PreviousRange + 5));
        v63 = Multirange;
        if ( !Multirange )
          goto LABEL_92;
        Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          NextRange[18] = (__int64)v63;
          if ( NextRange == (__int64 *)PreviousRange )
            break;
          NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
        }
        v64 = v75;
        v65 = (PSLIST_ENTRY)((char *)v63 + 200);
        if ( v75->Next != (struct _SLIST_ENTRY *)&v74 )
          goto LABEL_90;
        *((_QWORD *)&v65->Next + 1) = v75;
        v65->Next = (struct _SLIST_ENTRY *)&v74;
        v15 = 0LL;
        v64->Next = v65;
        NextRange = 0LL;
        v75 = v65;
      }
      else
      {
        v18 = this;
      }
      if ( v16 == (struct VIDMM_RECYCLE_RANGE *)v4 )
        break;
      v16 = VIDMM_RECYCLE_RANGE::GetNextRange(v16);
    }
    if ( !NextRange )
      goto LABEL_20;
    v19 = *((_QWORD *)v18 + 1);
    v20 = NextRange[4];
    v21 = *((_QWORD *)v3 + 9);
    v22 = v4[5];
    v23 = *(_DWORD *)(v19 + 1620);
    v24 = *(_QWORD *)(v19 + 1320);
    v81 = v20;
    v84 = v21;
    if ( v23 )
    {
      v25 = (unsigned int)(v23 - 1);
      v26 = *(PSLIST_ENTRY *)(v19 + 8 * v25 + 1656);
      *(_QWORD *)(v19 + 8 * v25 + 1656) = v15;
      --*(_DWORD *)(v19 + 1620);
    }
    else
    {
      ++*(_DWORD *)(v24 + 20);
      v26 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v24);
      if ( !v26 )
      {
        ++*(_DWORD *)(v24 + 24);
        v26 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v24 + 48))(
                              *(unsigned int *)(v24 + 36),
                              *(unsigned int *)(v24 + 44),
                              *(unsigned int *)(v24 + 40),
                              v24);
      }
      v20 = v81;
      v21 = v84;
    }
    if ( v26 )
    {
      VIDMM_RECYCLE_MULTIRANGE::Init(v26, 1LL, v21, v20, v22);
      v26[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&v26[4].Next + 1) = v4;
      *((_DWORD *)&v26[5].Next + 2) = 1;
      while ( 1 )
      {
        NextRange[18] = (__int64)v26;
        if ( NextRange == v4 )
          break;
        NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      v27 = v75;
      v28 = (PSLIST_ENTRY)((char *)v26 + 200);
      if ( v75->Next == (struct _SLIST_ENTRY *)&v74 )
      {
        *((_QWORD *)&v28->Next + 1) = v75;
        v28->Next = (struct _SLIST_ENTRY *)&v74;
        v27->Next = v28;
        v75 = v28;
        goto LABEL_20;
      }
LABEL_90:
      __fastfail(3u);
    }
LABEL_91:
    v18 = this;
LABEL_92:
    WdLogSingleEntry4(
      3LL,
      *((_QWORD *)a2 + 10),
      *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL),
      *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL),
      **(_QWORD **)(*((_QWORD *)v18 + 1) + 8LL));
    v68 = v74;
    while ( v68 != &v74 )
    {
      v69 = v68 - 25;
      v68 = (_QWORD *)*v68;
      *((_DWORD *)v69 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v18 + 1), (struct _SLIST_ENTRY *)v69);
    }
    v70 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
    v71 = 0;
    while ( 1 )
    {
      v72 = *((_DWORD *)v70 + 16);
      *((_QWORD *)v70 + 17) = 0LL;
      *((_QWORD *)v70 + 18) = 0LL;
      *((_QWORD *)v70 + 19) = 0LL;
      *((_QWORD *)v70 + 20) = 0LL;
      if ( v72 )
      {
        v73 = v72 - 4;
        if ( v73 )
        {
          if ( v73 == 1 )
            VIDMM_RECYCLE_HEAP::AddRangeToTree(v18, 1LL, v70);
        }
        else
        {
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v18, 0LL, v70);
        }
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(v18, 2LL, v70);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v70 + 9), v70);
        v71 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)v70 + 9), v70);
      }
      if ( v70 == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        break;
      v70 = VIDMM_RECYCLE_RANGE::GetNextRange(v70);
    }
    return v71;
  }
  while ( 1 )
  {
LABEL_20:
    if ( *((_DWORD *)v3 + 16) == 4 )
    {
      v29 = *((_QWORD *)v3 + 9);
      v30 = *((_QWORD *)v3 + 5);
      v31 = *((_QWORD *)v3 + 4);
      v32 = *((_QWORD *)this + 1);
      v82 = v29;
      v33 = *(_DWORD *)(v32 + 1620);
      v34 = *(_QWORD *)(v32 + 1320);
      if ( v33 )
      {
        v35 = (unsigned int)(v33 - 1);
        v36 = *(PSLIST_ENTRY *)(v32 + 8 * v35 + 1656);
        *(_QWORD *)(v32 + 8 * v35 + 1656) = 0LL;
        --*(_DWORD *)(v32 + 1620);
      }
      else
      {
        ++*(_DWORD *)(v34 + 20);
        v36 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v34);
        if ( !v36 )
        {
          ++*(_DWORD *)(v34 + 24);
          v36 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v34 + 48))(
                                *(unsigned int *)(v34 + 36),
                                *(unsigned int *)(v34 + 44),
                                *(unsigned int *)(v34 + 40),
                                v34);
        }
        v29 = v82;
      }
      if ( !v36 )
        goto LABEL_91;
      VIDMM_RECYCLE_MULTIRANGE::Init(v36, 2LL, v29, v31, v30);
      v36[4].Next = (struct _SLIST_ENTRY *)v3;
      *((_QWORD *)&v36[4].Next + 1) = v3;
      *((_QWORD *)v3 + 19) = v36;
      *((_DWORD *)&v36[5].Next + 2) = 0;
      v37 = (PSLIST_ENTRY)((char *)v36 + 200);
      v38 = v75;
      if ( v75->Next != (struct _SLIST_ENTRY *)&v74 )
        goto LABEL_90;
      *((_QWORD *)&v37->Next + 1) = v75;
      v37->Next = (struct _SLIST_ENTRY *)&v74;
      v38->Next = v37;
      v75 = v37;
    }
    *((_QWORD *)v3 + 17) = v11;
    *((_QWORD *)v3 + 20) = 0LL;
    if ( v3 == (struct VIDMM_RECYCLE_RANGE *)v4 )
      break;
    v3 = VIDMM_RECYCLE_RANGE::GetNextRange(v3);
  }
  v39 = v74;
  *((_DWORD *)v74 - 28) = 3;
  v40 = v39 - 25;
  WdLogSingleEntry2(4LL, v39 - 25, 2LL);
  LOBYTE(v41) = 0;
  v42 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
  v43 = *(v39 - 18);
  v76 = v40[5] - v40[4];
  v44 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  v77 = v43;
  v78 = 0;
  if ( v44 )
  {
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(&v76, v44) < 0 )
      {
        v45 = v44->Children[0];
        if ( !v44->Children[0] )
        {
          LOBYTE(v41) = 0;
          break;
        }
      }
      else
      {
        v45 = v44->Children[1];
        if ( !v45 )
        {
          LOBYTE(v41) = 1;
          break;
        }
      }
      v44 = v45;
    }
  }
  RtlAvlInsertNodeEx(v42, v44, v41, v39 - 25);
  *((_DWORD *)v40 + 22) = 2;
  v46 = (struct _SLIST_ENTRY *)(v39 - 25);
  v83 = (_QWORD *)*v39;
  v48 = (_QWORD *)*v39;
  v47 = v48;
  v49 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v46);
  if ( v48 == &v74 )
    goto LABEL_48;
  do
  {
    v50 = *((int *)v48 - 28);
    v51 = v48 - 25;
    *((_DWORD *)v48 - 28) = 3;
    WdLogSingleEntry2(4LL, v48 - 25, v50);
    v53 = *(v48 - 18);
    v76 = v51[5] - v51[4];
    v77 = v53;
    v78 = 0;
    if ( !(_DWORD)v50 )
    {
      v54 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
      LOBYTE(v52) = 0;
      if ( v54 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v76, v54) < 0 )
          {
            v59 = v54->Children[0];
            if ( !v54->Children[0] )
            {
              LOBYTE(v52) = 0;
              break;
            }
          }
          else
          {
            v59 = v54->Children[1];
            if ( !v59 )
            {
              LOBYTE(v52) = 1;
              break;
            }
          }
          v54 = v59;
        }
      }
      v56 = (char *)this + 48;
      goto LABEL_45;
    }
    if ( (_DWORD)v50 != 1 )
    {
      if ( (_DWORD)v50 != 2 )
      {
        WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v50, 0LL);
        goto LABEL_46;
      }
      v66 = *v42;
      LOBYTE(v52) = 0;
      if ( !*v42 )
        goto LABEL_86;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(&v76, v66) < 0 )
        {
          v67 = v66->Children[0];
          if ( !v66->Children[0] )
          {
            LOBYTE(v52) = 0;
            goto LABEL_86;
          }
        }
        else
        {
          v67 = v66->Children[1];
          if ( !v67 )
          {
            LOBYTE(v52) = 1;
LABEL_86:
            RtlAvlInsertNodeEx(v42, v66, v52, v48 - 25);
            goto LABEL_46;
          }
        }
        v66 = v67;
      }
    }
    v54 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
    LOBYTE(v52) = 0;
    if ( !v54 )
      goto LABEL_44;
    while ( (int)VidMmCompareForInsertAlignedRange(&v76, v54) < 0 )
    {
      v55 = v54->Children[0];
      if ( !v54->Children[0] )
      {
        LOBYTE(v52) = 0;
        goto LABEL_44;
      }
LABEL_40:
      v54 = v55;
    }
    v55 = v54->Children[1];
    if ( v55 )
      goto LABEL_40;
    LOBYTE(v52) = 1;
LABEL_44:
    v56 = (char *)this + 56;
LABEL_45:
    RtlAvlInsertNodeEx(v56, v54, v52, v48 - 25);
    v42 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
LABEL_46:
    *((_DWORD *)v51 + 22) = v50;
    v57 = (struct _SLIST_ENTRY *)(v48 - 25);
    v48 = (_QWORD *)*v48;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v57);
  }
  while ( v48 != &v74 );
  v47 = v83;
LABEL_48:
  result = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v49) != 0;
  if ( v47 == &v74 && !result )
  {
    v60 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v49 + 8);
    if ( v60 == *((struct VIDMM_RECYCLE_RANGE **)v49 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v49 + 10), v60);
      return VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
               *((VIDMM_RECYCLE_BLOCK **)v49 + 10),
               *((struct VIDMM_RECYCLE_RANGE **)v49 + 8));
    }
  }
  return result;
}
