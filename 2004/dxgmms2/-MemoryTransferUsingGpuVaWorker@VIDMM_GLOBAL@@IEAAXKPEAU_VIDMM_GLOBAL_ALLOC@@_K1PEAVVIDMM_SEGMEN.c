/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0088F18
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088DC0 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00B2918 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0001D1C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001D40 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E00 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0001EDC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C0024420 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00753B4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075920 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075AFC (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0075BA4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00894B0 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008970C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00BB3F0 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C03B4 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned __int64 a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  unsigned __int64 v14; // r12
  unsigned __int64 v17; // r8
  VIDMM_SEGMENT *v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  bool v21; // r11
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r11
  VIDMM_PAGING_PROCESS *v25; // r10
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  struct _MDL *v31; // rbx
  unsigned __int64 v32; // r12
  struct _MDL *v33; // rax
  unsigned __int64 v34; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v35; // r15
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // rax
  unsigned int v37; // edx
  unsigned __int64 v38; // r12
  struct VIDMM_MAPPED_VA_RANGE *v39; // rbx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r8
  struct _VIDMM_GLOBAL_ALLOC *v42; // r8
  D3DGPU_VIRTUAL_ADDRESS v43; // rax
  D3DGPU_VIRTUAL_ADDRESS v44; // rax
  LARGE_INTEGER v45; // rax
  ADAPTER_RENDER *v46; // r15
  unsigned int v47; // edx
  CVirtualAddressAllocator *v48; // rbx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // ebx
  int v52; // ebx
  __int64 v53; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  struct VIDMM_MAPPED_VA_RANGE *v57; // r9
  __int64 *v58; // rdx
  __int64 v59; // rcx
  __int64 **v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 **v63; // rax
  bool v64; // sf
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  struct _MDL *v71; // rcx
  _QWORD *v72; // rax
  unsigned __int8 *v73; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v74; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v75; // [rsp+51h] [rbp-AFh] BYREF
  bool v76; // [rsp+52h] [rbp-AEh]
  __int64 v77; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v79; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v80; // [rsp+70h] [rbp-90h]
  unsigned int v81; // [rsp+78h] [rbp-88h]
  unsigned int v82; // [rsp+7Ch] [rbp-84h]
  struct VIDMM_MAPPED_VA_RANGE *v83; // [rsp+80h] [rbp-80h]
  unsigned __int64 v84; // [rsp+88h] [rbp-78h]
  struct _MDL *v85; // [rsp+90h] [rbp-70h]
  struct _MDL *v86; // [rsp+98h] [rbp-68h]
  struct VIDMM_SEGMENT *v87; // [rsp+A0h] [rbp-60h]
  __int64 v88; // [rsp+A8h] [rbp-58h]
  struct VIDMM_SEGMENT *v89; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v92; // [rsp+C8h] [rbp-38h]
  SIZE_T v93; // [rsp+D0h] [rbp-30h]
  struct _DXGKARG_BUILDPAGINGBUFFER v94; // [rsp+E0h] [rbp-20h] BYREF
  int v95; // [rsp+220h] [rbp+120h] BYREF
  int v96; // [rsp+224h] [rbp+124h]
  __int64 v97; // [rsp+228h] [rbp+128h]
  unsigned __int64 v98; // [rsp+230h] [rbp+130h]

  v14 = a4;
  v17 = a7;
  v86 = a8;
  v84 = a4;
  v18 = a9;
  v85 = a11;
  v19 = a2;
  v20 = *((unsigned int *)this + 10244);
  v92 = a14;
  v87 = a6;
  v89 = a9;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    v65 = a7 - a10;
    if ( a10 >= a7 )
      v65 = a10 - a7;
    v21 = a10 < a7;
    v66 = v20;
    if ( v65 <= v20 )
      v66 = v65;
    v91 = v66;
  }
  else
  {
    v91 = v20;
    v21 = 1;
  }
  v76 = v21;
  v22 = a12;
  if ( !v21 )
    v22 = a12 + v14;
  v23 = a5;
  v78 = v22;
  if ( !v21 )
    v23 = a5 + v14;
  v79 = v23 + a10;
  v24 = v23 + a7;
  v77 = v23 + a7;
  if ( a6 )
    v81 = VIDMM_SEGMENT::DriverId(a6);
  else
    v81 = 0;
  if ( v18 )
    v82 = VIDMM_SEGMENT::DriverId(v18);
  else
    v82 = 0;
  v75 = 0;
  v74 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = a3;
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v67);
    v68[3] = v14;
    v68[4] = a5;
    v68[5] = a12;
    v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v69);
    v70[3] = v87;
    v71 = v86;
    v70[5] = v86;
    v70[4] = a7;
    v72 = (_QWORD *)WdLogNewEntry5_WdTrace(v71);
    v72[3] = v89;
    v72[5] = v85;
    v72[4] = a10;
    v17 = a7;
    v24 = v77;
    v22 = v78;
  }
  if ( v14 )
  {
    while ( 1 )
    {
      v25 = (VIDMM_GLOBAL *)((char *)this + 40384);
      v26 = (unsigned int)v91;
      v27 = v79;
      v28 = v24;
      if ( v14 <= v91 )
        v26 = (unsigned int)v14;
      v29 = v22;
      if ( !v76 )
      {
        v28 = v24 - v26;
        v27 = v79 - v26;
        v29 = v22 - v26;
      }
      v30 = v29;
      v80 = (unsigned __int64 *)v29;
      v31 = v86;
      v32 = v28 - v17;
      v90 = v27;
      v88 = v28;
      v93 = v28 - v17;
      if ( !v86 )
        v30 = v28;
      while ( 1 )
      {
        v83 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                v25,
                v19,
                v26,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v32,
                v81,
                v30,
                v31,
                &v75,
                v92);
        if ( v83 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v19, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v19);
        v25 = (VIDMM_GLOBAL *)((char *)this + 40384);
      }
      v33 = v85;
      v34 = (unsigned __int64)v80;
      if ( !v85 )
        v34 = v90;
      while ( 1 )
      {
        v35 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40384),
                v19,
                v26,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v32,
                v82,
                v34,
                v33,
                &v74,
                v92);
        v80 = (unsigned __int64 *)v35;
        if ( v35 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v19, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v19);
        v33 = v85;
      }
      GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v19);
      v38 = v84;
      v39 = v83;
      if ( (*(_DWORD *)GpuMmuCaps & 0x400) == 0 )
      {
        v40 = *((_QWORD *)v83 + 13);
        v41 = *((_QWORD *)v83 + 12);
        if ( v40 <= *((_QWORD *)v35 + 13) )
          v40 = *((_QWORD *)v35 + 13);
        if ( v41 >= *((_QWORD *)v35 + 12) )
          v41 = *((_QWORD *)v35 + 12);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v19 + 5052), v37, v41, v40);
      }
      memset(&v94, 0, sizeof(v94));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v19, v42, &v94);
      v94.Transfer.Destination.SegmentAddress.LowPart = v86 ? 1 : v85 == 0LL ? 2 : 0;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          this,
          (unsigned int)v19,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v94);
        if ( a3 )
        {
          v43 = a3[5];
          if ( v43 )
            v44 = *(_QWORD *)(v43 + 16);
          else
            v44 = a3[6];
        }
        else
        {
          v44 = 0LL;
        }
        v94.UpdateContextAllocation.ContextAllocation = v44;
        v94.Fill.FillSize = v93;
        v94.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v94.Transfer.TransferSize = v26;
        v94.MapApertureSegment.OffsetInPages = *((_QWORD *)v39 + 12);
        v45 = *(LARGE_INTEGER *)((char *)v35 + 96);
        v46 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v94.Transfer.Source.SegmentAddress = v45;
        if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v46, v19) + 5) & 1) != 0 )
        {
          v48 = (CVirtualAddressAllocator *)*((_QWORD *)this + v19 + 5052);
          v94.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v48,
                                                                        v47,
                                                                        *((_QWORD *)v83 + 12),
                                                                        v75);
          v94.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v48,
                                                                     v19,
                                                                     v80[12],
                                                                     v74);
          v94.Transfer.Destination.SegmentAddress.HighPart = v94.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v75 & 1 | (2 * (v74 & 1));
        }
        if ( *((_QWORD *)this + 5123) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v94, (struct _VIDMM_GLOBAL_ALLOC *)a3);
          v46 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        }
        v49 = ADAPTER_RENDER::DdiBuildPagingBuffer(v46, &v94);
        v50 = *((_QWORD *)this + 878);
        v51 = v49;
        LODWORD(v84) = v49;
        if ( v50 && (!v89 || (*((_DWORD *)v89 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v50 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
            v26);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 986, v26);
        if ( bTracingEnabled )
        {
          if ( !v87 || (v52 = 2, (*((_DWORD *)v87 + 20) & 0x1001) != 0) )
            v52 = 1;
          v53 = *((_QWORD *)this + v19 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v73) = v52;
            McTemplateK0pppxxq_EtwWriteTransfer(v88, v55, v56, CurrentProcessId, a3, v53, v88, v26, v73);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7176), v26, v52);
          v51 = v84;
        }
        if ( v87 )
          v95 = *((_DWORD *)v87 + 4) + 1;
        else
          v95 = 0;
        v97 = v88;
        if ( v89 )
          v96 = *((_DWORD *)v89 + 4) + 1;
        else
          v96 = 0;
        v98 = v90;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v19,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v94,
          v51,
          0,
          &v95);
        if ( v51 < 0 )
        {
          v35 = (struct VIDMM_MAPPED_VA_RANGE *)v80;
        }
        else
        {
          v57 = v83;
          v58 = (__int64 *)((char *)v83 + 24);
          v59 = 1584 * v19 + *((_QWORD *)this + 5027) + 464LL;
          v60 = *(__int64 ***)(v59 + 8);
          if ( *v60 != (__int64 *)v59 )
            goto LABEL_82;
          v35 = (struct VIDMM_MAPPED_VA_RANGE *)v80;
          *v58 = v59;
          v58[1] = (__int64)v60;
          *v60 = v58;
          *(_QWORD *)(v59 + 8) = v58;
          v61 = (__int64 *)((char *)v35 + 24);
          v62 = 1584 * v19 + *((_QWORD *)this + 5027) + 464LL;
          v63 = *(__int64 ***)(v62 + 8);
          if ( *v63 != (__int64 *)v62 )
LABEL_82:
            __fastfail(3u);
          *v61 = v62;
          *((_QWORD *)v35 + 4) = v63;
          *v63 = v61;
          *(_QWORD *)(v62 + 8) = v61;
          *((_QWORD *)v57 + 5) = a3[21];
          *((_QWORD *)v35 + 5) = a3[21];
        }
        v64 = v51 < 0;
        v39 = v83;
      }
      while ( v64 );
      v14 = v38 - v26;
      v84 = v14;
      if ( v76 )
      {
        v79 += v26;
        v24 = v26 + v77;
        v22 = v26 + v78;
      }
      else
      {
        v79 -= v26;
        v24 = v77 - v26;
        v22 = v78 - v26;
      }
      v78 = v22;
      v77 = v24;
      if ( !v14 )
        break;
      v17 = a7;
    }
  }
}
