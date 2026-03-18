/*
 * XREFs of ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D7014
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D70C4 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDecommitOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  struct VIDMM_PAGING_QUEUE *v8; // rdx
  _QWORD v9[10]; // [rsp+30h] [rbp-58h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  VIDMM_GLOBAL::ForceDiscardOffer(this, a2);
  v6 = **(_QWORD **)a2;
  memset(v9, 0, sizeof(v9));
  v7 = *(_DWORD *)(v6 + 68) & 0x3F;
  v9[1] = *((_QWORD *)a2 + 1);
  v8 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v9[1] + 88LL) + 176 * v7);
  LODWORD(v9[0]) = 215;
  v9[4] = v6;
  VIDMM_GLOBAL::QueueDeferredCommand(this, v8, (struct _VIDMM_DEFERRED_COMMAND *)v9, 1, 0LL);
}
