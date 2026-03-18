/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083938
 * Callers:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00838F4 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00021CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E570 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083B84 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0086448 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  D3DGPU_VIRTUAL_ADDRESS v25; // rax
  UINT v26; // eax
  ADAPTER_RENDER *v27; // rcx
  ADAPTER_RENDER *v28; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // [rsp+20h] [rbp-198h]
  __int64 v34; // [rsp+40h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v35; // [rsp+50h] [rbp-168h] BYREF
  int v36; // [rsp+1C8h] [rbp+10h]

  v8 = a2;
  if ( (*((_BYTE *)this[5028] + 1584 * a2 + 436) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, a3, a4, v33, a6, a7);
  }
  else
  {
    memset(&v35, 0, sizeof(v35));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = a3;
      v19 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      *(_QWORD *)(v19 + 32) = 0LL;
      *(_QWORD *)(v19 + 24) = a4;
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      v24[3] = a6;
      v24[4] = a7->HighPart;
      v24[5] = a7->LowPart;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v13, &v35);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a3, &v35);
      v35.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
        v25 = *(_QWORD *)(*((_QWORD *)a3 + 66) + 40LL);
      else
        v25 = 0LL;
      v35.Fill.FillPattern = 0;
      v35.UpdateContextAllocation.ContextAllocation = v25;
      v35.Fill.FillSize = a4;
      v26 = VIDMM_SEGMENT::DriverId(a6);
      v27 = this[2];
      v35.Transfer.Source.SegmentId = v26;
      v35.Transfer.Source.SegmentAddress.QuadPart = a7->QuadPart + *((_QWORD *)a6 + 3);
      v36 = ADAPTER_RENDER::DdiBuildPagingBuffer(v27, &v35);
      if ( bTracingEnabled )
      {
        v28 = this[v8 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (byte_1C006E941 & 8) != 0 )
        {
          LODWORD(v34) = 0;
          McTemplateK0pppxxq_EtwWriteTransfer(v31, v30, v32, CurrentProcessId, a3, v28, 0LL, a4, v34);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 898), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a3, &v35, v36, 0, 0LL);
    }
    while ( v36 < 0 );
  }
}
