/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083B84
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083938 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C00020F8 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00021CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E570 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00839CC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0086448 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E4060 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  VIDMM_SEGMENT *v7; // r13
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  LONGLONG QuadPart; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r15
  unsigned int v21; // eax
  VIDMM_PAGING_PROCESS *v22; // r10
  LARGE_INTEGER *v23; // r13
  unsigned int v24; // edx
  struct _VIDMM_GLOBAL_ALLOC *v25; // r8
  D3DGPU_VIRTUAL_ADDRESS v26; // rax
  bool v27; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  LARGE_INTEGER *v31; // rcx
  __int64 v32; // rdx
  LARGE_INTEGER **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  unsigned __int8 *v44; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v45[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+68h] [rbp-98h]
  struct VIDMM_SEGMENT *v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  unsigned __int64 v53; // [rsp+88h] [rbp-78h]
  _DXGKARG_BUILDPAGINGBUFFER v54; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v55[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v56; // [rsp+1D8h] [rbp+D8h]

  v7 = a6;
  v10 = a2;
  v50 = a6;
  v49 = a4;
  v11 = a4;
  memset(&v54, 0, sizeof(v54));
  QuadPart = a7->QuadPart;
  v47 = a7->QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = a3;
    v38 = WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
    *(_QWORD *)(v38 + 24) = v11;
    *(_QWORD *)(v38 + 32) = 0LL;
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    v43[4] = SHIDWORD(v47);
    v43[5] = (unsigned int)QuadPart;
    v43[3] = a6;
  }
  v17 = *((unsigned int *)this + 10244);
  v48 = *((_DWORD *)this + 10244);
  v47 = 0LL;
  v45[0] = 0;
  if ( v11 )
  {
    v18 = (unsigned int)v17;
    v53 = v17;
    v52 = 1584 * v10;
    while ( 1 )
    {
      v19 = (unsigned int)v17;
      if ( v11 <= v18 )
        v19 = (unsigned int)v11;
      v20 = v47;
      while ( 1 )
      {
        v21 = VIDMM_SEGMENT::DriverId(v7);
        v23 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                 v22,
                                 v10,
                                 v19,
                                 a3,
                                 v20,
                                 v21,
                                 QuadPart,
                                 0LL,
                                 v45,
                                 0LL);
        if ( v23 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v10, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v10);
        v7 = v50;
      }
      if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v10) & 0x400) == 0 )
        CVirtualAddressAllocator::FlushGpuVaTlb(
          *((CVirtualAddressAllocator **)this + v10 + 5052),
          v24,
          v23[12].QuadPart,
          v23[13].QuadPart);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v10, v25, &v54);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v10, a3, &v54);
        v54.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
          v26 = *(_QWORD *)(*((_QWORD *)a3 + 66) + 40LL);
        else
          v26 = 0LL;
        v54.Transfer.Source.SegmentId = 0;
        v27 = *((_QWORD *)this + 5123) == 0LL;
        v54.UpdateContextAllocation.ContextAllocation = v26;
        v54.Transfer.TransferSize = v19;
        v54.Transfer.Source.SegmentAddress = v23[12];
        if ( !v27 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(this, &v54, v10, a3);
        v46 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v54);
        if ( bTracingEnabled )
        {
          v51 = *((_QWORD *)this + v10 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C006E941 & 8) != 0 )
          {
            LODWORD(v44) = 0;
            McTemplateK0pppxxq_EtwWriteTransfer(v51, v29, v30, CurrentProcessId, a3, v51, 0LL, v19, v44);
          }
        }
        VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7184), v19, 0);
        v55[1] = 0;
        v56 = QuadPart;
        v55[0] = *((_DWORD *)v50 + 4) + 1;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v10, a3, &v54, v46, 0, v55);
      }
      while ( v46 < 0 );
      v31 = v23 + 3;
      v32 = *((_QWORD *)this + 5028) + v52 + 464;
      v33 = *(LARGE_INTEGER ***)(v32 + 8);
      if ( *v33 != (LARGE_INTEGER *)v32 )
        __fastfail(3u);
      v47 += v19;
      v11 = v49 - v19;
      v31->QuadPart = v32;
      QuadPart += v19;
      v23[4].QuadPart = (LONGLONG)v33;
      *v33 = v31;
      *(_QWORD *)(v32 + 8) = v31;
      v23[5] = *(LARGE_INTEGER *)((char *)a3 + 160);
      v49 = v11;
      if ( !v11 )
        break;
      LODWORD(v17) = v48;
      v7 = v50;
      v18 = v53;
    }
  }
}
