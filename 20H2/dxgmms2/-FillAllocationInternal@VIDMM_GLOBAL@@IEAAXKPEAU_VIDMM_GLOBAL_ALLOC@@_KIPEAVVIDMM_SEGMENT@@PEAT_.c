/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C007F298
 * Callers:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C007F330 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0012614 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001273C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C00241D4 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C007E8FC (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C007EB8C (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007EE60 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007F03C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // rsi
  __int64 v11; // r15
  __int64 v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // rax
  D3DGPU_VIRTUAL_ADDRESS v19; // rax
  UINT v20; // eax
  ADAPTER_RENDER *v21; // rcx
  int v22; // r12d
  ADAPTER_RENDER *v23; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // [rsp+20h] [rbp-198h]
  __int64 v29; // [rsp+40h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v30; // [rsp+50h] [rbp-168h] BYREF

  v8 = a2;
  v11 = a2;
  if ( (*((_BYTE *)this[5027] + 1584 * a2 + 436) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, a3, a4, v28, a6, a7);
  }
  else
  {
    memset(&v30, 0, sizeof(v30));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = a3;
      v15 = WdLogNewEntry5_WdTrace(v14);
      *(_QWORD *)(v15 + 24) = a4;
      *(_QWORD *)(v15 + 32) = 0LL;
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v17[3] = a6;
      v17[4] = a7->HighPart;
      v17[5] = a7->LowPart;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v13, &v30);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v30);
      v30.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
      {
        v19 = a3[5];
        if ( v19 )
          v18 = *(_QWORD *)(v19 + 16);
        else
          v18 = a3[6];
      }
      else
      {
        v18 = 0LL;
      }
      v30.UpdateContextAllocation.ContextAllocation = v18;
      v30.Fill.FillSize = a4;
      v30.Fill.FillPattern = 0;
      v20 = VIDMM_SEGMENT::DriverId(a6);
      v21 = this[2];
      v30.Transfer.Source.SegmentId = v20;
      v30.Transfer.Source.SegmentAddress.QuadPart = a7->QuadPart + *((_QWORD *)a6 + 3);
      v22 = ADAPTER_RENDER::DdiBuildPagingBuffer(v21, &v30);
      if ( bTracingEnabled )
      {
        v23 = this[v11 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          LODWORD(v29) = 0;
          McTemplateK0pppxxq_EtwWriteTransfer(v26, v25, v27, CurrentProcessId, a3, v23, 0LL, a4, v29);
        }
        v11 = v8;
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 897), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v30,
        v22,
        0,
        0LL);
    }
    while ( v22 < 0 );
  }
}
