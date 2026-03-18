/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00A7C8C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7B34 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00D82C0 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
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
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00A8238 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00DF858 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E41E8 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
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
  VIDMM_GLOBAL *v14; // rdi
  VIDMM_SEGMENT *v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  bool v20; // r13
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rdx
  struct _MDL *v26; // r10
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  VIDMM_PAGING_PROCESS *v29; // r11
  SIZE_T v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v33; // r15
  unsigned __int64 v34; // rax
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // rax
  unsigned int v36; // edx
  __int64 v37; // r10
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  struct _VIDMM_GLOBAL_ALLOC *v41; // r8
  struct _VIDMM_GLOBAL_ALLOC *v42; // rbx
  D3DGPU_VIRTUAL_ADDRESS v43; // rax
  ADAPTER_RENDER *v44; // rcx
  unsigned int v45; // edx
  ADAPTER_RENDER *v46; // r9
  __int64 v47; // r10
  CVirtualAddressAllocator *v48; // rbx
  unsigned int VirtualAddressOfPageTable; // eax
  int v50; // eax
  __int64 v51; // rcx
  int v52; // ebx
  int v53; // ebx
  HANDLE CurrentProcessId; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // r9d
  struct VIDMM_MAPPED_VA_RANGE *v58; // r11
  __int64 *v59; // rdx
  __int64 v60; // rcx
  __int64 **v61; // rax
  LARGE_INTEGER *v62; // r10
  __int64 *v63; // rcx
  __int64 v64; // rdx
  __int64 **v65; // rax
  __int64 v66; // rax
  struct _VIDMM_GLOBAL_ALLOC *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  unsigned __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  _QWORD *v76; // rax
  struct VIDMM_SEGMENT *v77; // rcx
  struct _MDL *v78; // r10
  __int64 v79; // rdx
  __int64 v80; // r9
  _QWORD *v81; // rax
  int v82; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v83; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v84; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v85[7]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int64 v86; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v88; // [rsp+68h] [rbp-98h]
  struct _MDL *v89; // [rsp+70h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v90; // [rsp+78h] [rbp-88h]
  unsigned __int64 v91; // [rsp+80h] [rbp-80h]
  unsigned int v92; // [rsp+88h] [rbp-78h]
  unsigned int v93; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v94; // [rsp+90h] [rbp-70h]
  struct _MDL *v95; // [rsp+98h] [rbp-68h]
  unsigned __int64 v96; // [rsp+A0h] [rbp-60h]
  struct VIDMM_SEGMENT *v97; // [rsp+A8h] [rbp-58h]
  struct VIDMM_SEGMENT *v98; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v99; // [rsp+B8h] [rbp-48h]
  struct VIDMM_MAPPED_VA_RANGE *v100; // [rsp+C0h] [rbp-40h]
  LARGE_INTEGER *v101; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v102; // [rsp+D0h] [rbp-30h]
  __int64 v103; // [rsp+D8h] [rbp-28h]
  struct _DXGKARG_BUILDPAGINGBUFFER v104; // [rsp+E0h] [rbp-20h] BYREF
  int v105; // [rsp+220h] [rbp+120h] BYREF
  int v106; // [rsp+224h] [rbp+124h]
  unsigned __int64 v107; // [rsp+228h] [rbp+128h]
  unsigned __int64 v108; // [rsp+230h] [rbp+130h]

  v14 = this;
  v15 = a9;
  v89 = a8;
  v95 = a11;
  v90 = a3;
  v16 = a7;
  v17 = a2;
  v18 = *((unsigned int *)this + 10244);
  v102 = a14;
  v86 = a4;
  v97 = a6;
  v98 = a9;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    this = (VIDMM_GLOBAL *)(a7 - a10);
    v19 = v18;
    if ( a10 >= a7 )
      this = (VIDMM_GLOBAL *)(a10 - a7);
    v20 = a10 < a7;
    if ( (unsigned __int64)this <= v18 )
      v19 = (unsigned __int64)this;
    if ( a10 >= a7 )
    {
      v21 = a12;
      v22 = a5;
      this = (VIDMM_GLOBAL *)(a4 + a12);
      v91 = a4 + a12;
      v23 = a4 + a5;
      goto LABEL_4;
    }
  }
  else
  {
    v19 = (unsigned int)v18;
    v20 = 1;
  }
  v21 = a12;
  v22 = a5;
  v91 = a12;
  v23 = a5;
LABEL_4:
  v24 = v23 + a10;
  v88 = v23 + a10;
  v25 = v23 + a7;
  v87 = v23 + a7;
  if ( a6 )
    v92 = VIDMM_SEGMENT::DriverId(a6);
  else
    v92 = 0;
  if ( v15 )
    v93 = VIDMM_SEGMENT::DriverId(v15);
  else
    v93 = 0;
  v85[0] = 0;
  v84 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v66 = WdLogNewEntry5_WdTrace(this, v25, v16, v24);
    v67 = v90;
    *(_QWORD *)(v66 + 24) = v90;
    v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v67, v68, v69, v70);
    v72 = v86;
    v71[3] = v86;
    v71[4] = v22;
    v71[5] = v21;
    v76 = (_QWORD *)WdLogNewEntry5_WdTrace(v72, v73, v74, v75);
    v77 = v97;
    v78 = v89;
    v76[3] = v97;
    v76[4] = a7;
    v76[5] = v78;
    v81 = (_QWORD *)WdLogNewEntry5_WdTrace(v77, v79, a7, v80);
    v81[3] = v98;
    v81[5] = v95;
    v81[4] = a10;
    v16 = a7;
    v25 = v87;
    v24 = v88;
  }
  v26 = v89;
  v27 = v86;
  if ( v86 )
  {
    while ( 1 )
    {
      v28 = v91;
      v29 = (VIDMM_GLOBAL *)((char *)v14 + 40384);
      v30 = (unsigned int)v19;
      v31 = v25;
      if ( v27 <= v19 )
        v30 = (unsigned int)v27;
      if ( v20 )
      {
        v99 = v24;
      }
      else
      {
        v31 = v25 - v30;
        v99 = v24 - v30;
        v28 = v91 - v30;
      }
      v94 = v31;
      v32 = v31 - v16;
      v96 = v31 - v16;
      while ( 1 )
      {
        if ( v26 )
          v31 = v28;
        v100 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(v29, v17, v30, v90, v32, v92, v31, v26, v85, v102);
        if ( v100 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(v14, v17, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(v14, v17);
        v31 = v94;
        v29 = (VIDMM_GLOBAL *)((char *)v14 + 40384);
        v32 = v96;
        v26 = v89;
      }
      v33 = v90;
      while ( 1 )
      {
        v34 = v99;
        if ( v95 )
          v34 = v28;
        v101 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                  (VIDMM_GLOBAL *)((char *)v14 + 40384),
                                  v17,
                                  v30,
                                  v33,
                                  v96,
                                  v93,
                                  v34,
                                  v95,
                                  &v84,
                                  v102);
        if ( v101 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(v14, v17, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(v14, v17);
      }
      GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)v14 + 2), v17);
      v38 = v86;
      if ( (*(_DWORD *)GpuMmuCaps & 0x400) == 0 )
      {
        v39 = *((_QWORD *)v100 + 13);
        v40 = *((_QWORD *)v100 + 12);
        if ( v39 <= *(_QWORD *)(v37 + 104) )
          v39 = *(_QWORD *)(v37 + 104);
        if ( v40 >= *(_QWORD *)(v37 + 96) )
          v40 = *(_QWORD *)(v37 + 96);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)v14 + v17 + 5052), v36, v40, v39);
      }
      memset(&v104, 0, sizeof(v104));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(v14, v17, v41, &v104);
      v104.Transfer.Destination.SegmentAddress.LowPart = v89 ? 1 : v95 == 0LL ? 2 : 0;
      v42 = v90;
      while ( 1 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(v14, v17, v42, &v104);
        if ( v42 )
          v43 = *(_QWORD *)(*((_QWORD *)v42 + 66) + 40LL);
        else
          v43 = 0LL;
        v44 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 2);
        v104.UpdateContextAllocation.ContextAllocation = v43;
        v104.Fill.FillSize = v96;
        v104.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v104.Transfer.TransferSize = v30;
        v104.MapApertureSegment.OffsetInPages = *((_QWORD *)v100 + 12);
        v86 = (unsigned __int64)v44;
        v104.Transfer.Source.SegmentAddress = v101[12];
        if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v44, v17) + 5) & 1) != 0 )
        {
          v48 = (CVirtualAddressAllocator *)*((_QWORD *)v14 + v17 + 5052);
          v104.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v48,
                                                                         v45,
                                                                         *(_QWORD *)(v47 + 96),
                                                                         v85[0]);
          VirtualAddressOfPageTable = CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                        v48,
                                        v17,
                                        v101[12].QuadPart,
                                        v84);
          v46 = (ADAPTER_RENDER *)v86;
          v42 = v90;
          v104.TransferVirtual.DestinationPageTable = VirtualAddressOfPageTable;
          v104.Transfer.Destination.SegmentAddress.HighPart = v104.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v85[0] & 1 | (2 * (v84 & 1));
        }
        if ( *((_QWORD *)v14 + 5123) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(v14, &v104, v42);
          v46 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 2);
        }
        v50 = ADAPTER_RENDER::DdiBuildPagingBuffer(v46, &v104);
        v51 = *((_QWORD *)v14 + 879);
        v52 = v50;
        LODWORD(v86) = v50;
        if ( v51 && (!v98 || (*((_DWORD *)v98 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v51 + 8),
            *(_DWORD *)(*((_QWORD *)v14 + 3) + 240LL),
            v30);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 987, v30);
        if ( bTracingEnabled )
        {
          if ( !v97 || (v53 = 2, (*((_DWORD *)v97 + 20) & 0x1001) != 0) )
            v53 = 1;
          v103 = *((_QWORD *)v14 + v17 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C006E941 & 8) != 0 )
          {
            LODWORD(v83) = v53;
            McTemplateK0pppxxq_EtwWriteTransfer((__int64)v90, v55, v56, CurrentProcessId, v90, v103, v94, v30, v83);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)v14 + 7184), v30, v53);
          v52 = v86;
        }
        if ( v97 )
          v105 = *((_DWORD *)v97 + 4) + 1;
        else
          v105 = 0;
        v107 = v94;
        if ( v98 )
          v106 = *((_DWORD *)v98 + 4) + 1;
        else
          v106 = 0;
        v108 = v99;
        v82 = v52;
        v42 = v90;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(v14, v17, v90, &v104, v82, 0, &v105);
        v57 = v86;
        if ( (v86 & 0x80000000) == 0LL )
        {
          v58 = v100;
          v59 = (__int64 *)((char *)v100 + 24);
          v60 = 1584 * v17 + *((_QWORD *)v14 + 5028) + 464LL;
          v61 = *(__int64 ***)(v60 + 8);
          if ( *v61 != (__int64 *)v60 )
            goto LABEL_81;
          v62 = v101;
          *v59 = v60;
          v59[1] = (__int64)v61;
          *v61 = v59;
          *(_QWORD *)(v60 + 8) = v59;
          v63 = (__int64 *)&v62[3];
          v64 = 1584 * v17 + *((_QWORD *)v14 + 5028) + 464LL;
          v65 = *(__int64 ***)(v64 + 8);
          if ( *v65 != (__int64 *)v64 )
LABEL_81:
            __fastfail(3u);
          *v63 = v64;
          v62[4].QuadPart = (LONGLONG)v65;
          *v65 = v63;
          *(_QWORD *)(v64 + 8) = v63;
          *((_QWORD *)v58 + 5) = *((_QWORD *)v42 + 20);
          v62[5] = *(LARGE_INTEGER *)((char *)v42 + 160);
          if ( v57 >= 0 )
            break;
        }
      }
      v27 = v38 - v30;
      v86 = v27;
      if ( v20 )
      {
        v25 = v30 + v87;
        v24 = v30 + v88;
        v91 += v30;
      }
      else
      {
        v25 = v87 - v30;
        v24 = v88 - v30;
        v91 -= v30;
      }
      v88 = v24;
      v87 = v25;
      if ( !v27 )
        break;
      v16 = a7;
      v26 = v89;
    }
  }
}
