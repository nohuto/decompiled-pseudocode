/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0072A30
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001D40 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E00 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015C74 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0015C98 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pptpqqx_EtwWriteTransfer @ 0x1C0026EF0 (McTemplateK0pptpqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpx_EtwWriteTransfer @ 0x1C0026FB0 (McTemplateK0pptpqxpx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpxx_EtwWriteTransfer @ 0x1C0027090 (McTemplateK0pptpqxpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxq_EtwWriteTransfer @ 0x1C0027184 (McTemplateK0pptpqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer @ 0x1C0027244 (McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxq_EtwWriteTransfer @ 0x1C00273F0 (McTemplateK0pptpqxqxqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer @ 0x1C0027508 (McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxqt_EtwWriteTransfer @ 0x1C0027654 (McTemplateK0pptpqxxqt_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxt_EtwWriteTransfer @ 0x1C0027748 (McTemplateK0pptpqxxt_EtwWriteTransfer.c)
 *     McTemplateK0pptpxqqx_EtwWriteTransfer @ 0x1C0027828 (McTemplateK0pptpxqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxx_EtwWriteTransfer @ 0x1C0027908 (McTemplateK0pptpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxpq_EtwWriteTransfer @ 0x1C00279C8 (McTemplateK0pptpxxpq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxx_EtwWriteTransfer @ 0x1C0027AA8 (McTemplateK0pptpxxqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer @ 0x1C0027BAC (McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1C0027D40 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00BBCCC (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00BF3B0 (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        SIZE_T a6,
        unsigned __int64 a7)
{
  struct VIDMM_PROCESS *v7; // r13
  struct _D3DGPU_PHYSICAL_ADDRESS *v8; // r15
  __int64 v9; // r12
  _OWORD *v11; // rdx
  SIZE_T TransferSize; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  SIZE_T v16; // r11
  SIZE_T v17; // r10
  LARGE_INTEGER v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _D3DGPU_PHYSICAL_ADDRESS v24; // xmm0
  void *v25; // rdx
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r13
  int v32; // edi
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // r9
  UINT FillPattern; // r11d
  _DWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int64 v44; // rdi
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  char v48[8]; // [rsp+30h] [rbp-F8h]
  char v49[8]; // [rsp+38h] [rbp-F0h]
  __int64 v50; // [rsp+40h] [rbp-E8h]
  __int64 v51; // [rsp+48h] [rbp-E0h]
  __int64 v52; // [rsp+50h] [rbp-D8h]
  __int64 v53; // [rsp+58h] [rbp-D0h]
  __int64 v54; // [rsp+60h] [rbp-C8h]
  __int64 v55; // [rsp+70h] [rbp-B8h]
  __int64 v56; // [rsp+78h] [rbp-B0h]
  __int64 v57; // [rsp+80h] [rbp-A8h]
  __int64 v58; // [rsp+98h] [rbp-90h]
  int v59; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-78h]
  char v61; // [rsp+B8h] [rbp-70h]
  struct _DXGKARG_BUILDPAGINGBUFFER v62; // [rsp+C8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !*((_BYTE *)this + 7080) && (*((_BYTE *)this + 40936) & 0x10) == 0 )
  {
    memset(&v62, 0, sizeof(v62));
    TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
    v13 = *(_QWORD *)(*(_QWORD *)(TransferSize + 264) + 8 * v9);
    if ( v13 )
    {
      v15 = *(void **)(v13 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40937) & 8) != 0 )
        v14 = *(_QWORD *)(TransferSize + 280);
      else
        v14 = *(_QWORD *)(TransferSize + 256);
      v15 = *(void **)(*(_QWORD *)(v14 + 8 * v9) + 64LL);
    }
    v62.hSystemContext = v15;
    v62.MultipassOffset = 0;
LABEL_8:
    v16 = (SIZE_T)a5;
    v17 = a6;
    v18.QuadPart = a7;
    do
    {
      v19 = *((_QWORD *)this + v9 + 79);
      if ( (*(_DWORD *)(v19 + 32) & 4) == 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11);
        v38[3] = 270LL;
        v38[4] = 29LL;
        v38[5] = v19;
        v38[6] = 0LL;
        v38[7] = 0LL;
        WdLogEvent5_WdCriticalError(v38);
        v18.QuadPart = a7;
        v17 = a6;
        v16 = (SIZE_T)a5;
        v19 = *((_QWORD *)this + v9 + 79);
      }
      v20 = *((_QWORD *)this + v9 + 143);
      if ( *(_DWORD *)(v19 + 36) )
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 56) + 360LL);
      else
        v21 = *(_QWORD *)(v20 + 72);
      *((_QWORD *)this + v9 + 335) = v21;
      *((_QWORD *)this + v9 + 335) += *((unsigned int *)this + v9 + 414);
      v22 = *((unsigned int *)this + v9 + 542);
      v23 = *((_QWORD *)this + v9 + 143);
      v24 = *v8;
      v62.pDmaBuffer = (void *)*((_QWORD *)this + v9 + 335);
      v25 = (void *)(v22 + *(_QWORD *)(v23 + 128));
      *((_QWORD *)this + v9 + 399) = v25;
      v26 = *((_DWORD *)this + v9 + 29);
      LODWORD(v22) = *((_DWORD *)this + v9 + 93) - *((_DWORD *)this + v9 + 542);
      v62.pDmaBufferPrivateData = v25;
      LODWORD(v25) = *((_DWORD *)this + v9 + 414);
      v27 = *((_QWORD *)this + 5123) == 0LL;
      v62.DmaSize = v26 - (_DWORD)v25;
      v62.DmaBufferPrivateDataSize = v22;
      v62.DmaBufferGpuVirtualAddress = *(_QWORD *)(v23 + 96);
      v62.DmaBufferWriteOffset = (unsigned int)v25;
      v62.Operation = DXGK_OPERATION_FLUSH_TLB;
      v62.FlushTlb.RootPageTableAddress = v24;
      v62.Transfer.TransferSize = v16;
      v62.MapApertureSegment.OffsetInPages = v17;
      v62.Transfer.Source.SegmentAddress = v18;
      if ( !v27 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(this, v7, &v62.FlushTlb, v9);
      v28 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v62);
      v31 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v62.pDmaBuffer) - *((_DWORD *)this + 2 * v9 + 670));
      v32 = LODWORD(v62.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v9 + 798);
      v33 = v28;
      if ( LODWORD(v62.pDmaBuffer) != *((_DWORD *)this + 2 * v9 + 670) || v32 )
      {
        if ( !*((_DWORD *)this + v9 + 1173) )
        {
          *((_DWORD *)this + v9 + 1173) = 1;
          ++*((_QWORD *)this + v9 + 619);
        }
        v34 = *((_BYTE *)this + 40937);
        v31 = *((_QWORD *)this + v9 + 619);
        if ( (v34 & 2) != 0 )
          *((_BYTE *)this + 40937) = v34 & 0xFD;
      }
      *((_DWORD *)this + v9 + 414) += TransferSize;
      if ( *((_DWORD *)this + v9 + 414) > *((_DWORD *)this + v9 + 29) )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v29);
        v39[3] = 270LL;
        v39[4] = 18LL;
        v39[5] = 0LL;
        v39[6] = 0LL;
        v39[7] = 0LL;
        WdLogEvent5_WdCriticalError(v39);
      }
      *((_DWORD *)this + v9 + 542) += v32;
      if ( *((_DWORD *)this + v9 + 542) > *((_DWORD *)this + v9 + 93) )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v29);
        v40[3] = 270LL;
        v40[4] = 19LL;
        v40[5] = 0LL;
        v40[6] = 0LL;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
      }
      if ( bTracingEnabled )
      {
        v30 = *((_QWORD *)this + v9 + 143);
        v35 = *((_QWORD *)this + 3);
        if ( v62.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          FillPattern = 0;
          if ( v62.Reserved.Reserved[20] < 2 )
          {
            TransferSize = v62.Transfer.TransferSize;
          }
          else if ( v62.Reserved.Reserved[20] == 2 )
          {
            TransferSize = v62.MapApertureSegment.OffsetInPages;
            FillPattern = v62.Fill.FillPattern;
          }
          else
          {
            TransferSize = 0LL;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v58) = v62.UpdatePageTable.UpdateMode;
            LODWORD(v56) = v62.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v53) = v62.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v55) = v62.Transfer.Destination.SegmentId;
            LODWORD(v52) = FillPattern;
            LODWORD(v50) = v62.ReadPhysical.SegmentId;
            *(_DWORD *)v48 = v33 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v35,
              v30,
              *(_QWORD *)v48,
              0LL,
              v50,
              TransferSize,
              v52,
              v53,
              v62.Transfer.Source.SegmentAddress.QuadPart,
              v62.UpdatePageTable.pPageTableEntries64KB,
              v55,
              v56,
              *(_OWORD *)&v62.Reserved.Reserved[14],
              v62.UpdatePageTable.hProcess,
              v58,
              v62.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v62.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v50) = v62.ReadPhysical.SegmentId;
            *(_DWORD *)v48 = v33 == -1071775743;
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              v35,
              v30,
              *(_QWORD *)v48,
              0LL,
              v50,
              *(_OWORD *)&v62.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v62.Reserved.Reserved[6]);
          }
        }
        else
        {
          switch ( v62.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v55) = v62.Transfer.Flags.0;
                LODWORD(v54) = v62.Transfer.Destination.SegmentId;
                LODWORD(v52) = v62.Transfer.Source.SegmentId;
                LODWORD(v50) = v62.Transfer.TransferOffset;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpTransfer,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  v62.Transfer.TransferSize,
                  v52,
                  v62.Transfer.Source.SegmentAddress.QuadPart,
                  v54,
                  v62.Transfer.Destination.SegmentAddress.QuadPart,
                  v55);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v52) = v62.Transfer.Source.SegmentId;
                LODWORD(v51) = v62.Fill.FillPattern;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpxqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpFill,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v62.Fill.FillSize,
                  v51,
                  v52,
                  v62.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v51) = v62.DiscardContent.SegmentId;
                LODWORD(v50) = v62.Transfer.TransferOffset;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpDiscard,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  v51,
                  v62.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v49 = v62.ReadPhysical.SegmentId;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpReadPhysical,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  *(_QWORD *)v49,
                  v62.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v49 = v62.ReadPhysical.SegmentId;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpWritePhysical,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  *(_QWORD *)v49,
                  v62.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v54) = 0;
                LODWORD(v53) = v62.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v50) = v62.Fill.FillPattern;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpMapApertureSegment,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  *(_OWORD *)&v62.Reserved.Reserved[6],
                  v53,
                  v54);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v53) = 0;
                LODWORD(v50) = v62.Fill.FillPattern;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqxxt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUnmapApertureSegment,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  *(_OWORD *)&v62.Reserved.Reserved[6],
                  v53);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v57) = v62.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v56) = v62.Transfer.MdlOffset;
                LODWORD(v55) = v62.Transfer.Flags.0;
                LODWORD(v54) = v62.Transfer.Destination.SegmentId;
                LODWORD(v52) = v62.Transfer.Source.SegmentId;
                LODWORD(v50) = v62.Transfer.TransferOffset;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSpecialLockTransfer,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  v62.Transfer.TransferSize,
                  v52,
                  v62.Transfer.Source.SegmentAddress.QuadPart,
                  v54,
                  v62.Transfer.Destination.SegmentAddress.QuadPart,
                  v55,
                  v56,
                  v57);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v57) = v62.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v56) = v62.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v53) = MEMORY[4];
                LODWORD(v52) = MEMORY[0];
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualTransfer,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  *(_OWORD *)&v62.SpecialLockTransfer.TransferOffset,
                  v52,
                  v53,
                  *(_OWORD *)&v62.Reserved.Reserved[6],
                  v62.UnmapApertureSegment.DummyPage.QuadPart,
                  v56,
                  v57,
                  v62.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v53) = MEMORY[0];
                LODWORD(v52) = v62.Transfer.Source.SegmentId;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpxxqqxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualFill,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  *(_OWORD *)&v62.SpecialLockTransfer.TransferOffset,
                  v52,
                  v53,
                  v62.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v50) = v62.Transfer.TransferOffset;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqxpx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpInitContextResource,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  *(_OWORD *)&v62.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v62.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v53) = v62.Transfer.Source.SegmentId;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpxxpq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUpdateContextAllocation,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  *(_OWORD *)&v62.Transfer.hAllocation,
                  v62.Transfer.TransferSize,
                  v53);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v52) = v62.Transfer.Source.SegmentId;
                LODWORD(v50) = v62.Transfer.TransferOffset;
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpNotifyResidency,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  v50,
                  v62.Transfer.TransferSize,
                  v52);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v48 = v33 == -1071775743;
                McTemplateK0pptpxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSignalMonitoredFence,
                  0LL,
                  v35,
                  v30,
                  *(_QWORD *)v48,
                  0LL,
                  *(_OWORD *)&v62.Transfer.hAllocation);
              }
              break;
            default:
              break;
          }
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 984);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 1970) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984)) = v9;
        v41 = &v62;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 24LL);
        v42 = 2LL;
        do
        {
          v11 += 8;
          v43 = *(_OWORD *)&v41->pDmaBuffer;
          v41 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v41 + 128);
          *(v11 - 8) = v43;
          *(v11 - 7) = *(_OWORD *)&v41[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v41[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v41[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v41[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v41[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v41[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v41[-1].DmaBufferGpuVirtualAddress;
          --v42;
        }
        while ( v42 );
        *v11 = *(_OWORD *)&v41->pDmaBuffer;
        v11[1] = *(_OWORD *)&v41->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v41->MultipassOffset;
        v11[3] = *(_OWORD *)&v41->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 344) = v33;
        TransferSize = 360LL * *((unsigned int *)this + 1970);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 984) + 352) = v31;
        if ( ++*((_DWORD *)this + 1970) >= *((_DWORD *)this + 1966) )
        {
          ++*((_DWORD *)this + 1971);
          *((_DWORD *)this + 1970) = 0;
        }
      }
      if ( (int)v33 < 0 )
      {
        if ( (_DWORD)v33 == -1071775743 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(TransferSize);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
          v8 = a3;
          v7 = a4;
          goto LABEL_8;
        }
        v44 = *((_QWORD *)this + 3);
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11);
        v45[5] = &v62;
        v45[3] = 270LL;
        v45[4] = 11LL;
        v45[6] = v33;
        v45[7] = v44;
        WdLogEvent5_WdCriticalError(v45);
      }
      v7 = a4;
      v27 = (_DWORD)v33 == -1071775743;
      v8 = a3;
      v18.QuadPart = a7;
      v17 = a6;
      v16 = (SIZE_T)a5;
    }
    while ( v27 );
    v37 = *(_DWORD **)(1584LL * (unsigned int)v9 + *((_QWORD *)this + 5027) + 440);
    if ( (*v37 & 0x20) != 0 && (*((_DWORD *)a4 + 24) & 2) == 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)v37, &EventPerformanceWarning, v30, 23);
      v59 = -1;
      v60 = 0LL;
      if ( (qword_1C0051010 & 2) != 0 )
      {
        v61 = 1;
        v59 = 8010;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)v37, &EventProfilerEnter, v30, 8010);
      }
      else
      {
        v61 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
      if ( (*((_DWORD *)a4 + 24) & 4) == 0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 232LL), 1);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 232LL), 0);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
      if ( v61 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v59);
      }
    }
  }
}
