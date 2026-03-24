/*
 * XREFs of ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C008791C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00249D0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C00879DC (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C0087B90 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(
        __int64 a1,
        __int64 **a2,
        unsigned int a3,
        char a4,
        int a5,
        __int64 a6)
{
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // esi
  int v15; // edx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+20h] [rbp-28h]

  v9 = **a2;
  if ( a6 != -1 || (v10 = *(_DWORD *)(v9 + 72)) == 0 )
  {
LABEL_9:
    v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(a1, v9, a3, 0LL, a5, a6);
    goto LABEL_6;
  }
  if ( !a4 || (v10 & 0x1F) == 0 && (v10 & 0x7C0) == 0 )
  {
    v14 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2);
    if ( v14 >= 0 )
      goto LABEL_7;
    goto LABEL_9;
  }
  v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2);
LABEL_6:
  v14 = v11;
LABEL_7:
  v15 = *(_DWORD *)(v9 + 76);
  if ( (v15 & 0x2000000) != 0 && v14 >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 216) + 80LL) & 0x1001) == 0 || (v15 & 0x400) != 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v19) = 0;
        McTemplateK0pq_EtwWriteTransfer(v12, &EventCompleteAllocationMigration, v13, v9, v19);
      }
      *(_QWORD *)(a1 + 7712) += *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7704);
      ++*(_DWORD *)(a1 + 44620);
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v19) = -1073741823;
        McTemplateK0pq_EtwWriteTransfer(v12, &EventCompleteAllocationMigration, v13, v9, v19);
      }
      v17 = *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7720);
      *(_QWORD *)(a1 + 7728) += v17;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v18[3] = a2;
      v18[4] = *(_QWORD *)(v9 + 128);
      v18[5] = *(_QWORD *)(v9 + 216);
    }
    *(_DWORD *)(v9 + 76) &= 0xFCFFFFFF;
  }
  return (unsigned int)v14;
}
