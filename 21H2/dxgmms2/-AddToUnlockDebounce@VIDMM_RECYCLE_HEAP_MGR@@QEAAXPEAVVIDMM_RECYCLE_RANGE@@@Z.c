/*
 * XREFs of ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C
 * Callers:
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007E050 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C007E450 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007F0F4 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007F5A4 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0080C40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0081848 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8DA0 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR **v3; // r8
  VIDMM_RECYCLE_HEAP_MGR *v4; // rdx
  unsigned __int64 v5; // rcx

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 197) + (unsigned int)dword_1C006E43C;
  v3 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 194);
  v4 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  if ( *v3 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 1544;
  *((_QWORD *)v4 + 1) = v3;
  *v3 = v4;
  *((_QWORD *)this + 194) = v4;
  if ( !_InterlockedExchange((volatile __int32 *)this + 384, 1) && !*((_DWORD *)this + 396) )
    KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
  v5 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v5 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v5)) < 0 )
  {
    if ( g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
}
