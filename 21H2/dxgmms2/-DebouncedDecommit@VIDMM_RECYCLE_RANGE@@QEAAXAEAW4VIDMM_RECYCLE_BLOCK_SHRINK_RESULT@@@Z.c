/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0081C04 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007D414 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F760 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081254 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081AA8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_BLOCK **this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  VIDMM_RECYCLE_BLOCK *v7; // rax
  int v8; // edx
  __int64 v9; // r8
  VIDMM_RECYCLE_BLOCK *v10; // rdx
  __int64 v11; // rcx
  VIDMM_RECYCLE_BLOCK *v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // ecx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  signed __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v6 = *((int *)this + 16);
  if ( (_DWORD)v6 == 5 )
  {
    v7 = this[9];
    v17 = this[5] - this[4];
    v8 = **((_DWORD **)v7 + 4);
    if ( (unsigned int)(v8 - 3) > 3 && (unsigned int)(v8 - 9) > 1 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, signed __int64 *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        (char *)this + 32,
        &v17,
        0x4000LL);
    }
    else
    {
      WdLogSingleEntry5(0LL, 270LL, 52LL, 4LL, 5LL, 0LL);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *((VIDMM_RECYCLE_HEAP **)this[9] + 4),
      (struct VIDMM_RECYCLE_RANGE *)this);
    if ( bTracingEnabled )
    {
      v10 = this[9];
      v11 = *((_QWORD *)v10 + 4);
      v12 = (unsigned int)(*(_DWORD *)v11 - 3) <= 3 ? (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v10 + 7) : this[4];
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
      if ( (byte_1C006E941 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v13,
          &EventDestroyProcessAllocationDetails,
          v9,
          *(_DWORD *)(v13 + 8),
          (char)this,
          v17,
          (char)v12);
    }
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    v14 = *((_DWORD *)this + 20);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 || (unsigned int)(v15 - 1) <= 1 )
        *((_DWORD *)this + 20) = 0;
    }
    else if ( dword_1C006E450 && g_IsInternalRelease )
    {
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(this[9], (struct VIDMM_RECYCLE_RANGE *)this);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(this[9], this);
  }
  else
  {
    WdLogSingleEntry5(0LL, 270LL, 52LL, 5LL, v6, 0LL);
  }
}
