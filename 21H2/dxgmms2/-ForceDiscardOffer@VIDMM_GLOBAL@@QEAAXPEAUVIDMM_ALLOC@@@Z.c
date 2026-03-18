/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D70C4
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D7014 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00932B0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00D6F24 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  struct _VIDSCH_SYNC_OBJECT **v8; // rsi
  _QWORD v9[10]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+A8h] [rbp+28h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v11; // [rsp+B0h] [rbp+30h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v6 = *(_QWORD *)a2;
  v10 = 0LL;
  v7 = *(_QWORD **)v6;
  v8 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL)
                                     + 176LL * (*(_DWORD *)(*(_QWORD *)v6 + 68LL) & 0x3F));
  if ( *(int *)(*((_QWORD *)a2 + 12) + 8LL) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(this, (struct _VIDMM_GLOBAL_ALLOC *)v7, 0LL, 0);
  if ( v7[15] )
  {
    memset(v9, 0, sizeof(v9));
    v9[1] = *((_QWORD *)a2 + 1);
    LODWORD(v9[0]) = 211;
    v9[4] = v7;
    if ( (unsigned int)VIDMM_GLOBAL::QueueDeferredCommand(
                         this,
                         (struct VIDMM_PAGING_QUEUE *)v8,
                         (struct _VIDMM_DEFERRED_COMMAND *)v9,
                         0,
                         &v10) == 259 )
    {
      v11 = v8[11];
      VIDMM_GLOBAL::WaitForFences(this, &v11, &v10, 1u, 0LL);
    }
  }
  else
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v7 + 37));
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v7 + 37);
  }
}
