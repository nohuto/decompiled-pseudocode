/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0063BF0
 * Callers:
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C00638C4 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00639D4 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0064220 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006AEC8 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060004 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00610A0 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006114C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0064610 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064CA0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  struct VIDMM_RECYCLE_RANGE *v3; // r9
  struct VIDMM_RECYCLE_RANGE *v4; // r8
  int v5; // r10d
  int v6; // r11d
  struct VIDMM_RECYCLE_RANGE *v7; // rsi
  _QWORD *v8; // rbx
  struct VIDMM_RECYCLE_RANGE *v10; // rdx
  struct VIDMM_RECYCLE_RANGE *v11; // rsi
  __int64 v12; // r8

  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v3 = NextRange;
  v4 = NextRange;
  v5 = *((_DWORD *)NextRange + 16);
  v6 = *((_DWORD *)NextRange + 23);
  while ( 1 )
  {
    v7 = NextRange;
    if ( *((_DWORD *)NextRange + 16) != v5 || *((_DWORD *)NextRange + 23) != v6 )
    {
      if ( v3 != v4 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v3, v4);
      v3 = NextRange;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v4 = v7;
  }
  if ( v3 != NextRange )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v3, NextRange);
  if ( !*((_DWORD *)this + 54) )
  {
    v10 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
    if ( v10 == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && !*((_DWORD *)v10 + 16) )
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 10), v10);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 10);
  if ( *v8 != 1LL )
    return 0;
  if ( *((_DWORD *)this + 54) )
    return 0;
  v11 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  if ( *((_DWORD *)v11 + 16) )
    return 0;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v8[4], 2LL, this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v8[4] + 8LL), (struct _SLIST_ENTRY *)this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v8[4] + 8LL), v11, v12);
  return 1;
}
