/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C00A5ACC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00A2598 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00021CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E570 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0086448 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C00A5CA8 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        ADAPTER_RENDER **this,
        __int64 **a2,
        char a3,
        bool *a4,
        __int64 ***a5)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // edi
  LARGE_INTEGER v17; // rax
  ADAPTER_RENDER *v18; // rcx
  int v19; // r12d
  ADAPTER_RENDER *v20; // rdi
  HANDLE CurrentProcessId; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  int v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v29; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 68) & 0x3F;
  memset(&v29, 0, sizeof(v29));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v9;
  if ( a3 && (v15 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, a2, 0LL, 0LL, a4, a5, 0, -1LL), v16 = v15, v15 < 0) )
  {
    WdLogSingleEntry2(4LL, a2, v15);
    return v16;
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v13, &v29);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v29);
      v29.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v29.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(v9 + 528) + 40LL);
      v29.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v9 + 120));
      v29.Transfer.TransferSize = *(_QWORD *)(v9 + 128) + *(_QWORD *)(*(_QWORD *)(v9 + 120) + 24LL);
      if ( (*(_DWORD *)(v9 + 72) & 0x80u) != 0 )
      {
        if ( (**(_DWORD **)(v9 + 528) & 8) != 0 )
          v29.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 384);
        else
          v29.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 16LL);
      }
      v17.QuadPart = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v18 = this[2];
      v29.Transfer.Source.SegmentAddress = v17;
      v19 = ADAPTER_RENDER::DdiBuildPagingBuffer(v18, &v29);
      if ( bTracingEnabled )
      {
        v20 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (byte_1C006E941 & 8) != 0 )
        {
          v28 = 0LL;
          v27 = (int)v20;
          McTemplateK0pppxxq_EtwWriteTransfer(v23, v22, v24, CurrentProcessId, v9);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 898), 0LL, 8);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v29,
        v19,
        v25 & v27,
        (void *)(v25 & v28));
    }
    while ( v19 < 0 );
    return 0LL;
  }
}
