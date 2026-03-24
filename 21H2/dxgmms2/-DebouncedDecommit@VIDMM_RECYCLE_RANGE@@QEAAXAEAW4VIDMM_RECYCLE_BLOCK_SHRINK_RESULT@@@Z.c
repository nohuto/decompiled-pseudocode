/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0076224
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0076D88 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C007AD3C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C00280A4 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0076398 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007665C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007B55C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F750 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v4 = *((int *)this + 16);
  if ( (_DWORD)v4 == 5 )
  {
    v5 = *((_QWORD *)this + 9);
    RegionSize = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v6 = *(unsigned int **)(v5 + 32);
    v7 = *v6;
    if ( (unsigned int)(v7 - 3) > 3 && (unsigned int)(v7 - 9) > 1 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 4, &RegionSize, 0x4000u);
    }
    else
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v7);
      v8[7] = 0LL;
      v8[3] = 270LL;
      v8[4] = 52LL;
      v8[5] = 4LL;
      v8[6] = v4;
      WdLogEvent5_WdCriticalError(v8);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v9 = *((_QWORD *)this + 9);
      v10 = *(_QWORD *)(v9 + 32);
      v11 = (unsigned int)(*(_DWORD *)v10 - 3) <= 3 ? *(_QWORD *)(v9 + 56) : *((_QWORD *)this + 4);
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp_EtwWriteTransfer(
          v12,
          &EventDestroyProcessAllocationDetails,
          *(_QWORD *)(v12 + 8),
          *(_QWORD *)(v12 + 8),
          (char)this,
          RegionSize,
          v11);
    }
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    v14 = *((unsigned int *)this + 20);
    if ( (_DWORD)v14 )
    {
      v15 = v14 - 1;
      if ( !v15 || (unsigned int)(v15 - 1) <= 1 )
        *((_DWORD *)this + 20) = 0;
    }
    else if ( dword_1C00503E0 && g_IsInternalRelease )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v17[5] = 0LL;
      v17[6] = 0LL;
      v17[7] = 0LL;
      v17[3] = 270LL;
      v17[4] = 9LL;
      WdLogEvent5_WdCriticalError(v17);
    }
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)this + 9), this);
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v16[7] = 0LL;
    v16[3] = 270LL;
    v16[4] = 52LL;
    v16[5] = 5LL;
    v16[6] = v4;
    WdLogEvent5_WdCriticalError(v16);
  }
}
