/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0061E80
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C0061C60 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00177C8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00177EC (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005FF70 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060004 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0060598 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0060844 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0060A00 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00610A0 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0061128 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006114C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C0061260 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C0062810 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0062AC0 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00632A4 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00633FC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0063530 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0064610 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064CA0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065BA0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0084730 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C18B8 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C1A58 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C1B2C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C1BA0 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00C1EC0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C270C (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP *this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  unsigned int v8; // r12d
  VIDMM_RECYCLE_HEAP *v9; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _RTL_BALANCED_NODE *v18; // rbx
  int AlignedRange; // eax
  _QWORD *v20; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rdi
  int v22; // eax
  __int64 v23; // rdx
  struct VIDMM_RECYCLE_RANGE *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  struct _RTL_BALANCED_NODE **v39; // rcx
  struct VIDMM_RECYCLE_RANGE *v40; // rcx
  void *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rbp
  struct VIDMM_RECYCLE_MULTIRANGE *v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  char *v51; // rcx
  unsigned __int8 v52; // dl
  VIDMM_RECYCLE_RANGE *PreviousRange; // rbx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbp
  struct VIDMM_RECYCLE_RANGE *i; // rax
  struct VIDMM_RECYCLE_RANGE *v59; // rbx
  struct VIDMM_RECYCLE_RANGE *v60; // r9
  struct VIDMM_RECYCLE_RANGE *v61; // r8
  int v62; // r10d
  int v63; // r11d
  struct VIDMM_RECYCLE_RANGE *v64; // rbp
  _QWORD *v65; // rbx
  _QWORD *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r9
  int v70; // edx
  void *v71; // rcx
  struct VIDMM_RECYCLE_RANGE *v72; // rcx
  char v73; // r8
  struct VIDMM_RECYCLE_RANGE *v74; // r10
  unsigned __int8 v75; // dl
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned __int64 v79; // r9
  struct VIDMM_RECYCLE_RANGE *v80; // r10
  unsigned __int64 v81; // rdx
  __int64 v82; // rdx
  int v83; // r8d
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rax
  struct _RTL_BALANCED_NODE *v89; // rbx
  struct _RTL_BALANCED_NODE *v90; // rax
  struct _RTL_BALANCED_NODE **v91; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // r15
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v97; // rbx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // r8
  int v104; // r8d
  _QWORD *v105; // rax
  struct _RTL_BALANCED_NODE *v106; // rax
  struct _RTL_BALANCED_NODE *v107; // rax
  int v108; // ecx
  __int64 v109; // rdx
  _QWORD *v110; // rax
  struct VIDMM_RECYCLE_RANGE *v111; // rdx
  struct VIDMM_RECYCLE_RANGE *v112; // rbp
  __int64 v113; // r8
  __int64 v114; // r8
  void *v115; // rcx
  _QWORD *v116; // rax
  struct _RTL_BALANCED_NODE **v117; // [rsp+30h] [rbp-98h]
  struct VIDMM_RECYCLE_RANGE *v118; // [rsp+38h] [rbp-90h]
  int v119; // [rsp+40h] [rbp-88h] BYREF
  __int64 v120; // [rsp+48h] [rbp-80h]
  char v121; // [rsp+50h] [rbp-78h]
  __int64 v122; // [rsp+58h] [rbp-70h]
  _QWORD v123[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int8 v124; // [rsp+70h] [rbp-58h]
  _QWORD v125[2]; // [rsp+78h] [rbp-50h] BYREF
  char v126; // [rsp+88h] [rbp-40h]
  unsigned int v130; // [rsp+108h] [rbp+40h]

  v8 = 0;
  v9 = this;
  v119 = -1;
  v11 = (unsigned int)a3;
  v120 = 0LL;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v121 = 1;
    v119 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v121 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v15 = v11;
  v122 = v11;
  v14[3] = v9;
  v14[4] = a2;
  v14[5] = v11;
  WdLogEvent5_WdEvent(v14);
  v123[1] = v11;
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v9 + 6);
  v123[0] = a2;
  v124 = a8;
  v117 = (struct _RTL_BALANCED_NODE **)((char *)v9 + 48);
  while ( v18 )
  {
    AlignedRange = VidMmFindAlignedRange(v123, v18);
    if ( AlignedRange >= 0 )
    {
      if ( AlignedRange <= 0 )
      {
        if ( !LODWORD(v18[1].Children[0]) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v9, LODWORD(v18[3].ParentValue), v18);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(v9, (struct VIDMM_RECYCLE_RANGE *)v18);
          if ( !BlockAndRange )
          {
            v100 = 0LL;
            goto LABEL_142;
          }
          goto LABEL_23;
        }
LABEL_22:
        BlockAndRange = (struct VIDMM_RECYCLE_MULTIRANGE *)v18;
        goto LABEL_23;
      }
      v18 = v18->Children[1];
    }
    else
    {
      v18 = v18->Children[0];
    }
  }
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v9 + 7);
  while ( v18 )
  {
    v22 = VidMmFindAlignedRange(v123, v18);
    if ( v22 >= 0 )
    {
      if ( v22 <= 0 )
      {
        if ( LODWORD(v18[1].Children[0]) )
          goto LABEL_22;
        VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v9, LODWORD(v18[3].ParentValue), v18);
        BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(v9, (struct VIDMM_RECYCLE_RANGE *)v18);
        if ( !BlockAndRange )
        {
          v100 = 1LL;
          goto LABEL_142;
        }
LABEL_23:
        if ( !BlockAndRange )
          goto LABEL_9;
        goto LABEL_24;
      }
      v18 = v18->Children[1];
    }
    else
    {
      v18 = v18->Children[0];
    }
  }
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v9 + 8);
  if ( !v18 )
    goto LABEL_9;
  while ( 1 )
  {
    v98 = VidMmFindAlignedRange(v123, v18);
    if ( v98 >= 0 )
      break;
    v18 = v18->Children[0];
LABEL_116:
    if ( !v18 )
      goto LABEL_9;
  }
  if ( v98 > 0 )
  {
    v18 = v18->Children[1];
    goto LABEL_116;
  }
  if ( LODWORD(v18[1].Children[0]) )
    goto LABEL_22;
  VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v9, LODWORD(v18[3].ParentValue), v18);
  v101 = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(v9, (struct VIDMM_RECYCLE_RANGE *)v18);
  BlockAndRange = v101;
  if ( v101 )
    goto LABEL_23;
  v100 = 2LL;
LABEL_142:
  VIDMM_RECYCLE_HEAP::AddRangeToTree(v9, v100, v18);
LABEL_9:
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
  v20[3] = v9;
  v20[4] = a2;
  v20[5] = v15;
  WdLogEvent5_WdEvent(v20);
  BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP_MGR **)v9);
  if ( !BlockAndRange )
  {
    LODWORD(v57) = -1073741801;
    goto LABEL_205;
  }
LABEL_24:
  v23 = *((_QWORD *)BlockAndRange + 6);
  if ( *((_QWORD *)BlockAndRange + 5) - v23 > a2 )
    VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v23 - *((_QWORD *)BlockAndRange + 4));
  v24 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  while ( 2 )
  {
    v25 = WdLogNewEntry5_WdEvent(v17, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdEvent(v25);
    v28 = *((_DWORD *)BlockAndRange + 54);
    if ( !v28 )
      goto LABEL_43;
    v29 = *((_QWORD *)v24 + 17);
    if ( !v29 )
      goto LABEL_43;
    v30 = WdLogNewEntry5_WdEvent(v27, v26);
    *(_QWORD *)(v30 + 24) = v29;
    WdLogEvent5_WdEvent(v30);
    v31 = *(_QWORD *)(v29 + 32);
    v32 = *(_QWORD *)(v29 + 40);
    v33 = *((_QWORD *)BlockAndRange + 4);
    v34 = *((_QWORD *)BlockAndRange + 5);
    v130 = *(_DWORD *)(v29 + 88);
    v37 = WdLogNewEntry5_WdEvent(v36, v35);
    *(_QWORD *)(v37 + 24) = v29;
    *(_QWORD *)(v37 + 32) = (int)v130;
    WdLogEvent5_WdEvent(v37);
    switch ( v130 )
    {
      case 2u:
        v39 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
        goto LABEL_31;
      case 0u:
        v39 = v117;
        goto LABEL_31;
      case 1u:
        v39 = (struct _RTL_BALANCED_NODE **)((char *)this + 56);
LABEL_31:
        RtlAvlRemoveNode(v39, v29);
        goto LABEL_32;
    }
    v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v130, v38);
    v102[3] = 270LL;
    v102[4] = 52LL;
    v102[5] = 16LL;
    v102[6] = (int)v130;
    v102[7] = 0LL;
    WdLogEvent5_WdCriticalError(v102);
LABEL_32:
    *(_DWORD *)(v29 + 88) = 3;
    if ( v33 > v31 )
    {
      if ( v34 >= v32 )
      {
        VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v29, *(_QWORD *)(v29 + 32), v33);
        v9 = this;
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v130, v29);
        goto LABEL_42;
      }
      v94 = *(_QWORD *)(v29 + 40);
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9));
      v118 = *(struct VIDMM_RECYCLE_RANGE **)(v29 + 72);
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v29, *(_QWORD *)(v29 + 32), v33);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v130, v29);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(_DWORD *)(v29 + 216),
                     *(_QWORD *)(v29 + 80),
                     v34,
                     v94);
      v97 = Multirange;
      if ( Multirange )
      {
        Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_QWORD *)&Multirange[4].Next + 1) = v118;
        VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange, v26);
        v9 = this;
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v130, v97);
        goto LABEL_42;
      }
      v9 = this;
      while ( 1 )
      {
        v108 = *((_DWORD *)NextRange + 16);
        if ( v108 )
        {
          v27 = (unsigned int)(v108 - 4);
          if ( (_DWORD)v27 )
          {
            if ( (_DWORD)v27 != 1 )
              goto LABEL_188;
            v109 = 1LL;
          }
          else
          {
            v109 = 0LL;
          }
        }
        else
        {
          v109 = 2LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v109, NextRange);
LABEL_188:
        if ( NextRange == v118 )
          goto LABEL_42;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
    }
    v40 = *(struct VIDMM_RECYCLE_RANGE **)(v29 + 64);
    if ( v34 >= v32 )
    {
      while ( 1 )
      {
        v26 = *(unsigned int *)(v29 + 216);
        if ( (_DWORD)v26 )
        {
          v26 = (unsigned int)(v26 - 1);
          if ( (_DWORD)v26 )
          {
            if ( (_DWORD)v26 == 1 )
              *((_QWORD *)v40 + 19) = 0LL;
          }
          else
          {
            *((_QWORD *)v40 + 18) = 0LL;
          }
        }
        else
        {
          *((_QWORD *)v40 + 17) = 0LL;
        }
        if ( v40 == *(struct VIDMM_RECYCLE_RANGE **)(v29 + 72) )
          break;
        v40 = VIDMM_RECYCLE_RANGE::GetNextRange(v40);
      }
      v9 = this;
      v41 = *(void **)(v29 + 96);
      v42 = *((_QWORD *)this + 1);
      if ( v41 )
      {
        ExFreePoolWithTag(v41, 0);
        *(_QWORD *)(v29 + 96) = 0LL;
      }
      --*(_QWORD *)(*(_QWORD *)(v29 + 80) + 8LL);
      v43 = *(_QWORD *)(v29 + 80);
      *(_BYTE *)(v29 + 232) = 1;
      *(_QWORD *)(v29 + 224) = 0LL;
      v27 = *(_QWORD *)(v43 + 136);
      if ( v27 )
      {
        v103 = *(_QWORD *)(v27 + 24) + 144LL * *(_QWORD *)(v27 + 32);
        *(_DWORD *)v103 = 1;
        *(_QWORD *)(v103 + 8) = v29;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v103 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v43 + 136) + 32LL);
        v27 = *(_QWORD *)(v43 + 136);
        if ( *(_QWORD *)(v27 + 32) == *(_QWORD *)(v27 + 48) )
        {
          *(_QWORD *)(v27 + 32) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v43 + 136) + 40LL) = 1;
        }
      }
      v44 = *(unsigned int *)(v42 + 1612);
      v45 = *(_QWORD *)(v42 + 1320);
      if ( (unsigned int)v44 >= 4 )
      {
        ++*(_DWORD *)(v45 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v45) >= *(_WORD *)(v45 + 16) )
        {
          ++*(_DWORD *)(v45 + 32);
          (*(void (__fastcall **)(__int64, __int64))(v45 + 56))(v29, v45);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v45, (PSLIST_ENTRY)v29);
        }
      }
      else
      {
        *(_QWORD *)(v42 + 8 * v44 + 1648) = v29;
        ++*(_DWORD *)(v42 + 1612);
      }
      goto LABEL_42;
    }
    v79 = *(_QWORD *)(v29 + 40);
    v80 = *(struct VIDMM_RECYCLE_RANGE **)(v29 + 72);
    while ( 1 )
    {
      v81 = *((_QWORD *)v40 + 4);
      if ( v81 >= v79 || *((_QWORD *)v40 + 5) <= v34 )
      {
        v83 = *(_DWORD *)(v29 + 216);
        if ( v83 )
        {
          v104 = v83 - 1;
          if ( v104 )
          {
            if ( v104 == 1 )
              *((_QWORD *)v40 + 19) = 0LL;
          }
          else
          {
            *((_QWORD *)v40 + 18) = 0LL;
          }
        }
        else
        {
          *((_QWORD *)v40 + 17) = 0LL;
        }
      }
      if ( v81 == v34 )
        *(_QWORD *)(v29 + 64) = v40;
      if ( *((_QWORD *)v40 + 5) == v79 )
        *(_QWORD *)(v29 + 72) = v40;
      if ( v40 == v80 )
        break;
      v82 = *((_QWORD *)v40 + 15);
      if ( v82 == *((_QWORD *)v40 + 9) + 72LL )
        v40 = 0LL;
      else
        v40 = (struct VIDMM_RECYCLE_RANGE *)(v82 - 120);
    }
    *(_QWORD *)(v29 + 32) = v34;
    *(_QWORD *)(v29 + 40) = v79;
    *(_QWORD *)(v29 + 48) = v34;
    v84 = WdLogNewEntry5_WdEvent(v40, v81);
    *(_QWORD *)(v84 + 24) = v29;
    *(_QWORD *)(v84 + 32) = (int)v130;
    WdLogEvent5_WdEvent(v84);
    v87 = *(_QWORD *)(v29 + 40) - *(_QWORD *)(v29 + 32);
    v88 = *(_QWORD *)(v29 + 56);
    v125[0] = v87;
    v125[1] = v88;
    v126 = 0;
    if ( v130 != 2 )
    {
      if ( v130 )
      {
        if ( v130 != 1 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v85);
          v105[3] = 270LL;
          v105[4] = 52LL;
          v105[5] = 15LL;
          v105[6] = (int)v130;
          v105[7] = 0LL;
          WdLogEvent5_WdCriticalError(v105);
          goto LABEL_102;
        }
        LOBYTE(v86) = 0;
        v89 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
        if ( v89 )
        {
          while ( 1 )
          {
            if ( (int)VidMmCompareForInsertAlignedRange(v125, v89) < 0 )
            {
              v106 = v89->Children[0];
              if ( !v89->Children[0] )
              {
                LOBYTE(v86) = 0;
                break;
              }
            }
            else
            {
              v106 = v89->Children[1];
              if ( !v106 )
              {
                LOBYTE(v86) = 1;
                break;
              }
            }
            v89 = v106;
          }
        }
        v91 = (struct _RTL_BALANCED_NODE **)((char *)this + 56);
        goto LABEL_101;
      }
      LOBYTE(v86) = 0;
      v89 = *v117;
      if ( *v117 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v125, v89) < 0 )
          {
            v107 = v89->Children[0];
            if ( !v89->Children[0] )
            {
              LOBYTE(v86) = 0;
              break;
            }
          }
          else
          {
            v107 = v89->Children[1];
            if ( !v107 )
            {
              LOBYTE(v86) = 1;
              break;
            }
          }
          v89 = v107;
        }
      }
      v91 = v117;
      goto LABEL_101;
    }
    LOBYTE(v86) = 0;
    v89 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
    if ( !v89 )
      goto LABEL_100;
    while ( 2 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v125, v89) < 0 )
      {
        v90 = v89->Children[0];
        if ( !v89->Children[0] )
        {
          LOBYTE(v86) = 0;
          goto LABEL_100;
        }
        goto LABEL_96;
      }
      v90 = v89->Children[1];
      if ( v90 )
      {
LABEL_96:
        v89 = v90;
        continue;
      }
      break;
    }
    LOBYTE(v86) = 1;
LABEL_100:
    v91 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
LABEL_101:
    RtlAvlInsertNodeEx(v91, v89, v86, v29);
LABEL_102:
    v9 = this;
    *(_DWORD *)(v29 + 88) = v130;
LABEL_42:
    *((_QWORD *)v24 + 17) = 0LL;
    v28 = *((_DWORD *)BlockAndRange + 54);
LABEL_43:
    if ( v28 != 1 )
    {
      v92 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v24 + 18);
      if ( v92 )
      {
        v93 = WdLogNewEntry5_WdEvent(v27, v26);
        *(_QWORD *)(v93 + 24) = v92;
        WdLogEvent5_WdEvent(v93);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(v9, v92, BlockAndRange);
        *((_QWORD *)v24 + 18) = 0LL;
        v28 = *((_DWORD *)BlockAndRange + 54);
      }
    }
    if ( v28 != 2 )
    {
      v46 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v24 + 19);
      if ( v46 )
      {
        v99 = WdLogNewEntry5_WdEvent(v27, v26);
        *(_QWORD *)(v99 + 24) = v46;
        WdLogEvent5_WdEvent(v99);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(v9, v46, BlockAndRange);
        *((_QWORD *)v24 + 19) = 0LL;
      }
    }
    if ( v24 != *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      v24 = VIDMM_RECYCLE_RANGE::GetNextRange(v24);
      continue;
    }
    break;
  }
  v47 = *((int *)BlockAndRange + 22);
  v48 = WdLogNewEntry5_WdEvent(v27, v26);
  *(_QWORD *)(v48 + 24) = BlockAndRange;
  *(_QWORD *)(v48 + 32) = v47;
  WdLogEvent5_WdEvent(v48);
  if ( (_DWORD)v47 == 1 )
  {
    v51 = (char *)v9 + 56;
    goto LABEL_50;
  }
  if ( (_DWORD)v47 )
  {
    if ( (_DWORD)v47 == 2 )
    {
      v51 = (char *)v9 + 64;
      goto LABEL_50;
    }
    v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49);
    v110[3] = 270LL;
    v110[4] = 52LL;
    v110[5] = 16LL;
    v110[6] = v47;
    v110[7] = 0LL;
    WdLogEvent5_WdCriticalError(v110);
  }
  else
  {
    v51 = (char *)v9 + 48;
LABEL_50:
    RtlAvlRemoveNode(v51, BlockAndRange);
  }
  PreviousRange = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  *((_DWORD *)BlockAndRange + 22) = 3;
  while ( 1 )
  {
    v54 = VIDMM_RECYCLE_RANGE::Commit(PreviousRange, v52, a7);
    v57 = v54;
    if ( v54 < 0 )
      break;
    if ( PreviousRange == *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        *((_QWORD *)i + 17) = 0LL;
        *((_QWORD *)i + 18) = 0LL;
        *((_QWORD *)i + 19) = 0LL;
        *((_QWORD *)i + 20) = BlockAndRange;
        if ( i == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
      }
      v59 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      *((_DWORD *)BlockAndRange + 54) = 3;
      v60 = v59;
      v61 = v59;
      v62 = *((_DWORD *)v59 + 16);
      v63 = *((_DWORD *)v59 + 23);
      while ( 1 )
      {
        v64 = v59;
        if ( *((_DWORD *)v59 + 16) != v62 || *((_DWORD *)v59 + 23) != v63 )
        {
          if ( v60 != v61 )
            VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v60, v61);
          v60 = v59;
        }
        if ( v59 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
        v59 = VIDMM_RECYCLE_RANGE::GetNextRange(v59);
        v61 = v64;
      }
      if ( v60 != v59 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v60, v59);
      if ( !*((_DWORD *)BlockAndRange + 54) )
      {
        v111 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( v111 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) && !*((_DWORD *)v111 + 16) )
          VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)BlockAndRange + 10), v111);
      }
      v65 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
      v66 = v65;
      if ( *v65 == 1LL && !*((_DWORD *)BlockAndRange + 54) )
      {
        v112 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( !*((_DWORD *)v112 + 16) )
        {
          VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v65[4], 2LL, BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
            *(VIDMM_RECYCLE_HEAP_MGR **)(v65[4] + 8LL),
            (struct _SLIST_ENTRY *)BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v65[4] + 8LL), v112, v113);
          v66 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
        }
      }
      v67 = *((_QWORD *)BlockAndRange + 9);
      v68 = 0LL;
      v69 = *(_QWORD *)(v67 + 120);
      if ( v69 != *(_QWORD *)(v67 + 72) + 72LL )
        v68 = v69 - 120;
      if ( v68 && !*(_DWORD *)(v68 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(v66, v68);
      *a4 = BlockAndRange;
      v70 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v70 - 3) <= 3 && (unsigned int)(v70 - 5) > 1 )
        v71 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      else
        v71 = (void *)*((_QWORD *)BlockAndRange + 6);
      *a5 = v71;
      if ( a6 )
      {
        v114 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v114 + 32) - 9) > 1 )
          v115 = 0LL;
        else
          v115 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v114 + 120) - *(_QWORD *)(v114 + 40));
        *a6 = v115;
      }
      v72 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v73 = 1;
      v74 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        v75 = 0;
        if ( *((_DWORD *)v72 + 20) <= 1u )
          v75 = v73;
        if ( v72 == v74 )
          break;
        v72 = VIDMM_RECYCLE_RANGE::GetNextRange(v72);
      }
      *a7 = v75;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL) + 136LL) += *((_QWORD *)BlockAndRange + 5)
                                                                   - *((_QWORD *)BlockAndRange + 4);
      goto LABEL_78;
    }
    PreviousRange = VIDMM_RECYCLE_RANGE::GetNextRange(PreviousRange);
  }
  while ( PreviousRange != *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 8) )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(PreviousRange);
    VIDMM_RECYCLE_RANGE::Decommit(PreviousRange);
  }
  v116 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55);
  v116[3] = BlockAndRange;
  v116[4] = a2;
  v116[5] = v122;
  v116[6] = v57;
  v116[7] = **(_QWORD **)(*((_QWORD *)v9 + 1) + 8LL);
  WdLogEvent5_WdWarning(v116);
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(v9, BlockAndRange) )
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *((VIDMM_RECYCLE_HEAP_MGR **)v9 + 1),
      (struct _SLIST_ENTRY *)BlockAndRange);
LABEL_205:
  v8 = v57;
LABEL_78:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119);
  if ( v121 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v119);
  return v8;
}
