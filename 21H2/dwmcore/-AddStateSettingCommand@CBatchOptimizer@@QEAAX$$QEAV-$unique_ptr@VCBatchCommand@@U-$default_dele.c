/*
 * XREFs of ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180011354
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1800B27A0 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180011480 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x1800114CC (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180011500 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180011544 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 */

void __fastcall CBatchOptimizer::AddStateSettingCommand(CBatchOptimizer *this, CBatchCommand **a2)
{
  __int64 v4; // rax
  bool v5; // zf
  CBatchCommand *v6; // rdx
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  int NearestRenderingLayerUnderEmptyLayer; // eax
  int v12; // edx
  int *v13; // r9
  __int64 v14; // r8

  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  CBatchCommand::ApplyRenderState(*a2, this);
  v4 = 520LL * *((int *)this + *((_DWORD *)this + 8) + 11);
  if ( *(_DWORD *)((char *)this + v4 + 100)
    || (v5 = *(_DWORD *)((char *)this + v4 + 96) == 20, *(_OWORD *)((char *)this + v4 + 80) = *((_OWORD *)this + 1), v5) )
  {
    *((_DWORD *)this + 6) = 24;
    *((_BYTE *)this + 28) = 3;
    CBatchOptimizer::AppendLayer(this);
  }
  v6 = *a2;
  v7 = *((int *)this + *((_DWORD *)this + 8) + 11);
  *a2 = 0LL;
  v8 = (char *)this + 520 * v7;
  v9 = *((unsigned int *)v8 + 24);
  *((_DWORD *)v8 + 24) = v9 + 1;
  *(_QWORD *)&v8[8 * v9 + 120] = v6;
  v10 = *((_DWORD *)this + 8);
  if ( v10 > 1 )
  {
    NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(this, v10 - 1);
    v12 = NearestRenderingLayerUnderEmptyLayer;
    if ( NearestRenderingLayerUnderEmptyLayer != v10 - 1 )
    {
      v13 = (int *)((char *)this + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
      v14 = NearestRenderingLayerUnderEmptyLayer;
      while ( *((_QWORD *)this + 65 * *v13 + 10) != *((_QWORD *)this + 2) )
      {
        ++v12;
        ++v14;
        ++v13;
        if ( v14 == v10 - 1 )
          return;
      }
      CBatchOptimizer::DiscardEmptyLayers(this, v12 + 1, v10 - v12 - 1);
    }
  }
}
