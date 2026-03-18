/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007F374
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C006D560 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0012614 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001273C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C00241D4 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071F34 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C007E8FC (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007EE60 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007F03C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007F504 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B6E44 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(ADAPTER_RENDER **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rax
  D3DGPU_VIRTUAL_ADDRESS v8; // rax
  VIDMM_SEGMENT *v9; // rcx
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
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = a2;
  v6 = *((_DWORD *)a2 + 19) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, *((_DWORD *)a2 + 19) & 0x3F, v5, &v21);
  v21.Transfer.TransferOffset = 0;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v6, a2, &v21);
    v7 = *((_QWORD *)a2 + 5);
    v21.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 16);
    else
      v8 = *((_QWORD *)a2 + 6);
    v9 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 16);
    v21.UpdateContextAllocation.ContextAllocation = v8;
    v21.DiscardContent.SegmentId = VIDMM_SEGMENT::DriverId(v9);
    v21.Transfer.TransferSize = *((_QWORD *)a2 + 17) + *(_QWORD *)(v10 + 24);
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
      v14 = this[v6 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v20) = 5;
        McTemplateK0pppxxq_EtwWriteTransfer(v17, v16, v18, CurrentProcessId, a2, v14, 0LL, 0LL, v20);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 897), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v6, a2, &v21, v13, 0, 0LL);
  }
  while ( v13 < 0 );
}
