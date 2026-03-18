/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980
 * Callers:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18001164C (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ?RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18007E950 (-RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBatchCommand@@$0-0@gsl@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800E28B4 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall DynArray<CBatchCommand *,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  if ( (int)v3 + (int)a3 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    result = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a3, a2);
    v8 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, result, 0xC0u);
      return v8;
    }
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8 * v3), a2, 8LL * (unsigned int)a3);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v5;
  }
  return result;
}
