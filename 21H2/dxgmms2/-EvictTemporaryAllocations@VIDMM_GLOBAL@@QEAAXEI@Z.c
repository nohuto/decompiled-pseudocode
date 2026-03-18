/*
 * XREFs of ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A8C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009EB00 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A856C (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0083FB8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8ADC (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryAllocations(VIDMM_GLOBAL **this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char v5; // bp
  VIDMM_GLOBAL *v7; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v8; // rsi
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = a3;
  v5 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned __int8)a2;
  if ( v5 )
    VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v4, 0, 0LL, 0LL, 0, 0);
  v7 = this[473];
  while ( v7 != (VIDMM_GLOBAL *)(this + 473) )
  {
    v8 = (VIDMM_GLOBAL *)((char *)v7 - 208);
    v7 = *(VIDMM_GLOBAL **)v7;
    if ( (*((_DWORD *)v8 + 17) & 0x3F) == v4 )
    {
      if ( VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, v8, 0) )
      {
        if ( !v5 )
          break;
        VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, v8);
      }
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v8;
      VIDMM_GLOBAL::EvictTemporaryAllocation(v10, v8);
    }
  }
  this[888] = this[579];
}
