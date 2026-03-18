/*
 * XREFs of ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800E28B4
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007E784 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1800B27A0 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F1140 (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::AddBatchCommand(__int64 a1, __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = *a2;
  v3 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, &v7, 1LL);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x91u);
  else
    *a2 = 0LL;
  return v5;
}
