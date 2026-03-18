/*
 * XREFs of ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B71CC
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0075E34 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088DC0 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C00C5310 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0075FC4 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VerifyAllocationIsIdle(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
  {
    v5 = WdLogNewEntry5_WdCriticalError(v4, v3);
    *(_QWORD *)(v5 + 24) = 270LL;
    *(_QWORD *)(v5 + 32) = 32LL;
    *(_QWORD *)(v5 + 40) = a2;
    *(_OWORD *)(v5 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
}
