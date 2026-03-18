/*
 * XREFs of ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0087B5C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqt_EtwWriteTransfer @ 0x1C002ECA4 (McTemplateK0pqt_EtwWriteTransfer.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6C0C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForPreparation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]

  v7 = **(_QWORD **)a2;
  if ( *(_WORD *)(*(_QWORD *)(v7 + 528) + 4LL) )
    *(_DWORD *)(v7 + 68) &= ~0x2000000u;
  v8 = *(_DWORD *)(v7 + 112);
  if ( !v8 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, 0, 1);
    *((_QWORD *)this + 923) += *(_QWORD *)(v7 + 16);
    ++*((_DWORD *)this + 1844);
    v9 = *(_DWORD *)(v7 + 68);
    if ( (v9 & 0x2000000) != 0 )
      *(_DWORD *)(v7 + 68) = v9 | 0x4000000;
    return 3221225473LL;
  }
  if ( v8 == 1 )
  {
    if ( (*(_DWORD *)(v7 + 68) & 0x2000000) != 0 )
      goto LABEL_22;
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, 1, 1);
    *((_QWORD *)this + 915) += *(_QWORD *)(v7 + 16);
    ++*((_DWORD *)this + 1828);
    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v7 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v7);
    *a3 = 1;
  }
  if ( (*(_DWORD *)(v7 + 68) & 0x2000000) != 0 )
  {
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
    {
      LODWORD(v12) = 1;
      LODWORD(v11) = 4;
      McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, v11, v12);
    }
    *((_QWORD *)this + 917) += *(_QWORD *)(v7 + 16);
    ++*((_DWORD *)this + 1832);
    *(_DWORD *)(v7 + 68) |= 0x4000000u;
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventMigrateAllocation, (__int64)a3, v7);
    VIDMM_GLOBAL::EvictAllocation(this, a2);
    return 3221225473LL;
  }
  return 0LL;
}
