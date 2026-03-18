/*
 * XREFs of ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00865F0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00ED69C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(
        VIDMM_GLOBAL *this,
        struct VIDMM_PARTITION_ADAPTER_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( *(_QWORD *)(*(_QWORD *)a2 + 64LL) <= *((_QWORD *)a2 + 2) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(*(_QWORD *)a2, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  }
  return 0;
}
