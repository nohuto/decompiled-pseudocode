/*
 * XREFs of ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00783A8
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0077E50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023D70 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqt_EtwWriteTransfer @ 0x1C0024904 (McTemplateK0pqt_EtwWriteTransfer.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006DE90 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0738 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForPreparation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+28h] [rbp-10h]

  v6 = **(_QWORD **)a2;
  if ( *(_WORD *)(*(_QWORD *)(v6 + 496) + 4LL) )
    *(_DWORD *)(v6 + 76) &= ~0x1000000u;
  v7 = *(_DWORD *)(v6 + 120);
  if ( !v7 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, 0, 1);
    *((_QWORD *)this + 922) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)this + 1842);
    v8 = *(_DWORD *)(v6 + 76);
    if ( (v8 & 0x1000000) != 0 )
      *(_DWORD *)(v6 + 76) = v8 | 0x2000000;
    return 3221225473LL;
  }
  if ( v7 == 1 )
  {
    if ( (*(_DWORD *)(v6 + 76) & 0x1000000) != 0 )
    {
LABEL_22:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v11) = 1;
        LODWORD(v10) = 4;
        McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, v10, v11);
      }
      *((_QWORD *)this + 916) += *(_QWORD *)(v6 + 16);
      ++*((_DWORD *)this + 1830);
      *(_DWORD *)(v6 + 76) |= 0x2000000u;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p_EtwWriteTransfer((__int64)this, &EventMigrateAllocation, (__int64)a3, v6);
      VIDMM_GLOBAL::EvictAllocation(this, a2);
      return 3221225473LL;
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, 1, 1);
    *((_QWORD *)this + 914) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)this + 1826);
    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_LINEAR_POOL ***)(v6 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v6);
    *a3 = 1;
  }
  if ( (*(_DWORD *)(v6 + 76) & 0x1000000) != 0 )
    goto LABEL_22;
  return 0LL;
}
