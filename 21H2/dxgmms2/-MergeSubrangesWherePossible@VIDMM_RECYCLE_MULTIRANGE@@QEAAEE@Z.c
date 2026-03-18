/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC
 * Callers:
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C007DF30 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007E09C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C007F4F8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0081C04 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007C6C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C007E450 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00807B8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081AA8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rdi
  struct VIDMM_RECYCLE_RANGE *v3; // r9
  struct VIDMM_RECYCLE_RANGE *v4; // r10
  int v5; // r8d
  int v6; // r11d
  _QWORD *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct VIDMM_RECYCLE_RANGE *v11; // rdx
  struct VIDMM_RECYCLE_RANGE *v12; // rsi
  __int64 v13; // r8

  v1 = *((_QWORD *)this + 8);
  v3 = (struct VIDMM_RECYCLE_RANGE *)v1;
  v4 = (struct VIDMM_RECYCLE_RANGE *)v1;
  v5 = *(_DWORD *)(v1 + 64);
  v6 = *(_DWORD *)(v1 + 92);
  while ( 1 )
  {
    if ( *(_DWORD *)(v1 + 64) != v5 || *(_DWORD *)(v1 + 92) != v6 )
    {
      v5 = *(_DWORD *)(v1 + 64);
      if ( v3 != v4 )
      {
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)this, v3, v4);
        v5 = *(_DWORD *)(v1 + 64);
      }
      v6 = *(_DWORD *)(v1 + 92);
      v3 = (struct VIDMM_RECYCLE_RANGE *)v1;
    }
    if ( v1 == *((_QWORD *)this + 9) )
      break;
    v9 = *(_QWORD *)(v1 + 120);
    v4 = (struct VIDMM_RECYCLE_RANGE *)v1;
    v10 = *(_QWORD *)(v1 + 72);
    v1 = 0LL;
    if ( v9 != v10 + 72 )
      v1 = v9 - 120;
  }
  if ( v3 != (struct VIDMM_RECYCLE_RANGE *)v1 )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)this, v3, (struct VIDMM_RECYCLE_RANGE *)v1);
  if ( !*((_DWORD *)this + 54) )
  {
    v11 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
    if ( v11 == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && !*((_DWORD *)v11 + 16) )
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 10), v11);
  }
  v7 = (_QWORD *)*((_QWORD *)this + 10);
  if ( *v7 != 1LL )
    return 0;
  if ( *((_DWORD *)this + 54) )
    return 0;
  v12 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  if ( *((_DWORD *)v12 + 16) )
    return 0;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v7[4], 2LL, this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v7[4] + 8LL), (struct _SLIST_ENTRY *)this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v7[4] + 8LL), v12, v13);
  return 1;
}
