/*
 * XREFs of ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4000
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006328C (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0070830 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecommitTrimmedList(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 **v5; // rsi
  __int64 v6; // rcx
  int v7; // eax

  v3 = (_QWORD *)((char *)this + 3720);
  v4 = (_QWORD *)*((_QWORD *)this + 465);
  while ( v4 != v3 )
  {
    v5 = (__int64 **)(v4 - 7);
    v4 = (_QWORD *)*v4;
    v6 = **v5;
    v7 = *(_DWORD *)(v6 + 120);
    if ( v7 )
    {
      if ( v7 == 1 )
        VIDMM_SEGMENT::ReclaimResource(*(VIDMM_LINEAR_POOL ***)(v6 + 128), (struct _VIDMM_GLOBAL_ALLOC *)**v5, a3);
      VIDMM_DEVICE::AddCommitment((VIDMM_DEVICE *)v5[1], v5);
    }
  }
  v3[1] = v3;
  *v3 = v3;
}
