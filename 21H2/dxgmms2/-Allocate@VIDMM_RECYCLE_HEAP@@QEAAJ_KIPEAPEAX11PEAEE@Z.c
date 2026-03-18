/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C007F190 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C007CDB8 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007EB0C (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C007F4F8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00807B8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0080A28 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0080B58 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081254 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  __int64 v9; // rbx
  __int64 v12; // r14
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v14; // rdx
  unsigned __int8 v15; // dl
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  void *v22; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  unsigned __int8 v24; // r8
  struct VIDMM_RECYCLE_RANGE *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdx
  void *v30; // rcx
  int v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h]
  char v33; // [rsp+40h] [rbp-38h]

  v31 = -1;
  v9 = (unsigned int)a3;
  v32 = 0LL;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v33 = 1;
    v31 = 8004;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 8004);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = v9;
  WdLogSingleEntry3(4LL, this, a2, v9);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v9, a8);
  if ( BlockAndRange
    || (WdLogSingleEntry3(4LL, this, a2, v12), (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange(this)) != 0LL) )
  {
    v14 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v14 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v14 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v16 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, v15, a7);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry5(3LL, BlockAndRange, a2, v12, v16, **((_QWORD **)this[1] + 1));
      if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)BlockAndRange);
    }
    else
    {
      v18 = *((_QWORD *)BlockAndRange + 9);
      v19 = 0LL;
      v20 = *(_QWORD *)(v18 + 120);
      if ( v20 != *(_QWORD *)(v18 + 72) + 72LL )
        v19 = v20 - 120;
      if ( v19 && !*(_DWORD *)(v19 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10), v19);
      *a4 = BlockAndRange;
      v21 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v21 - 3) <= 3 && (unsigned int)(v21 - 5) > 1 )
        v22 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      else
        v22 = (void *)*((_QWORD *)BlockAndRange + 6);
      *a5 = v22;
      if ( a6 )
      {
        v29 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v29 + 32) - 9) <= 1 )
          v30 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v29 + 120) - *(_QWORD *)(v29 + 40));
        else
          v30 = 0LL;
        *a6 = v30;
      }
      NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v24 = 1;
      v25 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        if ( *((_DWORD *)NextRange + 20) > 1u )
          v24 = 0;
        if ( NextRange == v25 )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      *a7 = v24;
      *(_QWORD *)(*((_QWORD *)this[1] + 1) + 136LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    }
  }
  else
  {
    v17 = -1073741801;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v26) = byte_1C006E941;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v31);
  }
  return v17;
}
