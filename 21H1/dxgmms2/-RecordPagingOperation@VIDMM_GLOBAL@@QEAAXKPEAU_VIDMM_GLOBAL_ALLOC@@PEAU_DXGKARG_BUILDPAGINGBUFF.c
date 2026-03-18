/*
 * XREFs of ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C007525C
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00753D4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 * Callees:
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
 */

void __fastcall VIDMM_GLOBAL::RecordPagingOperation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // r9
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  DXGK_PAGETABLEUPDATEMODE UpdateMode; // edx
  UINT FillPattern; // r11d
  SIZE_T TransferSize; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int32 v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // rdx
  _OWORD *v34; // rdx
  __int128 v35; // xmm1

  v12 = 2LL;
  if ( !bTracingEnabled )
    goto LABEL_11;
  v13 = *((_QWORD *)this + a2 + 143);
  v14 = *((_QWORD *)this + 3);
  Operation = a4->Operation;
  if ( Operation > DXGK_OPERATION_VIRTUAL_TRANSFER )
  {
    v16 = Operation - 9;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v23 = v18 - 1;
          if ( v23 )
          {
            v26 = v23 - 1;
            if ( v26 )
            {
              v27 = v26 - 2;
              if ( v27 )
              {
                if ( v27 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                  McTemplateK0pptpxx_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventPagingOpSignalMonitoredFence,
                    0LL,
                    v14,
                    v13,
                    a5 == -1071775743,
                    a3,
                    a4->UpdateContextAllocation.ContextAllocation,
                    a4->Fill.FillSize);
              }
              else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                McTemplateK0pptpqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpNotifyResidency,
                  0LL,
                  v14,
                  v13,
                  a5 == -1071775743,
                  a3,
                  a4->Transfer.TransferOffset,
                  a4->Transfer.TransferSize,
                  a4->Transfer.Source.SegmentId);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              McTemplateK0pptpxxpq_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpUpdateContextAllocation,
                0LL,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->UpdateContextAllocation.ContextAllocation,
                a4->Fill.FillSize,
                a4->Transfer.TransferSize,
                a4->Transfer.Source.SegmentId);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->ReadPhysical.SegmentId,
              a4->Fill.FillSize,
              a4->Transfer.TransferSize,
              a4->MapApertureSegment.OffsetInPages,
              a4->Transfer.Source.SegmentAddress.QuadPart);
          }
        }
        else
        {
          UpdateMode = a4->UpdatePageTable.UpdateMode;
          FillPattern = 0;
          if ( (unsigned int)UpdateMode < DXGK_PAGETABLEUPDATE_GPU_PHYSICAL )
          {
            TransferSize = a4->Transfer.TransferSize;
          }
          else if ( UpdateMode == DXGK_PAGETABLEUPDATE_GPU_PHYSICAL )
          {
            TransferSize = a4->MapApertureSegment.OffsetInPages;
            FillPattern = a4->Fill.FillPattern;
          }
          else
          {
            TransferSize = 0LL;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->ReadPhysical.SegmentId,
              TransferSize,
              FillPattern,
              a4->UnmapApertureSegment.DummyPage.HighPart,
              a4->Transfer.Source.SegmentAddress.QuadPart,
              a4->UpdatePageTable.pPageTableEntries64KB,
              a4->Transfer.Destination.SegmentId,
              a4->Transfer.Destination.SegmentAddress.HighPart,
              a4->TransferVirtual.DestinationPageTable,
              a4->UpdatePageTable.AllocationOffsetInBytes,
              a4->UpdatePageTable.hProcess,
              a4->Reserved.Reserved[20],
              a4->UpdatePageTable.FirstPteVirtualAddress);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        McTemplateK0pptpqxpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&EventPagingOpInitContextResource,
          0LL,
          v14,
          v13,
          a5 == -1071775743,
          a3,
          a4->Transfer.TransferOffset,
          a4->Transfer.TransferSize,
          a4->MapApertureSegment.OffsetInPages,
          a4->Transfer.Source.SegmentAddress.QuadPart);
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      McTemplateK0pptpxxqqxx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpVirtualFill,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        *a8,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        *((_QWORD *)a8 + 1));
    }
    goto LABEL_11;
  }
  if ( Operation == DXGK_OPERATION_VIRTUAL_TRANSFER )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpVirtualTransfer,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        *a8,
        a8[1],
        a4->MapApertureSegment.OffsetInPages,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->UnmapApertureSegment.DummyPage.QuadPart,
        a4->Transfer.Destination.SegmentAddress.LowPart,
        a4->Transfer.Destination.SegmentAddress.HighPart,
        a4->TransferVirtual.DestinationPageTable,
        *((_QWORD *)a8 + 1),
        *((_QWORD *)a8 + 2));
  }
  else if ( Operation )
  {
    v24 = Operation - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          McTemplateK0pptpqqx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            (__int64)&EventPagingOpDiscard,
            0LL,
            v14,
            v13,
            a5 == -1071775743,
            a3,
            a4->Transfer.TransferOffset,
            a4->DiscardContent.SegmentId,
            a4->Transfer.TransferSize);
        goto LABEL_11;
      }
      v28 = v25 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSpecialLockTransfer,
                  0LL,
                  v14,
                  v13,
                  a5 == -1071775743,
                  a3,
                  a4->Transfer.TransferOffset,
                  a4->Transfer.TransferSize,
                  a4->Transfer.Source.SegmentId,
                  a4->Transfer.Source.SegmentAddress.QuadPart,
                  a4->Transfer.Destination.SegmentId,
                  a4->Transfer.Destination.SegmentAddress.QuadPart,
                  a4->Transfer.Flags.Value,
                  a4->Transfer.MdlOffset,
                  a4->SpecialLockTransfer.SwizzlingRangeData);
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              McTemplateK0pptpqxxt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpUnmapApertureSegment,
                0LL,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->Fill.FillPattern,
                a4->MapApertureSegment.OffsetInPages,
                a4->Transfer.Source.SegmentAddress.QuadPart,
                a7);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            McTemplateK0pptpqxxqt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpMapApertureSegment,
              0LL,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->Fill.FillPattern,
              a4->MapApertureSegment.OffsetInPages,
              a4->Transfer.Source.SegmentAddress.QuadPart,
              a4->Transfer.Destination.SegmentAddress.LowPart,
              a7);
          }
          goto LABEL_11;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
          goto LABEL_11;
        v32 = &EventPagingOpWritePhysical;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
          goto LABEL_11;
        v32 = &EventPagingOpReadPhysical;
      }
      McTemplateK0pptqx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v32,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a4->ReadPhysical.SegmentId,
        a4->Fill.FillSize);
      goto LABEL_11;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pptpxqqx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpFill,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Fill.FillPattern,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPagingOpTransfer,
      0LL,
      v14,
      v13,
      a5 == -1071775743,
      a3,
      a4->Transfer.TransferOffset,
      a4->Transfer.TransferSize,
      a4->Transfer.Source.SegmentId,
      a4->Transfer.Source.SegmentAddress.QuadPart,
      a4->Transfer.Destination.SegmentId,
      a4->Transfer.Destination.SegmentAddress.QuadPart,
      a4->Transfer.Flags.Value);
  }
LABEL_11:
  v22 = *((_QWORD *)this + 984);
  if ( v22 )
  {
    v33 = 360LL * *((unsigned int *)this + 1970);
    if ( a3 )
    {
      *(_QWORD *)(v33 + v22 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)(v33 + v22 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984)) = a2;
    v34 = (_OWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 24LL);
    do
    {
      *v34 = *(_OWORD *)&a4->pDmaBuffer;
      v34[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
      v34[2] = *(_OWORD *)&a4->MultipassOffset;
      v34[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
      v34[4] = *(_OWORD *)&a4->Reserved.Reserved[6];
      v34[5] = *(_OWORD *)&a4->Reserved.Reserved[10];
      v34[6] = *(_OWORD *)&a4->Reserved.Reserved[14];
      v34 += 8;
      v35 = *(_OWORD *)&a4->Reserved.Reserved[18];
      a4 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)a4 + 128);
      *(v34 - 1) = v35;
      --v12;
    }
    while ( v12 );
    *v34 = *(_OWORD *)&a4->pDmaBuffer;
    v34[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
    v34[2] = *(_OWORD *)&a4->MultipassOffset;
    v34[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1970) + *((_QWORD *)this + 984) + 344) = a5;
    *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 1970))++ + *((_QWORD *)this + 984) + 352) = a6;
    if ( *((_DWORD *)this + 1970) >= *((_DWORD *)this + 1966) )
    {
      *((_DWORD *)this + 1970) = 0;
      ++*((_DWORD *)this + 1971);
    }
  }
}
