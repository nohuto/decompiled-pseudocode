/*
 * XREFs of ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C0086B7C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C008369C (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C00867C4 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00A53DC (GetBucketIdForAllocationSizePow2.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v15; // r8
  bool v16; // al
  __int64 v17; // rcx
  __int64 BucketIdForAllocationSizePow2; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-28h]

  v6 = a3;
  v9 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 112LL) & 8) != 0 && (*(_DWORD *)(v9 + 68) & 0x440) == 0x40 )
  {
    v6 = 2;
LABEL_10:
    v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet((VIDMM_GLOBAL *)a1, v9, v6, 0, a5, a6);
    goto LABEL_7;
  }
  if ( a6 != -1 )
    goto LABEL_10;
  v10 = *(_DWORD *)(v9 + 64);
  if ( !v10 )
    goto LABEL_10;
  if ( !(_BYTE)a4 || (v10 & 0x1F) == 0 && (v10 & 0x7C0) == 0 )
  {
    v12 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **(_QWORD **)a2, a3, a4, 4u);
    if ( v12 >= 0 )
      goto LABEL_8;
    goto LABEL_10;
  }
  v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **(_QWORD **)a2, a3, a4, 1u);
LABEL_7:
  v12 = v11;
LABEL_8:
  v13 = *(unsigned int *)(v9 + 68);
  if ( (v13 & 0x4000000) != 0 && v12 >= 0 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
    v16 = (*(_DWORD *)(*(_QWORD *)(v9 + 200) + 80LL) & 0x1001) != 0 && (v13 & 0x400) == 0;
    v17 = *(_QWORD *)(v9 + 16);
    if ( v16 )
    {
      BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(v17, v13, v15);
      *(_QWORD *)(v20 + 8 * BucketIdForAllocationSizePow2 + 2400) += v21;
      ++*(_DWORD *)(v20 + 4 * BucketIdForAllocationSizePow2 + 2664);
      ++*(_DWORD *)(v20 + 1780);
      v22 = bTracingEnabled == 0;
      *(_BYTE *)(v20 + 2752) = 1;
      if ( !v22 && (byte_1C006E941 & 1) != 0 )
      {
        LODWORD(v25) = -1073741823;
        McTemplateK0pq_EtwWriteTransfer(v19, &EventCompleteAllocationMigration, v20, v9, v25);
      }
      v23 = *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7728);
      *(_QWORD *)(a1 + 7736) += v23;
    }
    else
    {
      BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(v17, v13, v15);
      *(_QWORD *)(v20 + 8 * BucketIdForAllocationSizePow2 + 2224) += v21;
      ++*(_DWORD *)(v20 + 4 * BucketIdForAllocationSizePow2 + 2576);
      ++*(_DWORD *)(v20 + 1776);
      v22 = bTracingEnabled == 0;
      *(_BYTE *)(v20 + 2752) = 1;
      if ( !v22 && (byte_1C006E941 & 1) != 0 )
      {
        LODWORD(v25) = 0;
        McTemplateK0pq_EtwWriteTransfer(v19, &EventCompleteAllocationMigration, v20, v9, v25);
      }
      *(_QWORD *)(a1 + 7720) += *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7712);
      ++*(_DWORD *)(a1 + 44628);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, BucketIdForAllocationSizePow2, v20, v21);
      v24[3] = a2;
      v24[4] = *(_QWORD *)(v9 + 120);
      v24[5] = *(_QWORD *)(v9 + 200);
    }
    *(_DWORD *)(v9 + 68) &= 0xF9FFFFFF;
  }
  return (unsigned int)v12;
}
