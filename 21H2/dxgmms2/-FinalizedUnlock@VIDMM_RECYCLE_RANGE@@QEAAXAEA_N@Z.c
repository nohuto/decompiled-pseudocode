/*
 * XREFs of ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C007C924
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0081C04 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x1C00012B8 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007D414 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C007DCE8 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F760 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008130C (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081380 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081AA8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::FinalizedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2)
{
  _QWORD **v3; // r14
  _QWORD *v5; // rdi
  VIDMM_MDL_RANGE *v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  VIDMM_RECYCLE_HEAP_MGR **v10; // rcx

  v3 = (_QWORD **)(*((_QWORD *)this + 9) + 96LL);
  *a2 = 0;
  v5 = *v3;
  while ( v5 != v3 )
  {
    v6 = (VIDMM_MDL_RANGE *)(v5 - 3);
    v7 = v5;
    VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)(v5 - 3));
    v8 = *v5;
    v5 = (_QWORD *)v8;
    if ( *(_QWORD **)(v8 + 8) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    VIDMM_MDL_RANGE::`scalar deleting destructor'(v6);
  }
  v10 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
  if ( (unsigned int)(*(_DWORD *)v10 - 3) > 3 && (unsigned int)(*(_DWORD *)v10 - 9) > 1 )
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v10[1], this);
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    VIDMM_RECYCLE_RANGE::Transition(this, 5LL);
  }
  else
  {
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v10, this);
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
    *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
  }
}
