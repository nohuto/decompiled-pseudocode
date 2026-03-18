/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083E3C
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00021CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E570 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0083FB8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0086448 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB07C (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(ADAPTER_RENDER **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 IsPagingOperationPending; // al
  ADAPTER_RENDER *v12; // rcx
  int v13; // r14d
  ADAPTER_RENDER *v14; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  ADAPTER_RENDER *v19; // rcx
  __int64 v20; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v21; // [rsp+58h] [rbp-B0h] BYREF

  memset(&v21, 0, sizeof(v21));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = a2;
  v8 = *((_DWORD *)a2 + 17) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, *((_DWORD *)a2 + 17) & 0x3F, v6, &v21);
  v21.Transfer.TransferOffset = 0;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a2, &v21);
    v9 = *((_QWORD *)a2 + 66);
    v21.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    v21.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v9 + 40);
    v21.DiscardContent.SegmentId = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 15));
    v21.Transfer.TransferSize = *((_QWORD *)a2 + 16) + *(_QWORD *)(v10 + 24);
    IsPagingOperationPending = VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, a2, 0);
    v12 = this[2];
    v21.Transfer.TransferOffset = (IsPagingOperationPending == 0) | v21.Transfer.TransferOffset & 0xFFFFFFFE;
    v13 = ADAPTER_RENDER::DdiBuildPagingBuffer(v12, &v21);
    if ( v13 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle((VIDMM_GLOBAL *)this, a2);
      v19 = this[2];
      v21.Transfer.TransferOffset |= 1u;
      v13 = ADAPTER_RENDER::DdiBuildPagingBuffer(v19, &v21);
    }
    if ( bTracingEnabled )
    {
      v14 = this[v8 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (byte_1C006E941 & 8) != 0 )
      {
        LODWORD(v20) = 5;
        McTemplateK0pppxxq_EtwWriteTransfer(v17, v16, v18, CurrentProcessId, a2, v14, 0LL, 0LL, v20);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 898), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a2, &v21, v13, 0, 0LL);
  }
  while ( v13 < 0 );
}
