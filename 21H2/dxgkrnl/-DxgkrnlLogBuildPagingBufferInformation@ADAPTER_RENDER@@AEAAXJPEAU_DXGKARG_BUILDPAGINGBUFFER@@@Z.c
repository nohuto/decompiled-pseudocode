/*
 * XREFs of ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00F79E0
 * Callers:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00F7790 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _DXGKARG_BUILDPAGINGBUFFER *a3,
        __int64 a4)
{
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // eax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  SIZE_T TransferSize; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax

  Operation = a3->Operation;
  v6 = (int)a2;
  if ( Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v8[3] = v6;
    v8[4] = a3->Fill.FillSize;
    v8[5] = a3->UpdatePageTable.hProcess;
    v8[6] = a3->Transfer.Destination.SegmentId;
    this = (ADAPTER_RENDER *)a3->UpdatePageTable.NumPageTableEntries;
    v8[7] = this;
LABEL_5:
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v9, a3, a4);
    v10[3] = v6;
    v10[4] = a3->Transfer.hAllocation;
    v10[5] = a3->Transfer.TransferOffset;
    this = (ADAPTER_RENDER *)a3->Transfer.TransferSize;
    v10[6] = this;
LABEL_6:
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v9, a3, a4);
    v11[3] = v6;
    v11[4] = a3->Transfer.hAllocation;
    v11[5] = a3->Transfer.Source.SegmentId & 1;
    v11[6] = a3->Transfer.TransferOffset;
    TransferSize = a3->Transfer.TransferSize;
LABEL_7:
    v11[7] = TransferSize;
  }
  else if ( Operation == DXGK_OPERATION_FLUSH_TLB )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = v6;
    v7[4] = a3->Transfer.TransferSize;
    v7[5] = a3->ReadPhysical.SegmentId;
    v7[6] = a3->Fill.FillSize;
  }
  else
  {
    v9 = 0x1C0000000uLL;
    switch ( Operation )
    {
      case DXGK_OPERATION_TRANSFER:
      case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
        v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v11[3] = v6;
        v11[4] = a3->Transfer.hAllocation;
        v11[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v11[6] = a3->Transfer.Destination.SegmentId;
        TransferSize = a3->Transfer.Destination.SegmentAddress.QuadPart;
        goto LABEL_7;
      case DXGK_OPERATION_FILL:
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v17[3] = v6;
        v17[4] = a3->Transfer.hAllocation;
        v17[5] = a3->Transfer.Source.SegmentId;
        v17[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_DISCARD_CONTENT:
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v14[3] = v6;
        v14[4] = a3->Transfer.hAllocation;
        v14[5] = a3->DiscardContent.SegmentId;
        v14[6] = a3->Transfer.TransferSize;
        break;
      case DXGK_OPERATION_READ_PHYSICAL:
      case DXGK_OPERATION_WRITE_PHYSICAL:
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v18[3] = v6;
        v18[4] = a3->ReadPhysical.SegmentId;
        v18[5] = a3->Fill.FillSize;
        break;
      case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
      case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v13[3] = v6;
        v13[4] = a3->Transfer.hAllocation;
        v13[5] = a3->Fill.FillSize;
        v13[6] = a3->Fill.FillPattern;
        break;
      case DXGK_OPERATION_VIRTUAL_TRANSFER:
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v16[3] = v6;
        v16[4] = a3->Transfer.hAllocation;
        v16[5] = a3->MapApertureSegment.OffsetInPages;
        v16[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_VIRTUAL_FILL:
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v15[3] = v6;
        v15[4] = a3->Transfer.hAllocation;
        v15[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
        goto LABEL_5;
      case DXGK_OPERATION_NOTIFY_RESIDENCY:
        goto LABEL_6;
      default:
        v19 = WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        *(_QWORD *)(v19 + 24) = v6;
        *(_QWORD *)(v19 + 32) = a3->Operation;
        break;
    }
  }
}
