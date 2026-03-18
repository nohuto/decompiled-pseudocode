/*
 * XREFs of ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00A0A9C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C009FC3C (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0810 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6C0C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0B78 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A0E24 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        _BOOL8 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  bool v6; // bp
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax

  v6 = a3;
  v9 = *(_QWORD *)*a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, v6);
  if ( !*(_DWORD *)(v9 + 144)
    && !_bittest(*(const signed __int32 **)(v9 + 528), 0x1Eu)
    && !*(_DWORD *)(*(_QWORD *)(v9 + 528) + 12LL)
    && (**(_DWORD **)(v9 + 528) & 0x20000) == 0
    && !_bittest((const signed __int32 *)(v9 + 68), 0x1Eu) )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v9 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v9, a4, a5);
    if ( bTracingEnabled )
    {
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v10, &EventMarkAllocation, v11, a2);
    }
    v12 = *(_QWORD *)(v9 + 16);
    ++*((_DWORD *)this + 1816);
    *((_QWORD *)this + 909) += v12;
  }
}
