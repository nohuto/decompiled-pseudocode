/*
 * XREFs of ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A298
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0061C1C (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0062280 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0095FB0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C4030 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00C72F8 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C8AE0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E00 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00753B4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075920 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075AFC (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BF858 (-RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rax
  D3DGPU_VIRTUAL_ADDRESS v10; // rax
  int v11; // ebx
  __int64 v12; // rax
  _DXGKARG_BUILDPAGINGBUFFER v13; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a3;
  if ( ((_BYTE)this[5117] & 0x10) == 0 && (**((_DWORD **)a2 + 62) & 0x8000) != 0 )
  {
    memset(&v13, 0, sizeof(v13));
    if ( g_IsInternalReleaseOrDbg )
    {
      v12 = WdLogNewEntry5_WdTrace(v6);
      *(_QWORD *)(v12 + 24) = a2;
      *(_QWORD *)(v12 + 32) = v4;
    }
    v8 = *((_DWORD *)a2 + 19) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v7, &v13);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a2, &v13);
      v9 = *((_QWORD *)a2 + 5);
      v13.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      if ( v9 )
        v10 = *(_QWORD *)(v9 + 16);
      else
        v10 = *((_QWORD *)a2 + 6);
      v13.UpdateContextAllocation.ContextAllocation = v10;
      if ( (_BYTE)v4 )
      {
        v13.Transfer.Source.SegmentId |= 1u;
        v13.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 16));
        v13.Transfer.TransferSize = *((_QWORD *)a2 + 17);
      }
      else
      {
        v13.Transfer.Source.SegmentId &= ~1u;
        v13.Transfer.TransferOffset = 0;
        v13.Transfer.TransferSize = 0LL;
      }
      v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v13);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a2, &v13, v11, 0, 0LL);
    }
    while ( v11 < 0 );
    if ( this[5123] )
      VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency((VIDMM_GLOBAL *)this, &v13, a2);
  }
}
