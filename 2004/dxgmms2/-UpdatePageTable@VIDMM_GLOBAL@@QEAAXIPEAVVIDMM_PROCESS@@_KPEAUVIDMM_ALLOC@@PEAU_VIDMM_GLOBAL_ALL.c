/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0072E60
 * Callers:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005EB24 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C005FA04 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00716E8 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A30 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C0072750 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E00 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0015A98 (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     McTemplateK0pptpqqx_EtwWriteTransfer @ 0x1C0026E70 (McTemplateK0pptpqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpx_EtwWriteTransfer @ 0x1C0026F30 (McTemplateK0pptpqxpx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpxx_EtwWriteTransfer @ 0x1C0027010 (McTemplateK0pptpqxpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxq_EtwWriteTransfer @ 0x1C0027104 (McTemplateK0pptpqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer @ 0x1C00271C4 (McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxq_EtwWriteTransfer @ 0x1C0027370 (McTemplateK0pptpqxqxqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer @ 0x1C0027488 (McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxqt_EtwWriteTransfer @ 0x1C00275D4 (McTemplateK0pptpqxxqt_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxt_EtwWriteTransfer @ 0x1C00276C8 (McTemplateK0pptpqxxt_EtwWriteTransfer.c)
 *     McTemplateK0pptpxqqx_EtwWriteTransfer @ 0x1C00277A8 (McTemplateK0pptpxqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxx_EtwWriteTransfer @ 0x1C0027888 (McTemplateK0pptpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxpq_EtwWriteTransfer @ 0x1C0027948 (McTemplateK0pptpxxpq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxx_EtwWriteTransfer @ 0x1C0027A28 (McTemplateK0pptpxxqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer @ 0x1C0027B2C (McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1C0027CC0 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083600 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0087DB4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B4074 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00BFFAC (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFE.c)
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
        unsigned int a9,
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
  struct _VIDMM_GLOBAL_ALLOC *v20; // r14
  enum _DXGK_PAGETABLEUPDATEMODE v21; // r15d
  _OWORD *v22; // rdx
  SIZE_T TransferSize; // rcx
  __int64 v24; // rax
  void *v25; // rax
  __int64 v26; // rax
  unsigned int NumPageTableEntries; // r9d
  UINT v28; // r10d
  unsigned __int64 v29; // r11
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  void *v36; // rdx
  int v37; // eax
  LONG v38; // eax
  UINT SegmentId; // r10d
  __int64 v40; // rcx
  DXGK_PTE *pPageTableEntries64KB; // rax
  __int64 v42; // rcx
  SIZE_T v43; // rcx
  _QWORD *v44; // rcx
  int v45; // r14d
  unsigned int i; // edi
  unsigned __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r15
  int v51; // edi
  __int64 v52; // r14
  char v53; // al
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  struct _DXGKARG_BUILDPAGINGBUFFER *v58; // rax
  __int64 v59; // rcx
  __int128 v60; // xmm0
  __int64 v61; // rdi
  _QWORD *v62; // rax
  char v63[8]; // [rsp+30h] [rbp-F8h]
  char v64[8]; // [rsp+38h] [rbp-F0h]
  enum _DXGK_PAGETABLEUPDATEMODE v65; // [rsp+A8h] [rbp-80h]
  struct _DXGKARG_BUILDPAGINGBUFFER v67; // [rsp+B8h] [rbp-70h] BYREF
  SIZE_T v68; // [rsp+1F8h] [rbp+D0h]
  struct _VIDMM_GLOBAL_ALLOC *v69; // [rsp+200h] [rbp+D8h]
  struct _DXGK_PTE *v70; // [rsp+208h] [rbp+E0h]
  DXGK_PTE *v71; // [rsp+210h] [rbp+E8h]
  D3DGPU_VIRTUAL_ADDRESS v72; // [rsp+218h] [rbp+F0h]
  D3DGPU_VIRTUAL_ADDRESS v73; // [rsp+220h] [rbp+F8h]
  struct VIDMM_PROCESS *v74; // [rsp+228h] [rbp+100h]
  __int128 v75; // [rsp+230h] [rbp+108h] BYREF

  v18 = *((_BYTE *)this + 7080) == 0;
  v20 = a6;
  v70 = a10;
  v71 = a11;
  v68 = a14;
  v73 = a4;
  v74 = a3;
  v69 = a6;
  if ( v18 )
  {
    v21 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    if ( (*((_BYTE *)this + 40936) & 0x10) == 0 )
      v21 = a15;
    v65 = v21;
    memset(&v67, 0, sizeof(v67));
    TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
    v24 = *(_QWORD *)(*(_QWORD *)(TransferSize + 264) + 8LL * a12);
    if ( v24 )
    {
      v25 = *(void **)(v24 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40937) & 8) != 0 )
        v26 = *(_QWORD *)(TransferSize + 280);
      else
        v26 = *(_QWORD *)(TransferSize + 256);
      v25 = *(void **)(*(_QWORD *)(v26 + 8LL * a12) + 64LL);
    }
    v67.hSystemContext = v25;
    v72 = a16 << 12;
    v67.MultipassOffset = 0;
LABEL_11:
    NumPageTableEntries = a9;
    v28 = a13;
    v29 = a18;
    do
    {
      v30 = *((_QWORD *)this + a12 + 79);
      if ( (*(_DWORD *)(v30 + 32) & 4) == 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v22);
        v31[3] = 270LL;
        v31[4] = 29LL;
        v31[5] = v30;
        v31[6] = 0LL;
        v31[7] = 0LL;
        WdLogEvent5_WdCriticalError(v31);
        v29 = a18;
        v28 = a13;
        NumPageTableEntries = a9;
        v30 = *((_QWORD *)this + a12 + 79);
      }
      v32 = *((_QWORD *)this + a12 + 143);
      if ( *(_DWORD *)(v30 + 36) )
        v33 = *(_QWORD *)(*(_QWORD *)(v32 + 56) + 360LL);
      else
        v33 = *(_QWORD *)(v32 + 72);
      *((_QWORD *)this + a12 + 335) = v33;
      *((_QWORD *)this + a12 + 335) += *((unsigned int *)this + a12 + 414);
      v34 = *((unsigned int *)this + a12 + 542);
      v35 = *((_QWORD *)this + a12 + 143);
      v67.pDmaBuffer = (void *)*((_QWORD *)this + a12 + 335);
      v36 = (void *)(v34 + *(_QWORD *)(v35 + 128));
      *((_QWORD *)this + a12 + 399) = v36;
      v37 = *((_DWORD *)this + a12 + 29);
      LODWORD(v34) = *((_DWORD *)this + a12 + 93) - *((_DWORD *)this + a12 + 542);
      v67.pDmaBufferPrivateData = v36;
      LODWORD(v36) = *((_DWORD *)this + a12 + 414);
      v67.DmaSize = v37 - (_DWORD)v36;
      v67.DmaBufferPrivateDataSize = v34;
      v67.DmaBufferGpuVirtualAddress = *(_QWORD *)(v35 + 96);
      v38 = (LONG)a17;
      v67.DmaBufferWriteOffset = (unsigned int)v36;
      v67.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v67.UpdatePageTable.Flags = a17;
      v67.UnmapApertureSegment.DummyPage.HighPart = NumPageTableEntries;
      v75 = 0LL;
      if ( (unsigned int)v21 > DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v67.Fill.FillPattern = v28;
        v67.MapApertureSegment.OffsetInPages = v68;
      }
      else
      {
        v67.Transfer.TransferSize = v68;
      }
      SegmentId = a2;
      v67.Transfer.Destination.SegmentId = a8;
      v67.ReadPhysical.SegmentId = a2;
      if ( v70 )
      {
        v67.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v70;
        v67.UpdatePageTable.pPageTableEntries64KB = v71;
      }
      else
      {
        v40 = *((_QWORD *)this + 5027);
        v67.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)&v75;
        pPageTableEntries64KB = (DXGK_PTE *)&v75;
        if ( **(char **)(1584LL * a12 + v40 + 440) >= 0 )
          pPageTableEntries64KB = v67.UpdatePageTable.pPageTableEntries64KB;
        v67.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
        v38 = *(_DWORD *)&a17 | 1;
        v67.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
      }
      v67.UpdatePageTable.FirstPteVirtualAddress = v72;
      v67.Reserved.Reserved[20] = v21;
      if ( !a2 )
      {
        if ( v29 == 16 )
        {
          if ( (*(_BYTE *)&a17 & 8) != 0 )
            goto LABEL_31;
        }
        else if ( v29 == 1 && (*(_BYTE *)&a17 & 8) == 0 )
        {
LABEL_31:
          v38 |= 1u;
          v67.Transfer.Destination.SegmentAddress.HighPart = v38;
        }
      }
      v67.TransferVirtual.DestinationPageTable = v73;
      if ( v20 )
      {
        v42 = *((_QWORD *)v20 + 5);
        if ( v42 )
          v43 = *(_QWORD *)(v42 + 16);
        else
          v43 = *((_QWORD *)v20 + 6);
        v67.Fill.FillSize = v43;
        v67.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v44 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v74 + 4) + 48LL)
                       + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL));
      if ( v44 )
        v44 = (_QWORD *)v44[2];
      v18 = *((_QWORD *)this + 5123) == 0LL;
      v67.UpdatePageTable.hProcess = v44;
      if ( !v18 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v74, &v67.UpdatePageTable, a5, v20, a12);
        LOBYTE(v38) = v67.Reserved.Reserved[13];
        NumPageTableEntries = v67.UpdatePageTable.NumPageTableEntries;
        SegmentId = v67.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5128) && !SegmentId && (v38 & 1) == 0 )
      {
        v45 = 0x10000;
        if ( (v38 & 8) == 0 )
          v45 = 4096;
        for ( i = 0; i < NumPageTableEntries; ++i )
        {
          v47 = *(_QWORD *)(v67.Transfer.Source.SegmentAddress.QuadPart + 16LL * i);
          if ( (v47 & 1) != 0 )
          {
            VIDMM_GLOBAL::RecordPageMappingHistory(
              this,
              (v47 >> 5) & 0x1F,
              *(_QWORD *)(v67.Transfer.Source.SegmentAddress.QuadPart + 16LL * i + 8),
              1LL,
              1,
              v67.UpdatePageTable.FirstPteVirtualAddress + i * v45,
              *(_QWORD *)v64);
            NumPageTableEntries = v67.UpdatePageTable.NumPageTableEntries;
          }
        }
      }
      if ( DXGADAPTER::IsXBoxOneDevice(*((DXGADAPTER **)this + 3))
        && v21 == DXGK_PAGETABLEUPDATE_CPU_VIRTUAL
        && *((VIDMM_GLOBAL **)this + 473) != (VIDMM_GLOBAL *)((char *)this + 3784)
        && *((_BYTE *)this + 40939)
        && (*(_BYTE *)&a17 & 2) != 0 )
      {
        VIDMM_GLOBAL::FlushPagingBuffer(this, 0, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a12);
        *((_BYTE *)this + 40939) = 0;
      }
      v48 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v67);
      v50 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v67.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670));
      v51 = LODWORD(v67.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v52 = v48;
      if ( LODWORD(v67.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v51 )
      {
        if ( !*((_DWORD *)this + a12 + 1173) )
        {
          *((_DWORD *)this + a12 + 1173) = 1;
          ++*((_QWORD *)this + a12 + 619);
        }
        v53 = *((_BYTE *)this + 40937);
        v50 = *((_QWORD *)this + a12 + 619);
        if ( (v53 & 2) != 0 )
          *((_BYTE *)this + 40937) = v53 & 0xFD;
      }
      *((_DWORD *)this + a12 + 414) += TransferSize;
      if ( *((_DWORD *)this + a12 + 414) > *((_DWORD *)this + a12 + 29) )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v49);
        v54[5] = 0LL;
        v54[6] = 0LL;
        v54[7] = 0LL;
        v54[3] = 270LL;
        v54[4] = 18LL;
        WdLogEvent5_WdCriticalError(v54);
      }
      *((_DWORD *)this + a12 + 542) += v51;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v49);
        v55[3] = 270LL;
        v55[4] = 19LL;
        v55[5] = 0LL;
        v55[6] = 0LL;
        v55[7] = 0LL;
        WdLogEvent5_WdCriticalError(v55);
      }
      if ( bTracingEnabled )
      {
        v56 = *((_QWORD *)this + a12 + 143);
        v57 = *((_QWORD *)this + 3);
        switch ( v67.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpTransfer,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpxqqx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpFill,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqqx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpDiscard,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v64 = v67.ReadPhysical.SegmentId;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptqx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventPagingOpReadPhysical,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v64 = v67.ReadPhysical.SegmentId;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptqx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventPagingOpWritePhysical,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxxqt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpMapApertureSegment,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxxt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpUnmapApertureSegment,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpSpecialLockTransfer,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpVirtualTransfer,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpxxqqxx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpVirtualFill,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxpx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpInitContextResource,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            if ( v67.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v67.Transfer.TransferSize;
            }
            else if ( v67.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v67.MapApertureSegment.OffsetInPages;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpUpdatePageTable,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxpxx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpFlushTlb,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpxxpq_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpUpdateContextAllocation,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpqxq_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpNotifyResidency,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v64 = 0LL;
              *(_DWORD *)v63 = v52 == -1071775743;
              McTemplateK0pptpxx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpSignalMonitoredFence,
                0LL,
                v57,
                v56,
                *(_QWORD *)v63);
            }
            break;
          default:
            break;
        }
      }
      v22 = (_OWORD *)*((_QWORD *)this + 984);
      if ( v22 )
      {
        *((_QWORD *)v22 + 45 * *((unsigned int *)this + 1970) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984)) = a12;
        v58 = &v67;
        v22 = (_OWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 24LL);
        v59 = 2LL;
        do
        {
          v22 += 8;
          v60 = *(_OWORD *)&v58->pDmaBuffer;
          v58 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v58 + 128);
          *(v22 - 8) = v60;
          *(v22 - 7) = *(_OWORD *)&v58[-1].Reserved.Reserved[42];
          *(v22 - 6) = *(_OWORD *)&v58[-1].Reserved.Reserved[46];
          *(v22 - 5) = *(_OWORD *)&v58[-1].Reserved.Reserved[50];
          *(v22 - 4) = *(_OWORD *)&v58[-1].Reserved.Reserved[54];
          *(v22 - 3) = *(_OWORD *)&v58[-1].Reserved.Reserved[58];
          *(v22 - 2) = *(_OWORD *)&v58[-1].Reserved.Reserved[62];
          *(v22 - 1) = *(_OWORD *)&v58[-1].DmaBufferGpuVirtualAddress;
          --v59;
        }
        while ( v59 );
        *v22 = *(_OWORD *)&v58->pDmaBuffer;
        v22[1] = *(_OWORD *)&v58->pDmaBufferPrivateData;
        v22[2] = *(_OWORD *)&v58->MultipassOffset;
        v22[3] = *(_OWORD *)&v58->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 344) = v52;
        TransferSize = 360LL * *((unsigned int *)this + 1970);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 984) + 352) = v50;
        if ( ++*((_DWORD *)this + 1970) >= *((_DWORD *)this + 1966) )
        {
          ++*((_DWORD *)this + 1971);
          *((_DWORD *)this + 1970) = 0;
        }
      }
      if ( (int)v52 < 0 )
      {
        if ( (_DWORD)v52 == -1071775743 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(TransferSize);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
          v20 = v69;
          v21 = v65;
          goto LABEL_11;
        }
        v61 = *((_QWORD *)this + 3);
        v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v22);
        v62[5] = &v67;
        v62[3] = 270LL;
        v62[4] = 11LL;
        v62[6] = v52;
        v62[7] = v61;
        WdLogEvent5_WdCriticalError(v62);
      }
      v21 = v65;
      v18 = (_DWORD)v52 == -1071775743;
      v20 = v69;
      v29 = a18;
      v28 = a13;
      NumPageTableEntries = a9;
    }
    while ( v18 );
  }
}
