/*
 * XREFs of ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x180012090
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800784A0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007A1E4 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x1800121C0 (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180012214 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180012274 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBatchOptimizer::AddStateSettingDrawListEntry(
        CBatchOptimizer *this,
        struct CStateSettingDrawListEntry *a2)
{
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int NearestRenderingLayerUnderEmptyLayer; // eax
  int v9; // edx
  int *v10; // r9
  __int64 v11; // r8
  bool v12; // zf

  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  ++*((_DWORD *)a2 + 6);
  (**(void (__fastcall ***)(CBatchOptimizer *, _QWORD))this)(this, *((_QWORD *)a2 + 4));
  v4 = 520LL * *((int *)this + *((int *)this + 8) + 11);
  if ( *(_DWORD *)((char *)this + v4 + 100)
    || (v12 = *(_DWORD *)((char *)this + v4 + 96) == 20, *(_OWORD *)((char *)this + v4 + 80) = *((_OWORD *)this + 1),
                                                         v12) )
  {
    *((_DWORD *)this + 6) = 24;
    *((_BYTE *)this + 28) = 3;
    CBatchOptimizer::AppendLayer(this);
  }
  v5 = (char *)this + 520 * *((int *)this + *((int *)this + 8) + 11);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v6 = *((unsigned int *)v5 + 24);
  *((_DWORD *)v5 + 24) = v6 + 1;
  *(_QWORD *)&v5[8 * v6 + 120] = (char *)a2 + 16;
  v7 = *((_DWORD *)this + 8);
  if ( v7 > 1 )
  {
    NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(this, v7 - 1);
    v9 = NearestRenderingLayerUnderEmptyLayer;
    if ( NearestRenderingLayerUnderEmptyLayer != v7 - 1 )
    {
      v10 = (int *)((char *)this + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
      v11 = NearestRenderingLayerUnderEmptyLayer;
      while ( *((_QWORD *)this + 65 * *v10 + 10) != *((_QWORD *)this + 2) )
      {
        ++v9;
        ++v11;
        ++v10;
        if ( v11 == v7 - 1 )
          return;
      }
      CBatchOptimizer::DiscardEmptyLayers(this, v9 + 1, v7 - v9 - 1);
    }
  }
}
