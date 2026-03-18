/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0F68
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF20 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0EB8 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006322C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00B0DD0 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // rbx
  struct _VIDSCH_SYNC_OBJECT **v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  _QWORD v11[10]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+B8h] [rbp+38h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v13; // [rsp+C0h] [rbp+40h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = *(__int64 **)a2;
  v5 = 0LL;
  v6 = 0;
  v12 = 0LL;
  v7 = *v4;
  v8 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) + 176LL * (*(_DWORD *)(*v4 + 76) & 0x3F));
  if ( *(int *)(*((_QWORD *)a2 + 12) + 8LL) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(this, (DXGFASTMUTEX **)v7, 0LL, 0);
  if ( *(_QWORD *)(v7 + 128) )
  {
    memset(v11, 0, sizeof(v11));
    v11[1] = *((_QWORD *)a2 + 1);
    LODWORD(v11[0]) = 211;
    v11[4] = v7;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)v8,
           (struct _VIDMM_DEFERRED_COMMAND *)v11,
           0,
           &v12);
    v5 = v12;
    v6 = v9;
  }
  else
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 312));
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 312), v10);
  }
  if ( v6 == 259 )
  {
    v13 = v8[11];
    v12 = v5;
    VIDMM_GLOBAL::WaitForFences(this, &v13, &v12, 1u, 0LL);
  }
}
