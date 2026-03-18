/*
 * XREFs of ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00C7318
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00C6448 (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C0032510 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088CF8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A2B8 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

void __fastcall VidMmiMoveAndFlipDisplayingAllocation(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        union _LARGE_INTEGER a3,
        union _LARGE_INTEGER a4)
{
  union _LARGE_INTEGER v6; // [rsp+80h] [rbp+18h] BYREF
  union _LARGE_INTEGER v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  VIDMM_GLOBAL::MemoryTransfer(
    this,
    a2,
    *((_QWORD *)a2 + 2),
    0LL,
    *((struct VIDMM_SEGMENT **)a2 + 16),
    &v6,
    0LL,
    *((struct VIDMM_SEGMENT **)a2 + 16),
    &v7,
    0LL,
    0);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *((_DWORD *)a2 + 19) & 0x3F);
  *((union _LARGE_INTEGER *)a2 + 17) = v7;
  if ( (**((_DWORD **)a2 + 62) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this, a2, 1u);
  VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), a2);
}
