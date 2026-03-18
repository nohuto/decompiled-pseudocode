/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00A1B20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00E4968 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pptpqqx_EtwWriteTransfer @ 0x1C00313C8 (McTemplateK0pptpqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpx_EtwWriteTransfer @ 0x1C0031488 (McTemplateK0pptpqxpx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpxx_EtwWriteTransfer @ 0x1C0031568 (McTemplateK0pptpqxpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxq_EtwWriteTransfer @ 0x1C003165C (McTemplateK0pptpqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer @ 0x1C003171C (McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxq_EtwWriteTransfer @ 0x1C00318C8 (McTemplateK0pptpqxqxqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer @ 0x1C00319E0 (McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxqt_EtwWriteTransfer @ 0x1C0031B2C (McTemplateK0pptpqxxqt_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxt_EtwWriteTransfer @ 0x1C0031C20 (McTemplateK0pptpqxxt_EtwWriteTransfer.c)
 *     McTemplateK0pptpxqqx_EtwWriteTransfer @ 0x1C0031D00 (McTemplateK0pptpxqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxx_EtwWriteTransfer @ 0x1C0031DE0 (McTemplateK0pptpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxpq_EtwWriteTransfer @ 0x1C0031EA0 (McTemplateK0pptpxxpq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxx_EtwWriteTransfer @ 0x1C0031F80 (McTemplateK0pptpxxqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer @ 0x1C0032084 (McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1C0032218 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C00A7158 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00D937C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00E3DF0 (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFE.c)
 */

void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
        struct VIDMM_ALLOC *a5,
        struct _VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        DXGK_UPDATEPAGETABLEFLAGS a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // r14d
  struct _VIDMM_GLOBAL_ALLOC *v21; // r15
  unsigned int v22; // r13d
  enum _DXGK_PAGETABLEUPDATEMODE v23; // r12d
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // rax
  D3DGPU_VIRTUAL_ADDRESS v28; // r10
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  _QWORD *v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  void *v35; // rcx
  UINT v36; // eax
  int v37; // eax
  __int64 v38; // r15
  __int64 v39; // r14
  DXGGLOBAL *Global; // rax
  void (*v41)(void *); // r8
  void *NumPageTableEntries; // r9
  void *v43; // rax
  int v44; // eax
  unsigned __int64 v45; // r8
  SIZE_T OffsetInPages; // r9
  __int64 v47; // r13
  __int64 FillPattern; // rcx
  int v49; // r14d
  __int64 v50; // r15
  char v51; // al
  __int64 v52; // r10
  __int64 v53; // r11
  _OWORD *v54; // rdx
  SIZE_T v55; // rcx
  int v56; // r15d
  unsigned int v57; // r14d
  unsigned __int64 v58; // rdx
  struct _DXGKARG_BUILDPAGINGBUFFER *v59; // rax
  __int64 v60; // rcx
  __int128 v61; // xmm0
  char v62[8]; // [rsp+30h] [rbp-F8h]
  char v63[8]; // [rsp+38h] [rbp-F0h]
  __int64 v64; // [rsp+40h] [rbp-E8h]
  __int64 v65; // [rsp+48h] [rbp-E0h]
  __int64 v66; // [rsp+50h] [rbp-D8h]
  __int64 v67; // [rsp+58h] [rbp-D0h]
  __int64 v68; // [rsp+60h] [rbp-C8h]
  __int64 v69; // [rsp+70h] [rbp-B8h]
  __int64 v70; // [rsp+78h] [rbp-B0h]
  __int64 v71; // [rsp+80h] [rbp-A8h]
  __int64 v72; // [rsp+98h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v74; // [rsp+B8h] [rbp-70h] BYREF
  SIZE_T v75; // [rsp+1F8h] [rbp+D0h]
  struct VIDMM_PROCESS *v76; // [rsp+200h] [rbp+D8h]
  unsigned __int64 v77; // [rsp+208h] [rbp+E0h]
  struct _VIDMM_GLOBAL_ALLOC *v78; // [rsp+210h] [rbp+E8h]
  struct _DXGK_PTE *v79; // [rsp+218h] [rbp+F0h]
  DXGK_PTE *v80; // [rsp+220h] [rbp+F8h]
  D3DGPU_VIRTUAL_ADDRESS v81; // [rsp+228h] [rbp+100h]
  __int128 v82; // [rsp+230h] [rbp+108h] BYREF

  v18 = *((_BYTE *)this + 7088) == 0;
  v19 = a2;
  v21 = a6;
  v22 = a12;
  v79 = a10;
  v80 = a11;
  v75 = a14;
  v81 = a4;
  v76 = a3;
  v78 = a6;
  if ( v18 )
  {
    v23 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    if ( (*((_BYTE *)this + 40936) & 0x10) == 0 )
      v23 = a15;
    memset(&v74, 0, sizeof(v74));
    v24 = *(_QWORD **)(*((_QWORD *)this + 2) + 632LL);
    v25 = *(_QWORD *)(v24[34] + 8LL * a12);
    if ( v25 )
    {
      v27 = *(void **)(v25 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40937) & 8) != 0 )
        v26 = v24[36];
      else
        v26 = v24[33];
      v27 = *(void **)(*(_QWORD *)(v26 + 8LL * a12) + 64LL);
    }
    v28 = a16 << 12;
    v77 = a16 << 12;
    v74.MultipassOffset = 0;
    v74.hSystemContext = v27;
    while ( 1 )
    {
      v29 = *((_QWORD *)this + a12 + 79);
      v30 = a18;
      if ( (*(_DWORD *)(v29 + 32) & 4) == 0 )
      {
        WdLogSingleEntry5(0LL, 270LL, 29LL, *((_QWORD *)this + a12 + 79), 0LL, 0LL);
        v29 = *((_QWORD *)this + a12 + 79);
        v28 = v77;
        v30 = a18;
      }
      v31 = (_QWORD *)*((_QWORD *)this + a12 + 143);
      if ( *(_DWORD *)(v29 + 36) )
        v32 = *(_QWORD *)(v31[7] + 384LL);
      else
        v32 = v31[9];
      *((_QWORD *)this + a12 + 335) = v32;
      v33 = *((unsigned int *)this + a12 + 414);
      *((_QWORD *)this + a12 + 335) += v33;
      v34 = *((unsigned int *)this + a12 + 542);
      v74.pDmaBuffer = (void *)*((_QWORD *)this + a12 + 335);
      v35 = (void *)(v34 + v31[16]);
      *((_QWORD *)this + a12 + 399) = v35;
      v36 = *((_DWORD *)this + a12 + 29) - v33;
      v74.pDmaBufferPrivateData = v35;
      v74.DmaSize = v36;
      v74.DmaBufferPrivateDataSize = *((_DWORD *)this + a12 + 93) - v34;
      v74.DmaBufferGpuVirtualAddress = v31[12];
      v37 = (int)a17;
      v74.DmaBufferWriteOffset = v33;
      v74.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v74.UpdatePageTable.Flags = a17;
      v74.UnmapApertureSegment.DummyPage.HighPart = a9;
      v82 = 0LL;
      if ( (unsigned int)v23 <= DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v74.Transfer.TransferSize = v75;
      }
      else
      {
        v74.Fill.FillPattern = a13;
        v74.MapApertureSegment.OffsetInPages = v75;
      }
      v74.Transfer.Destination.SegmentId = a8;
      v74.ReadPhysical.SegmentId = v19;
      if ( v79 )
      {
        v74.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v79;
        v74.UpdatePageTable.pPageTableEntries64KB = v80;
      }
      else
      {
        v74.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)&v82;
        if ( (**(_DWORD **)(1584LL * a12 + *((_QWORD *)this + 5028) + 440) & 0x80u) != 0 )
          v74.UpdatePageTable.pPageTableEntries64KB = (DXGK_PTE *)&v82;
        v37 = *(_DWORD *)&a17 | 1;
        v74.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
      }
      v74.Reserved.Reserved[20] = v23;
      v74.UpdatePageTable.FirstPteVirtualAddress = v28;
      if ( !v19 )
      {
        if ( v30 == 16 )
        {
          if ( (*(_BYTE *)&a17 & 8) != 0 )
            goto LABEL_83;
        }
        else if ( v30 == 1 && (*(_BYTE *)&a17 & 8) == 0 )
        {
LABEL_83:
          v74.Transfer.Destination.SegmentAddress.HighPart = v37 | 1;
        }
      }
      v74.TransferVirtual.DestinationPageTable = v81;
      if ( v21 )
      {
        v55 = *(_QWORD *)(*((_QWORD *)v21 + 66) + 40LL);
        v74.UpdatePageTable.AllocationOffsetInBytes = a7;
        v74.Fill.FillSize = v55;
      }
      v38 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
      v39 = *((_QWORD *)v76 + 4);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v38 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global)
        && *(_QWORD *)(8 * v38 + *(_QWORD *)(v39 + 48)) )
      {
        _mm_lfence();
        v43 = *(void **)(*(_QWORD *)(*(_QWORD *)(v39 + 48) + 8 * v38) + 16LL);
      }
      else
      {
        v43 = 0LL;
      }
      v18 = *((_QWORD *)this + 5123) == 0LL;
      v74.UpdatePageTable.hProcess = v43;
      if ( !v18 )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v76, &v74.UpdatePageTable, a5, v78, v22);
      if ( *((_QWORD *)this + 5128) && !v74.ReadPhysical.SegmentId && (v74.Reserved.Reserved[13] & 1) == 0 )
      {
        NumPageTableEntries = (void *)v74.UpdatePageTable.NumPageTableEntries;
        v56 = 0x10000;
        if ( (v74.Reserved.Reserved[13] & 8) == 0 )
          v56 = 4096;
        v57 = 0;
        if ( v74.UnmapApertureSegment.DummyPage.HighPart )
        {
          do
          {
            v41 = (void (*)(void *))(2LL * v57);
            v58 = *(_QWORD *)(v74.Transfer.Source.SegmentAddress.QuadPart + 16LL * v57);
            if ( (v58 & 1) != 0 )
            {
              VIDMM_GLOBAL::RecordPageMappingHistory(
                this,
                (v58 >> 5) & 0x1F,
                *(_QWORD *)(v74.Transfer.Source.SegmentAddress.QuadPart + 16LL * v57 + 8),
                1LL,
                1,
                v74.UpdatePageTable.FirstPteVirtualAddress + v57 * v56,
                *(_QWORD *)v63);
              NumPageTableEntries = (void *)v74.UpdatePageTable.NumPageTableEntries;
            }
            ++v57;
          }
          while ( v57 < (unsigned int)NumPageTableEntries );
          v22 = a12;
        }
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x200) != 0
        && v23 == DXGK_PAGETABLEUPDATE_CPU_VIRTUAL
        && *((VIDMM_GLOBAL **)this + 473) != (VIDMM_GLOBAL *)((char *)this + 3784)
        && *((_BYTE *)this + 40939)
        && (*(_BYTE *)&a17 & 2) != 0 )
      {
        VIDMM_GLOBAL::FlushPagingBuffer(this, 0, v41, NumPageTableEntries);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v22);
        *((_BYTE *)this + 40939) = 0;
      }
      v44 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v74);
      v47 = -1LL;
      FillPattern = (unsigned int)(LODWORD(v74.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670));
      v49 = LODWORD(v74.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v50 = v44;
      if ( LODWORD(v74.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v49 )
      {
        if ( !*((_DWORD *)this + a12 + 1177) )
        {
          *((_DWORD *)this + a12 + 1177) = 1;
          ++*((_QWORD *)this + a12 + 621);
        }
        v51 = *((_BYTE *)this + 40937);
        v47 = *((_QWORD *)this + a12 + 621);
        if ( (v51 & 2) != 0 )
          *((_BYTE *)this + 40937) = v51 & 0xFD;
      }
      *((_DWORD *)this + a12 + 414) += FillPattern;
      if ( *((_DWORD *)this + a12 + 414) > *((_DWORD *)this + a12 + 29) )
        WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
      *((_DWORD *)this + a12 + 542) += v49;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
        WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
      if ( bTracingEnabled )
      {
        v52 = *((_QWORD *)this + a12 + 143);
        v53 = *((_QWORD *)this + 3);
        if ( v74.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          v45 = v74.Reserved.Reserved[20];
          FillPattern = 0LL;
          if ( v74.Reserved.Reserved[20] == 2 )
          {
            OffsetInPages = v74.MapApertureSegment.OffsetInPages;
            FillPattern = v74.Fill.FillPattern;
          }
          else if ( v74.Reserved.Reserved[20] > 1 )
          {
            OffsetInPages = 0LL;
          }
          else
          {
            OffsetInPages = v74.Transfer.TransferSize;
          }
          if ( (byte_1C006E941 & 8) != 0 )
          {
            LODWORD(v72) = v74.UpdatePageTable.UpdateMode;
            LODWORD(v70) = v74.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v67) = v74.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v69) = v74.Transfer.Destination.SegmentId;
            LODWORD(v66) = FillPattern;
            LODWORD(v64) = v74.ReadPhysical.SegmentId;
            *(_DWORD *)v62 = v50 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v53,
              v52,
              *(_QWORD *)v62,
              0LL,
              v64,
              OffsetInPages,
              v66,
              v67,
              v74.Transfer.Source.SegmentAddress.QuadPart,
              v74.UpdatePageTable.pPageTableEntries64KB,
              v69,
              v70,
              *(_OWORD *)&v74.Reserved.Reserved[14],
              v74.UpdatePageTable.hProcess,
              v72,
              v74.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v74.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (byte_1C006E941 & 8) != 0 )
          {
            LODWORD(v64) = v74.ReadPhysical.SegmentId;
            *(_DWORD *)v62 = v50 == -1071775743;
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              *((_QWORD *)this + 3),
              v52,
              *(_QWORD *)v62,
              0LL,
              v64,
              *(_OWORD *)&v74.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v74.Reserved.Reserved[6]);
          }
        }
        else
        {
          v45 = 0x1C0000000uLL;
          switch ( v74.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v69) = v74.Transfer.Flags.0;
                LODWORD(v68) = v74.Transfer.Destination.SegmentId;
                LODWORD(v66) = v74.Transfer.Source.SegmentId;
                LODWORD(v64) = v74.Transfer.TransferOffset;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpTransfer,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  v74.Transfer.TransferSize,
                  v66,
                  v74.Transfer.Source.SegmentAddress.QuadPart,
                  v68,
                  v74.Transfer.Destination.SegmentAddress.QuadPart,
                  v69);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v66) = v74.Transfer.Source.SegmentId;
                LODWORD(v65) = v74.Fill.FillPattern;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpxqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpFill,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v74.Fill.FillSize,
                  v65,
                  v66,
                  v74.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v65) = v74.DiscardContent.SegmentId;
                LODWORD(v64) = v74.Transfer.TransferOffset;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpDiscard,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  v65,
                  v74.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                *(_DWORD *)v63 = v74.ReadPhysical.SegmentId;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpReadPhysical,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  *(_QWORD *)v63,
                  v74.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                *(_DWORD *)v63 = v74.ReadPhysical.SegmentId;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpWritePhysical,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  *(_QWORD *)v63,
                  v74.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v68) = 0;
                LODWORD(v67) = v74.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v64) = v74.Fill.FillPattern;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpMapApertureSegment,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  *(_OWORD *)&v74.Reserved.Reserved[6],
                  v67,
                  v68);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v67) = 0;
                LODWORD(v64) = v74.Fill.FillPattern;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqxxt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUnmapApertureSegment,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  *(_OWORD *)&v74.Reserved.Reserved[6],
                  v67);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v71) = v74.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v70) = v74.Transfer.MdlOffset;
                LODWORD(v69) = v74.Transfer.Flags.0;
                LODWORD(v68) = v74.Transfer.Destination.SegmentId;
                LODWORD(v66) = v74.Transfer.Source.SegmentId;
                LODWORD(v64) = v74.Transfer.TransferOffset;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSpecialLockTransfer,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  v74.Transfer.TransferSize,
                  v66,
                  v74.Transfer.Source.SegmentAddress.QuadPart,
                  v68,
                  v74.Transfer.Destination.SegmentAddress.QuadPart,
                  v69,
                  v70,
                  v71);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v71) = v74.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v70) = v74.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v67) = MEMORY[4];
                LODWORD(v66) = MEMORY[0];
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualTransfer,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  *(_OWORD *)&v74.SpecialLockTransfer.TransferOffset,
                  v66,
                  v67,
                  *(_OWORD *)&v74.Reserved.Reserved[6],
                  v74.UnmapApertureSegment.DummyPage.QuadPart,
                  v70,
                  v71,
                  v74.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v67) = MEMORY[0];
                LODWORD(v66) = v74.Transfer.Source.SegmentId;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpxxqqxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualFill,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  *(_OWORD *)&v74.SpecialLockTransfer.TransferOffset,
                  v66,
                  v67,
                  v74.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v64) = v74.Transfer.TransferOffset;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqxpx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpInitContextResource,
                  0LL,
                  *((_QWORD *)this + 3),
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  *(_OWORD *)&v74.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v74.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v67) = v74.Transfer.Source.SegmentId;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpxxpq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUpdateContextAllocation,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  *(_OWORD *)&v74.Transfer.hAllocation,
                  v74.Transfer.TransferSize,
                  v67);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v66) = v74.Transfer.Source.SegmentId;
                LODWORD(v64) = v74.Transfer.TransferOffset;
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpNotifyResidency,
                  0LL,
                  v53,
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  v64,
                  v74.Transfer.TransferSize,
                  v66);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                *(_DWORD *)v62 = v50 == -1071775743;
                McTemplateK0pptpxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSignalMonitoredFence,
                  0LL,
                  *((_QWORD *)this + 3),
                  v52,
                  *(_QWORD *)v62,
                  0LL,
                  *(_OWORD *)&v74.Transfer.hAllocation);
              }
              break;
            default:
              break;
          }
        }
      }
      v54 = (_OWORD *)*((_QWORD *)this + 985);
      if ( v54 )
      {
        *((_QWORD *)v54 + 45 * *((unsigned int *)this + 1972) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985)) = a12;
        v59 = &v74;
        v54 = (_OWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 24LL);
        v60 = 2LL;
        do
        {
          v54 += 8;
          v61 = *(_OWORD *)&v59->pDmaBuffer;
          v59 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v59 + 128);
          *(v54 - 8) = v61;
          *(v54 - 7) = *(_OWORD *)&v59[-1].Reserved.Reserved[42];
          *(v54 - 6) = *(_OWORD *)&v59[-1].Reserved.Reserved[46];
          *(v54 - 5) = *(_OWORD *)&v59[-1].Reserved.Reserved[50];
          *(v54 - 4) = *(_OWORD *)&v59[-1].Reserved.Reserved[54];
          *(v54 - 3) = *(_OWORD *)&v59[-1].Reserved.Reserved[58];
          *(v54 - 2) = *(_OWORD *)&v59[-1].Reserved.Reserved[62];
          *(v54 - 1) = *(_OWORD *)&v59[-1].DmaBufferGpuVirtualAddress;
          --v60;
        }
        while ( v60 );
        *v54 = *(_OWORD *)&v59->pDmaBuffer;
        v54[1] = *(_OWORD *)&v59->pDmaBufferPrivateData;
        v54[2] = *(_OWORD *)&v59->MultipassOffset;
        v54[3] = *(_OWORD *)&v59->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 344) = v50;
        FillPattern = 360LL * *((unsigned int *)this + 1972);
        *(_QWORD *)(FillPattern + *((_QWORD *)this + 985) + 352) = v47;
        if ( ++*((_DWORD *)this + 1972) >= *((_DWORD *)this + 1968) )
        {
          ++*((_DWORD *)this + 1973);
          *((_DWORD *)this + 1972) = 0;
        }
      }
      if ( (int)v50 >= 0 )
        return;
      if ( (_DWORD)v50 != -1071775743 )
      {
        WdLogSingleEntry5(0LL, 270LL, 11LL, &v74, v50, *((_QWORD *)this + 3));
        return;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(FillPattern, v54, v45, OffsetInPages);
      v22 = a12;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
      v28 = v77;
      v19 = a2;
      v21 = v78;
    }
  }
}
