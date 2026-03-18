/*
 * XREFs of ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AEE54
 * Callers:
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B69FC (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0012614 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001273C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C00241D4 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C007E8FC (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007EE60 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0085668 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::BuildInitContextAllocation(ADAPTER_RENDER **this, __int64 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  D3DGPU_VIRTUAL_ADDRESS v7; // rax
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v9; // rcx
  int v10; // r14d
  ADAPTER_RENDER *v11; // rbp
  HANDLE CurrentProcessId; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // [rsp+28h] [rbp-180h]
  __int64 v18; // [rsp+30h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+50h] [rbp-158h] BYREF

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 76) & 0x3F;
  memset(&v19, 0, sizeof(v19));
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      (unsigned int)v5,
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      &v19);
    v19.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
    v6 = *(_QWORD *)(v4 + 40);
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 16);
    else
      v7 = *(_QWORD *)(v4 + 48);
    v19.UpdateContextAllocation.ContextAllocation = v7;
    v19.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v4 + 128));
    v19.Transfer.TransferSize = *(_QWORD *)(v4 + 136) + *(_QWORD *)(*(_QWORD *)(v4 + 128) + 24LL);
    if ( (*(_DWORD *)(v4 + 80) & 0x80u) != 0 )
    {
      if ( (**(_DWORD **)(v4 + 496) & 8) != 0 )
        v19.MapApertureSegment.OffsetInPages = *(_QWORD *)(v4 + 360);
      else
        v19.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 16LL);
    }
    GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v5);
    v9 = this[2];
    v19.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
    v10 = ADAPTER_RENDER::DdiBuildPagingBuffer(v9, &v19);
    if ( bTracingEnabled )
    {
      v11 = this[v5 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        v18 = 0LL;
        v17 = (int)v11;
        McTemplateK0pppxxq_EtwWriteTransfer(v14, v13, v15, CurrentProcessId, v4);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 897), 0LL, 8);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      (unsigned int)v5,
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      &v19,
      v10,
      v16 & v17,
      (_DWORD *)(v16 & v18));
  }
  while ( v10 < 0 );
}
