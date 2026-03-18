/*
 * XREFs of ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F1140
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180279458 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$emplace_back@AEAPEAVCRenderingBatchCommand@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCRenderingBatchCommand@@@Z @ 0x1800B6B1C (--$emplace_back@AEAPEAVCRenderingBatchCommand@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@st.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800E28B4 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 */

__int64 __fastcall CDrawListEntryBatch::AppendRenderCommand(__int64 a1, CBatchCommand **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v6; // rbx
  __int64 v8; // rax
  CBatchOptimizer *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  ++dword_1803D3128;
  v4 = 0;
  v6 = (_QWORD *)((char *)*a2 + 8);
  if ( *((_DWORD *)*a2 + 23) != 5
    || (*(_BYTE *)(*v6 + 48LL) & 8) == 0
    || !CMILMatrix::Is2DAxisAlignedPreserving((CBatchCommand *)((char *)*a2 + 24), (__int64)a2, a3, a4) )
  {
    v6 = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(CBatchOptimizer **)(v8 + 160);
  if ( v9 )
  {
    CBatchOptimizer::AddRenderingCommand(v9, a2);
  }
  else
  {
    v10 = CDrawListBatchManager::AddBatchCommand(v8 + 24, (__int64 *)a2);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x81u);
      return v4;
    }
  }
  if ( v6 )
  {
    v13 = v6;
    std::deque<CMegaRect>::emplace_back<CRenderingBatchCommand * &>((_QWORD *)(a1 + 112), &v13);
  }
  return v4;
}
