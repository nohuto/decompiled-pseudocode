/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007D130
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C007CF10 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00056B0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005F68 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C00159B8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00178A8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00607B0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00614F8 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0076398 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0076638 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007665C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C007689C (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0077220 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0077250 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007B74C (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007B8B4 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BA30 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BCF8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007BD90 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007DE30 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007F224 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0086A90 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0086FA0 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00896F4 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008A7C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C0AB0 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C0C50 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C0D24 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C0D98 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00C10B8 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C190C (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
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
  unsigned int v8; // ebp
  VIDMM_RECYCLE_HEAP *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _RTL_BALANCED_NODE *v18; // rbx
  int AlignedRange; // eax
  int v20; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // r13
  int v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  struct VIDMM_RECYCLE_RANGE *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  struct _RTL_BALANCED_NODE **v44; // rcx
  struct VIDMM_RECYCLE_RANGE *i; // rdx
  int v46; // ecx
  int v47; // ecx
  void *v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  void (__fastcall *v53)(__int64, __int64); // rax
  unsigned __int64 v54; // r9
  _QWORD *v55; // r8
  _QWORD *v56; // r10
  unsigned __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rax
  _QWORD *v64; // rax
  struct _RTL_BALANCED_NODE *v65; // rbx
  struct _RTL_BALANCED_NODE *v66; // rax
  struct _RTL_BALANCED_NODE *v67; // rbx
  struct _RTL_BALANCED_NODE *v68; // rax
  struct _RTL_BALANCED_NODE *v69; // rbx
  struct _RTL_BALANCED_NODE *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  struct VIDMM_RECYCLE_MULTIRANGE *v73; // rbx
  __int64 v74; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rdi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v79; // r14
  struct VIDMM_RECYCLE_RANGE *v80; // rbx
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  VIDMM_RECYCLE_MULTIRANGE *v82; // rdi
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // ebx
  _QWORD *v91; // rax
  unsigned __int8 v92; // dl
  char *v93; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rbx
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct VIDMM_RECYCLE_RANGE *j; // rax
  struct VIDMM_RECYCLE_RANGE *v99; // rbx
  struct VIDMM_RECYCLE_RANGE *v100; // r9
  struct VIDMM_RECYCLE_RANGE *v101; // r8
  int v102; // r10d
  int v103; // r11d
  struct VIDMM_RECYCLE_RANGE *v104; // rdi
  struct VIDMM_RECYCLE_RANGE *v105; // rdx
  VIDMM_RECYCLE_BLOCK *v106; // rbx
  VIDMM_RECYCLE_BLOCK *v107; // rcx
  struct VIDMM_RECYCLE_RANGE *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r9
  int v112; // edx
  void *v113; // rcx
  __int64 v114; // rdx
  void *v115; // rcx
  struct VIDMM_RECYCLE_RANGE *v116; // rcx
  char v117; // r8
  struct VIDMM_RECYCLE_RANGE *v118; // r9
  unsigned __int8 v119; // dl
  _QWORD *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  struct _RTL_BALANCED_NODE **v124; // [rsp+30h] [rbp-98h]
  struct VIDMM_RECYCLE_RANGE *v125; // [rsp+38h] [rbp-90h]
  int v126; // [rsp+40h] [rbp-88h] BYREF
  __int64 v127; // [rsp+48h] [rbp-80h]
  char v128; // [rsp+50h] [rbp-78h]
  __int64 v129; // [rsp+58h] [rbp-70h]
  _QWORD v130[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int8 v131; // [rsp+70h] [rbp-58h]
  _QWORD v132[2]; // [rsp+78h] [rbp-50h] BYREF
  char v133; // [rsp+88h] [rbp-40h]
  unsigned int v137; // [rsp+108h] [rbp+40h]

  v8 = 0;
  v10 = this;
  v126 = -1;
  v11 = (unsigned int)a3;
  v127 = 0LL;
  if ( (qword_1C0050010 & 2) != 0 )
  {
    v128 = 1;
    v126 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v128 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v15 = v11;
  v129 = v11;
  v14[3] = v10;
  v14[4] = a2;
  v14[5] = v11;
  WdLogEvent5_WdEvent(v14);
  v130[1] = v11;
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v10 + 6);
  v130[0] = a2;
  v131 = a8;
  v124 = (struct _RTL_BALANCED_NODE **)((char *)v10 + 48);
  while ( v18 )
  {
    AlignedRange = VidMmFindAlignedRange(v130, v18);
    if ( AlignedRange >= 0 )
    {
      if ( AlignedRange <= 0 )
      {
        if ( !LODWORD(v18[1].Children[0]) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, LODWORD(v18[3].ParentValue), v18);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(v10, (struct VIDMM_RECYCLE_RANGE *)v18);
          if ( BlockAndRange )
            goto LABEL_37;
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v10, 0LL, v18);
          goto LABEL_35;
        }
        goto LABEL_33;
      }
      v18 = v18->Children[1];
    }
    else
    {
      v18 = v18->Children[0];
    }
  }
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v10 + 7);
  while ( v18 )
  {
    v20 = VidMmFindAlignedRange(v130, v18);
    if ( v20 >= 0 )
    {
      if ( v20 <= 0 )
      {
        if ( !LODWORD(v18[1].Children[0]) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, LODWORD(v18[3].ParentValue), v18);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(
                            v10,
                            (struct VIDMM_RECYCLE_RANGE *)v18);
          if ( BlockAndRange )
            goto LABEL_37;
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v10, 1LL, v18);
          goto LABEL_35;
        }
LABEL_33:
        BlockAndRange = (struct VIDMM_RECYCLE_MULTIRANGE *)v18;
        goto LABEL_37;
      }
      v18 = v18->Children[1];
    }
    else
    {
      v18 = v18->Children[0];
    }
  }
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v10 + 8);
  if ( !v18 )
  {
LABEL_35:
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v23[3] = v10;
    v23[4] = a2;
    v23[5] = v15;
    WdLogEvent5_WdEvent(v23);
    BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP_MGR **)v10);
    if ( !BlockAndRange )
    {
      LODWORD(v24) = -1073741801;
      goto LABEL_196;
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    v22 = VidMmFindAlignedRange(v130, v18);
    if ( v22 >= 0 )
      break;
    v18 = v18->Children[0];
LABEL_28:
    if ( !v18 )
      goto LABEL_35;
  }
  if ( v22 > 0 )
  {
    v18 = v18->Children[1];
    goto LABEL_28;
  }
  if ( LODWORD(v18[1].Children[0]) )
    goto LABEL_33;
  VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, LODWORD(v18[3].ParentValue), v18);
  BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(v10, (struct VIDMM_RECYCLE_RANGE *)v18);
  if ( !BlockAndRange )
  {
    VIDMM_RECYCLE_HEAP::AddRangeToTree(v10, 2LL, v18);
    goto LABEL_35;
  }
LABEL_37:
  v25 = *((_QWORD *)BlockAndRange + 6);
  if ( *((_QWORD *)BlockAndRange + 5) - v25 > a2 )
    VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v25 - *((_QWORD *)BlockAndRange + 4));
  v26 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  while ( 2 )
  {
    v125 = v26;
    v27 = WdLogNewEntry5_WdEvent(v17, v25);
    *(_QWORD *)(v27 + 24) = v26;
    WdLogEvent5_WdEvent(v27);
    v30 = *((_DWORD *)BlockAndRange + 54);
    if ( !v30 )
      goto LABEL_121;
    v31 = *((_QWORD *)v26 + 17);
    if ( !v31 )
      goto LABEL_121;
    v32 = WdLogNewEntry5_WdEvent(v29, v28);
    *(_QWORD *)(v32 + 24) = v31;
    WdLogEvent5_WdEvent(v32);
    v33 = *(int *)(v31 + 88);
    v34 = *(_QWORD *)(v31 + 32);
    v35 = *(_QWORD *)(v31 + 40);
    v36 = *((_QWORD *)BlockAndRange + 4);
    v37 = *((_QWORD *)BlockAndRange + 5);
    v137 = *(_DWORD *)(v31 + 88);
    v40 = WdLogNewEntry5_WdEvent(v39, v38);
    *(_QWORD *)(v40 + 24) = v31;
    *(_QWORD *)(v40 + 32) = v33;
    WdLogEvent5_WdEvent(v40);
    if ( (_DWORD)v33 )
    {
      if ( (_DWORD)v33 == 1 )
      {
        v44 = (struct _RTL_BALANCED_NODE **)((char *)this + 56);
      }
      else
      {
        if ( (_DWORD)v33 != 2 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v33 - 1), v41);
          v42[3] = 270LL;
          v42[4] = 52LL;
          v42[5] = 16LL;
          v42[6] = v33;
          v42[7] = 0LL;
          WdLogEvent5_WdCriticalError(v42);
          goto LABEL_50;
        }
        v44 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
      }
    }
    else
    {
      v44 = v124;
    }
    RtlAvlRemoveNode(v44, v31);
LABEL_50:
    *(_DWORD *)(v31 + 88) = 3;
    if ( v36 > v34 )
    {
      if ( v37 >= v35 )
      {
        VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v31, *(_QWORD *)(v31 + 32), v36);
        v10 = this;
        v71 = (unsigned int)v33;
        v72 = v31;
LABEL_119:
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v10, v71, v72);
        goto LABEL_120;
      }
      v77 = *(_QWORD *)(v31 + 40);
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9));
      v79 = *(struct VIDMM_RECYCLE_RANGE **)(v31 + 72);
      v80 = NextRange;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v31, *(_QWORD *)(v31 + 32), v36);
      v10 = this;
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v137, v31);
      Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                 *((_QWORD *)this + 1),
                                                 *(unsigned int *)(v31 + 216),
                                                 *(_QWORD *)(v31 + 80),
                                                 v37,
                                                 v77);
      v82 = Multirange;
      if ( Multirange )
      {
        *((_QWORD *)Multirange + 8) = v80;
        *((_QWORD *)Multirange + 9) = v79;
        VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
        v71 = v137;
        v72 = (__int64)v82;
        goto LABEL_119;
      }
      while ( 1 )
      {
        v83 = *((_DWORD *)v80 + 16);
        if ( v83 )
        {
          v29 = (unsigned int)(v83 - 4);
          if ( (_DWORD)v29 )
          {
            if ( (_DWORD)v29 != 1 )
              goto LABEL_138;
            v84 = 1LL;
          }
          else
          {
            v84 = 0LL;
          }
        }
        else
        {
          v84 = 2LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v84, v80);
LABEL_138:
        if ( v80 == v79 )
          goto LABEL_120;
        v80 = VIDMM_RECYCLE_RANGE::GetNextRange(v80);
      }
    }
    if ( v37 >= v35 )
    {
      for ( i = *(struct VIDMM_RECYCLE_RANGE **)(v31 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v46 = *(_DWORD *)(v31 + 216);
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            if ( v47 == 1 )
              *((_QWORD *)i + 19) = 0LL;
          }
          else
          {
            *((_QWORD *)i + 18) = 0LL;
          }
        }
        else
        {
          *((_QWORD *)i + 17) = 0LL;
        }
        if ( i == *(struct VIDMM_RECYCLE_RANGE **)(v31 + 72) )
          break;
      }
      v10 = this;
      v48 = *(void **)(v31 + 96);
      v49 = *((_QWORD *)this + 1);
      if ( v48 )
      {
        ExFreePoolWithTag(v48, 0);
        *(_QWORD *)(v31 + 96) = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(*(_QWORD *)(v31 + 80), 1, v31);
      v29 = *(_QWORD *)(v31 + 80);
      v50 = *(_QWORD *)(v29 + 8) - 1LL;
      *(_QWORD *)(v29 + 8) = v50;
      if ( !*(_QWORD *)v29 && !v50 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v29);
      *(_BYTE *)(v31 + 232) = 1;
      *(_QWORD *)(v31 + 224) = 0LL;
      v51 = *(unsigned int *)(v49 + 1612);
      v52 = *(_QWORD *)(v49 + 1320);
      if ( (unsigned int)v51 >= 4 )
      {
        ++*(_DWORD *)(v52 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v52) < *(_WORD *)(v52 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v52, (PSLIST_ENTRY)v31);
        }
        else
        {
          v53 = *(void (__fastcall **)(__int64, __int64))(v52 + 56);
          ++*(_DWORD *)(v52 + 32);
          v53(v31, v52);
        }
        --*(_DWORD *)(v49 + 1680);
      }
      else
      {
        *(_QWORD *)(v49 + 8 * v51 + 1648) = v31;
        ++*(_DWORD *)(v49 + 1612);
        --*(_DWORD *)(v49 + 1680);
      }
      goto LABEL_120;
    }
    v54 = *(_QWORD *)(v31 + 40);
    v55 = *(_QWORD **)(v31 + 64);
    v56 = *(_QWORD **)(v31 + 72);
    while ( 1 )
    {
      v57 = v55[4];
      if ( v57 >= v54 || v55[5] <= v37 )
      {
        v43 = *(unsigned int *)(v31 + 216);
        if ( (_DWORD)v43 )
        {
          v43 = (unsigned int)(v43 - 1);
          if ( (_DWORD)v43 )
          {
            if ( (_DWORD)v43 == 1 )
              v55[19] = 0LL;
          }
          else
          {
            v55[18] = 0LL;
          }
        }
        else
        {
          v55[17] = 0LL;
        }
      }
      if ( v57 == v37 )
        *(_QWORD *)(v31 + 64) = v55;
      if ( v55[5] == v54 )
        *(_QWORD *)(v31 + 72) = v55;
      if ( v55 == v56 )
        break;
      v58 = v55[15];
      v59 = v55[9];
      v55 = 0LL;
      v43 = v59 + 72;
      if ( v58 != v43 )
        v55 = (_QWORD *)(v58 - 120);
    }
    *(_QWORD *)(v31 + 32) = v37;
    *(_QWORD *)(v31 + 40) = v54;
    *(_QWORD *)(v31 + 48) = v37;
    v60 = WdLogNewEntry5_WdEvent(v43, v57);
    *(_QWORD *)(v60 + 24) = v31;
    *(_QWORD *)(v60 + 32) = v33;
    WdLogEvent5_WdEvent(v60);
    v63 = *(_QWORD *)(v31 + 56);
    v132[0] = *(_QWORD *)(v31 + 40) - *(_QWORD *)(v31 + 32);
    v132[1] = v63;
    v133 = 0;
    if ( !(_DWORD)v33 )
    {
      LOBYTE(v62) = 0;
      v69 = *v124;
      if ( *v124 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v132, v69) < 0 )
          {
            v70 = v69->Children[0];
            if ( !v69->Children[0] )
            {
              LOBYTE(v62) = 0;
              break;
            }
          }
          else
          {
            v70 = v69->Children[1];
            if ( !v70 )
            {
              LOBYTE(v62) = 1;
              break;
            }
          }
          v69 = v70;
        }
      }
      RtlAvlInsertNodeEx(v124, v69, v62, v31);
      v10 = this;
      *(_DWORD *)(v31 + 88) = 0;
      goto LABEL_120;
    }
    if ( (_DWORD)v33 == 1 )
    {
      v10 = this;
      LOBYTE(v62) = 0;
      v67 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
      if ( v67 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v132, v67) < 0 )
          {
            v68 = v67->Children[0];
            if ( !v67->Children[0] )
            {
              LOBYTE(v62) = 0;
              break;
            }
          }
          else
          {
            v68 = v67->Children[1];
            if ( !v68 )
            {
              LOBYTE(v62) = 1;
              break;
            }
          }
          v67 = v68;
        }
      }
      RtlAvlInsertNodeEx((char *)this + 56, v67, v62, v31);
      *(_DWORD *)(v31 + 88) = v33;
      goto LABEL_120;
    }
    if ( (_DWORD)v33 != 2 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v33 - 1), v61);
      v64[3] = 270LL;
      v64[4] = 52LL;
      v64[5] = 15LL;
      v64[6] = v33;
      v64[7] = 0LL;
      WdLogEvent5_WdCriticalError(v64);
      v10 = this;
      *(_DWORD *)(v31 + 88) = v33;
      goto LABEL_120;
    }
    v10 = this;
    LOBYTE(v62) = 0;
    v65 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
    if ( !v65 )
      goto LABEL_100;
    while ( 2 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v132, v65) >= 0 )
      {
        v66 = v65->Children[1];
        if ( !v66 )
        {
          LOBYTE(v62) = 1;
          goto LABEL_100;
        }
        goto LABEL_98;
      }
      v66 = v65->Children[0];
      if ( v65->Children[0] )
      {
LABEL_98:
        v65 = v66;
        continue;
      }
      break;
    }
    LOBYTE(v62) = 0;
LABEL_100:
    RtlAvlInsertNodeEx((char *)this + 64, v65, v62, v31);
    *(_DWORD *)(v31 + 88) = v33;
LABEL_120:
    v26 = v125;
    *((_QWORD *)v125 + 17) = 0LL;
    v30 = *((_DWORD *)BlockAndRange + 54);
LABEL_121:
    if ( v30 != 1 )
    {
      v73 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v26 + 18);
      if ( v73 )
      {
        v74 = WdLogNewEntry5_WdEvent(v29, v28);
        *(_QWORD *)(v74 + 24) = v73;
        WdLogEvent5_WdEvent(v74);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP_MGR **)v10, v73, BlockAndRange);
        *((_QWORD *)v26 + 18) = 0LL;
        v30 = *((_DWORD *)BlockAndRange + 54);
      }
    }
    if ( v30 != 2 )
    {
      v75 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v26 + 19);
      if ( v75 )
      {
        v76 = WdLogNewEntry5_WdEvent(v29, v28);
        *(_QWORD *)(v76 + 24) = v75;
        WdLogEvent5_WdEvent(v76);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP_MGR **)v10, v75, BlockAndRange);
        *((_QWORD *)v26 + 19) = 0LL;
      }
    }
    if ( v26 != *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      v26 = VIDMM_RECYCLE_RANGE::GetNextRange(v26);
      continue;
    }
    break;
  }
  v85 = *((int *)BlockAndRange + 22);
  v86 = WdLogNewEntry5_WdEvent(v29, v28);
  v87 = v85;
  *(_QWORD *)(v86 + 24) = BlockAndRange;
  *(_QWORD *)(v86 + 32) = v85;
  WdLogEvent5_WdEvent(v86);
  if ( !(_DWORD)v85 )
  {
    v93 = (char *)v10 + 48;
    goto LABEL_147;
  }
  v90 = v85 - 1;
  if ( !v90 )
  {
    v93 = (char *)v10 + 56;
    goto LABEL_147;
  }
  if ( v90 == 1 )
  {
    v93 = (char *)v10 + 64;
LABEL_147:
    RtlAvlRemoveNode(v93, BlockAndRange);
    goto LABEL_148;
  }
  v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v89, v88);
  v91[3] = 270LL;
  v91[4] = 52LL;
  v91[5] = 16LL;
  v91[6] = v87;
  v91[7] = 0LL;
  WdLogEvent5_WdCriticalError(v91);
LABEL_148:
  PreviousRange = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  *((_DWORD *)BlockAndRange + 22) = 3;
  while ( 1 )
  {
    v95 = VIDMM_RECYCLE_RANGE::Commit(PreviousRange, v92, a7);
    v24 = v95;
    if ( v95 < 0 )
      break;
    if ( PreviousRange == *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
      {
        *((_QWORD *)j + 17) = 0LL;
        *((_QWORD *)j + 18) = 0LL;
        *((_QWORD *)j + 19) = 0LL;
        *((_QWORD *)j + 20) = BlockAndRange;
        if ( j == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
      }
      v99 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      *((_DWORD *)BlockAndRange + 54) = 3;
      v100 = v99;
      v101 = v99;
      v102 = *((_DWORD *)v99 + 16);
      v103 = *((_DWORD *)v99 + 23);
      while ( 1 )
      {
        v104 = v99;
        if ( *((_DWORD *)v99 + 16) != v102 || *((_DWORD *)v99 + 23) != v103 )
        {
          if ( v100 != v101 )
            VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)BlockAndRange, v100, v101);
          v100 = v99;
        }
        if ( v99 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
        v99 = VIDMM_RECYCLE_RANGE::GetNextRange(v99);
        v101 = v104;
      }
      if ( v100 != v99 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)BlockAndRange, v100, v99);
      if ( !*((_DWORD *)BlockAndRange + 54) )
      {
        v105 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( v105 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) && !*((_DWORD *)v105 + 16) )
          VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)BlockAndRange + 10), v105);
      }
      v106 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)BlockAndRange + 10);
      v107 = v106;
      if ( *(_QWORD *)v106 == 1LL && !*((_DWORD *)BlockAndRange + 54) )
      {
        v108 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( !*((_DWORD *)v108 + 16) )
        {
          VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*((_QWORD *)v106 + 4), 2LL, (__int64)BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)v106 + 4) + 8LL),
            BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)v106 + 4) + 8LL), v108);
          v107 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)BlockAndRange + 10);
        }
      }
      v109 = *((_QWORD *)BlockAndRange + 9);
      v110 = 0LL;
      v111 = *(_QWORD *)(v109 + 120);
      if ( v111 != *(_QWORD *)(v109 + 72) + 72LL )
        v110 = v111 - 120;
      if ( v110 && !*(_DWORD *)(v110 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(v107, v110);
      *a4 = BlockAndRange;
      v112 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v112 - 3) > 3 || (unsigned int)(v112 - 5) <= 1 )
        v113 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v113 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v113;
      if ( a6 )
      {
        v114 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v114 + 32) - 9) > 1 )
          v115 = 0LL;
        else
          v115 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v114 + 120) - *(_QWORD *)(v114 + 40));
        *a6 = v115;
      }
      v116 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v117 = 1;
      v118 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        v119 = 0;
        if ( *((_DWORD *)v116 + 20) <= 1u )
          v119 = v117;
        if ( v116 == v118 )
          break;
        v116 = VIDMM_RECYCLE_RANGE::GetNextRange(v116);
      }
      *a7 = v119;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL) + 136LL) += *((_QWORD *)BlockAndRange + 5)
                                                                    - *((_QWORD *)BlockAndRange + 4);
      goto LABEL_197;
    }
    PreviousRange = VIDMM_RECYCLE_RANGE::GetNextRange(PreviousRange);
  }
  while ( PreviousRange != *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 8) )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(PreviousRange);
    VIDMM_RECYCLE_RANGE::Decommit(PreviousRange);
  }
  v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v97, v96);
  v120[3] = BlockAndRange;
  v120[4] = a2;
  v120[5] = v129;
  v120[6] = v24;
  v120[7] = **(_QWORD **)(*((_QWORD *)v10 + 1) + 8LL);
  WdLogEvent5_WdWarning(v120);
  VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(v10, BlockAndRange);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v10 + 1), BlockAndRange);
LABEL_196:
  v8 = v24;
LABEL_197:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126);
  if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v121, &EventProfilerExit, v122, v126);
  return v8;
}
