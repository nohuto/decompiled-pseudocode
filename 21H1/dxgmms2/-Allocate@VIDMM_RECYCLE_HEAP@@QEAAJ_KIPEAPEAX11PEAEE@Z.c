/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F60
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C0078D40 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015C74 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0015C98 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005E714 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0077FAC (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0077FD0 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C00780E4 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00798F0 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0079BA0 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A384 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A4DC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007A610 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A7F8 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007A880 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C007B780 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BE10 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007CD10 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0084CF0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00851B0 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00858F0 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0085B40 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0086594 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C1E88 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2028 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C20FC (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2170 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00C2490 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2CDC (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
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
  unsigned int v21; // r8d
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rdi
  int v23; // eax
  __int64 v24; // rdx
  struct VIDMM_RECYCLE_RANGE *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  struct _RTL_BALANCED_NODE **v40; // rcx
  struct VIDMM_RECYCLE_RANGE *v41; // rcx
  void *v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rbp
  struct VIDMM_RECYCLE_MULTIRANGE *v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char *v52; // rcx
  unsigned __int8 v53; // dl
  VIDMM_RECYCLE_RANGE *PreviousRange; // rbx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbp
  struct VIDMM_RECYCLE_RANGE *i; // rax
  struct VIDMM_RECYCLE_RANGE *v60; // rbx
  struct VIDMM_RECYCLE_RANGE *v61; // r9
  struct VIDMM_RECYCLE_RANGE *v62; // r8
  int v63; // r10d
  int v64; // r11d
  struct VIDMM_RECYCLE_RANGE *v65; // rbp
  _QWORD *v66; // rbx
  _QWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r9
  int v71; // edx
  void *v72; // rcx
  struct VIDMM_RECYCLE_RANGE *v73; // rcx
  char v74; // r8
  struct VIDMM_RECYCLE_RANGE *v75; // r10
  unsigned __int8 v76; // dl
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned __int64 v80; // r9
  struct VIDMM_RECYCLE_RANGE *v81; // r10
  unsigned __int64 v82; // rdx
  __int64 v83; // rdx
  int v84; // r8d
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rax
  struct _RTL_BALANCED_NODE *v90; // rbx
  struct _RTL_BALANCED_NODE *v91; // rax
  struct _RTL_BALANCED_NODE **v92; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v93; // rbx
  __int64 v94; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // r15
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  VIDMM_RECYCLE_MULTIRANGE *v97; // rbx
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
    v23 = VidMmFindAlignedRange(v123, v18);
    if ( v23 >= 0 )
    {
      if ( v23 <= 0 )
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
  BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange(v9, a2, v21, a8);
  if ( !BlockAndRange )
  {
    LODWORD(v58) = -1073741801;
    goto LABEL_205;
  }
LABEL_24:
  v24 = *((_QWORD *)BlockAndRange + 6);
  if ( *((_QWORD *)BlockAndRange + 5) - v24 > a2 )
    VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v24 - *((_QWORD *)BlockAndRange + 4));
  v25 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  while ( 2 )
  {
    v26 = WdLogNewEntry5_WdEvent(v17, v24);
    *(_QWORD *)(v26 + 24) = v25;
    WdLogEvent5_WdEvent(v26);
    v29 = *((_DWORD *)BlockAndRange + 54);
    if ( !v29 )
      goto LABEL_43;
    v30 = *((_QWORD *)v25 + 17);
    if ( !v30 )
      goto LABEL_43;
    v31 = WdLogNewEntry5_WdEvent(v28, v27);
    *(_QWORD *)(v31 + 24) = v30;
    WdLogEvent5_WdEvent(v31);
    v32 = *(_QWORD *)(v30 + 32);
    v33 = *(_QWORD *)(v30 + 40);
    v34 = *((_QWORD *)BlockAndRange + 4);
    v35 = *((_QWORD *)BlockAndRange + 5);
    v130 = *(_DWORD *)(v30 + 88);
    v38 = WdLogNewEntry5_WdEvent(v37, v36);
    *(_QWORD *)(v38 + 24) = v30;
    *(_QWORD *)(v38 + 32) = (int)v130;
    WdLogEvent5_WdEvent(v38);
    switch ( v130 )
    {
      case 2u:
        v40 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
        goto LABEL_31;
      case 0u:
        v40 = v117;
        goto LABEL_31;
      case 1u:
        v40 = (struct _RTL_BALANCED_NODE **)((char *)this + 56);
LABEL_31:
        RtlAvlRemoveNode(v40, v30);
        goto LABEL_32;
    }
    v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v130, v39);
    v102[3] = 270LL;
    v102[4] = 52LL;
    v102[5] = 16LL;
    v102[6] = (int)v130;
    v102[7] = 0LL;
    WdLogEvent5_WdCriticalError(v102);
LABEL_32:
    *(_DWORD *)(v30 + 88) = 3;
    if ( v34 > v32 )
    {
      if ( v35 >= v33 )
      {
        VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v30, *(_QWORD *)(v30 + 32), v34);
        v9 = this;
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v130, v30);
        goto LABEL_42;
      }
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9));
      v118 = *(struct VIDMM_RECYCLE_RANGE **)(v30 + 72);
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v30, *(_QWORD *)(v30 + 32), v34);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v130, v30);
      Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                 *((_QWORD *)this + 1),
                                                 *(unsigned int *)(v30 + 216),
                                                 *(_QWORD *)(v30 + 80));
      v97 = Multirange;
      if ( Multirange )
      {
        *((_QWORD *)Multirange + 8) = NextRange;
        *((_QWORD *)Multirange + 9) = v118;
        VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
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
          v28 = (unsigned int)(v108 - 4);
          if ( (_DWORD)v28 )
          {
            if ( (_DWORD)v28 != 1 )
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
    v41 = *(struct VIDMM_RECYCLE_RANGE **)(v30 + 64);
    if ( v35 >= v33 )
    {
      while ( 1 )
      {
        v27 = *(unsigned int *)(v30 + 216);
        if ( (_DWORD)v27 )
        {
          v27 = (unsigned int)(v27 - 1);
          if ( (_DWORD)v27 )
          {
            if ( (_DWORD)v27 == 1 )
              *((_QWORD *)v41 + 19) = 0LL;
          }
          else
          {
            *((_QWORD *)v41 + 18) = 0LL;
          }
        }
        else
        {
          *((_QWORD *)v41 + 17) = 0LL;
        }
        if ( v41 == *(struct VIDMM_RECYCLE_RANGE **)(v30 + 72) )
          break;
        v41 = VIDMM_RECYCLE_RANGE::GetNextRange(v41);
      }
      v9 = this;
      v42 = *(void **)(v30 + 96);
      v43 = *((_QWORD *)this + 1);
      if ( v42 )
      {
        ExFreePoolWithTag(v42, 0);
        *(_QWORD *)(v30 + 96) = 0LL;
      }
      --*(_QWORD *)(*(_QWORD *)(v30 + 80) + 8LL);
      v44 = *(_QWORD *)(v30 + 80);
      *(_BYTE *)(v30 + 232) = 1;
      *(_QWORD *)(v30 + 224) = 0LL;
      v28 = *(_QWORD *)(v44 + 136);
      if ( v28 )
      {
        v103 = *(_QWORD *)(v28 + 24) + 144LL * *(_QWORD *)(v28 + 32);
        *(_DWORD *)v103 = 1;
        *(_QWORD *)(v103 + 8) = v30;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v103 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v44 + 136) + 32LL);
        v28 = *(_QWORD *)(v44 + 136);
        if ( *(_QWORD *)(v28 + 32) == *(_QWORD *)(v28 + 48) )
        {
          *(_QWORD *)(v28 + 32) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v44 + 136) + 40LL) = 1;
        }
      }
      v45 = *(unsigned int *)(v43 + 1612);
      v46 = *(_QWORD *)(v43 + 1320);
      if ( (unsigned int)v45 >= 4 )
      {
        ++*(_DWORD *)(v46 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v46) >= *(_WORD *)(v46 + 16) )
        {
          ++*(_DWORD *)(v46 + 32);
          (*(void (__fastcall **)(__int64, __int64))(v46 + 56))(v30, v46);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v46, (PSLIST_ENTRY)v30);
        }
      }
      else
      {
        *(_QWORD *)(v43 + 8 * v45 + 1648) = v30;
        ++*(_DWORD *)(v43 + 1612);
      }
      goto LABEL_42;
    }
    v80 = *(_QWORD *)(v30 + 40);
    v81 = *(struct VIDMM_RECYCLE_RANGE **)(v30 + 72);
    while ( 1 )
    {
      v82 = *((_QWORD *)v41 + 4);
      if ( v82 >= v80 || *((_QWORD *)v41 + 5) <= v35 )
      {
        v84 = *(_DWORD *)(v30 + 216);
        if ( v84 )
        {
          v104 = v84 - 1;
          if ( v104 )
          {
            if ( v104 == 1 )
              *((_QWORD *)v41 + 19) = 0LL;
          }
          else
          {
            *((_QWORD *)v41 + 18) = 0LL;
          }
        }
        else
        {
          *((_QWORD *)v41 + 17) = 0LL;
        }
      }
      if ( v82 == v35 )
        *(_QWORD *)(v30 + 64) = v41;
      if ( *((_QWORD *)v41 + 5) == v80 )
        *(_QWORD *)(v30 + 72) = v41;
      if ( v41 == v81 )
        break;
      v83 = *((_QWORD *)v41 + 15);
      if ( v83 == *((_QWORD *)v41 + 9) + 72LL )
        v41 = 0LL;
      else
        v41 = (struct VIDMM_RECYCLE_RANGE *)(v83 - 120);
    }
    *(_QWORD *)(v30 + 32) = v35;
    *(_QWORD *)(v30 + 40) = v80;
    *(_QWORD *)(v30 + 48) = v35;
    v85 = WdLogNewEntry5_WdEvent(v41, v82);
    *(_QWORD *)(v85 + 24) = v30;
    *(_QWORD *)(v85 + 32) = (int)v130;
    WdLogEvent5_WdEvent(v85);
    v88 = *(_QWORD *)(v30 + 40) - *(_QWORD *)(v30 + 32);
    v89 = *(_QWORD *)(v30 + 56);
    v125[0] = v88;
    v125[1] = v89;
    v126 = 0;
    if ( v130 != 2 )
    {
      if ( v130 )
      {
        if ( v130 != 1 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v88, v86);
          v105[3] = 270LL;
          v105[4] = 52LL;
          v105[5] = 15LL;
          v105[6] = (int)v130;
          v105[7] = 0LL;
          WdLogEvent5_WdCriticalError(v105);
          goto LABEL_102;
        }
        LOBYTE(v87) = 0;
        v90 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
        if ( v90 )
        {
          while ( 1 )
          {
            if ( (int)VidMmCompareForInsertAlignedRange(v125, v90) < 0 )
            {
              v106 = v90->Children[0];
              if ( !v90->Children[0] )
              {
                LOBYTE(v87) = 0;
                break;
              }
            }
            else
            {
              v106 = v90->Children[1];
              if ( !v106 )
              {
                LOBYTE(v87) = 1;
                break;
              }
            }
            v90 = v106;
          }
        }
        v92 = (struct _RTL_BALANCED_NODE **)((char *)this + 56);
        goto LABEL_101;
      }
      LOBYTE(v87) = 0;
      v90 = *v117;
      if ( *v117 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v125, v90) < 0 )
          {
            v107 = v90->Children[0];
            if ( !v90->Children[0] )
            {
              LOBYTE(v87) = 0;
              break;
            }
          }
          else
          {
            v107 = v90->Children[1];
            if ( !v107 )
            {
              LOBYTE(v87) = 1;
              break;
            }
          }
          v90 = v107;
        }
      }
      v92 = v117;
      goto LABEL_101;
    }
    LOBYTE(v87) = 0;
    v90 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
    if ( !v90 )
      goto LABEL_100;
    while ( 2 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v125, v90) < 0 )
      {
        v91 = v90->Children[0];
        if ( !v90->Children[0] )
        {
          LOBYTE(v87) = 0;
          goto LABEL_100;
        }
        goto LABEL_96;
      }
      v91 = v90->Children[1];
      if ( v91 )
      {
LABEL_96:
        v90 = v91;
        continue;
      }
      break;
    }
    LOBYTE(v87) = 1;
LABEL_100:
    v92 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
LABEL_101:
    RtlAvlInsertNodeEx(v92, v90, v87, v30);
LABEL_102:
    v9 = this;
    *(_DWORD *)(v30 + 88) = v130;
LABEL_42:
    *((_QWORD *)v25 + 17) = 0LL;
    v29 = *((_DWORD *)BlockAndRange + 54);
LABEL_43:
    if ( v29 != 1 )
    {
      v93 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v25 + 18);
      if ( v93 )
      {
        v94 = WdLogNewEntry5_WdEvent(v28, v27);
        *(_QWORD *)(v94 + 24) = v93;
        WdLogEvent5_WdEvent(v94);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(v9, v93, BlockAndRange);
        *((_QWORD *)v25 + 18) = 0LL;
        v29 = *((_DWORD *)BlockAndRange + 54);
      }
    }
    if ( v29 != 2 )
    {
      v47 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v25 + 19);
      if ( v47 )
      {
        v99 = WdLogNewEntry5_WdEvent(v28, v27);
        *(_QWORD *)(v99 + 24) = v47;
        WdLogEvent5_WdEvent(v99);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(v9, v47, BlockAndRange);
        *((_QWORD *)v25 + 19) = 0LL;
      }
    }
    if ( v25 != *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      v25 = VIDMM_RECYCLE_RANGE::GetNextRange(v25);
      continue;
    }
    break;
  }
  v48 = *((int *)BlockAndRange + 22);
  v49 = WdLogNewEntry5_WdEvent(v28, v27);
  *(_QWORD *)(v49 + 24) = BlockAndRange;
  *(_QWORD *)(v49 + 32) = v48;
  WdLogEvent5_WdEvent(v49);
  if ( (_DWORD)v48 == 1 )
  {
    v52 = (char *)v9 + 56;
    goto LABEL_50;
  }
  if ( (_DWORD)v48 )
  {
    if ( (_DWORD)v48 == 2 )
    {
      v52 = (char *)v9 + 64;
      goto LABEL_50;
    }
    v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50);
    v110[3] = 270LL;
    v110[4] = 52LL;
    v110[5] = 16LL;
    v110[6] = v48;
    v110[7] = 0LL;
    WdLogEvent5_WdCriticalError(v110);
  }
  else
  {
    v52 = (char *)v9 + 48;
LABEL_50:
    RtlAvlRemoveNode(v52, BlockAndRange);
  }
  PreviousRange = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  *((_DWORD *)BlockAndRange + 22) = 3;
  while ( 1 )
  {
    v55 = VIDMM_RECYCLE_RANGE::Commit(PreviousRange, v53, a7);
    v58 = v55;
    if ( v55 < 0 )
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
      v60 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      *((_DWORD *)BlockAndRange + 54) = 3;
      v61 = v60;
      v62 = v60;
      v63 = *((_DWORD *)v60 + 16);
      v64 = *((_DWORD *)v60 + 23);
      while ( 1 )
      {
        v65 = v60;
        if ( *((_DWORD *)v60 + 16) != v63 || *((_DWORD *)v60 + 23) != v64 )
        {
          if ( v61 != v62 )
            VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v61, v62);
          v61 = v60;
        }
        if ( v60 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
        v60 = VIDMM_RECYCLE_RANGE::GetNextRange(v60);
        v62 = v65;
      }
      if ( v61 != v60 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v61, v60);
      if ( !*((_DWORD *)BlockAndRange + 54) )
      {
        v111 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( v111 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) && !*((_DWORD *)v111 + 16) )
          VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)BlockAndRange + 10), v111);
      }
      v66 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
      v67 = v66;
      if ( *v66 == 1LL && !*((_DWORD *)BlockAndRange + 54) )
      {
        v112 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( !*((_DWORD *)v112 + 16) )
        {
          VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v66[4], 2LL, BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v66[4] + 8LL), BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v66[4] + 8LL), v112, v113);
          v67 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
        }
      }
      v68 = *((_QWORD *)BlockAndRange + 9);
      v69 = 0LL;
      v70 = *(_QWORD *)(v68 + 120);
      if ( v70 != *(_QWORD *)(v68 + 72) + 72LL )
        v69 = v70 - 120;
      if ( v69 && !*(_DWORD *)(v69 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(v67, v69);
      *a4 = BlockAndRange;
      v71 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v71 - 3) <= 3 && (unsigned int)(v71 - 5) > 1 )
        v72 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      else
        v72 = (void *)*((_QWORD *)BlockAndRange + 6);
      *a5 = v72;
      if ( a6 )
      {
        v114 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v114 + 32) - 9) > 1 )
          v115 = 0LL;
        else
          v115 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v114 + 120) - *(_QWORD *)(v114 + 40));
        *a6 = v115;
      }
      v73 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v74 = 1;
      v75 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        v76 = 0;
        if ( *((_DWORD *)v73 + 20) <= 1u )
          v76 = v74;
        if ( v73 == v75 )
          break;
        v73 = VIDMM_RECYCLE_RANGE::GetNextRange(v73);
      }
      *a7 = v76;
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
  v116 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56);
  v116[3] = BlockAndRange;
  v116[4] = a2;
  v116[5] = v122;
  v116[6] = v58;
  v116[7] = **(_QWORD **)(*((_QWORD *)v9 + 1) + 8LL);
  WdLogEvent5_WdWarning(v116);
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(v9, BlockAndRange) )
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v9 + 1), BlockAndRange);
LABEL_205:
  v8 = v58;
LABEL_78:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119);
  if ( v121 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v119);
  return v8;
}
