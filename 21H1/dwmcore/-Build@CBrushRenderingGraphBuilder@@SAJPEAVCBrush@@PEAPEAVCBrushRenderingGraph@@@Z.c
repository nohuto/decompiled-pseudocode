/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18009C9F8
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1800C9800 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800CE100 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x1801BBB00 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x1801DE660 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1801EB690 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18009C7A0 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x18009CA98 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1350 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(struct CBrush *a1, struct CBrushRenderingGraph **a2)
{
  CBrushRenderingGraph *v4; // rax
  __int64 v5; // rcx
  CBrushRenderingGraph *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  CBrushRenderingGraph *v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  CBrushRenderingGraph *v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CBrushRenderingGraph *)DefaultHeap::Alloc(0xD0uLL);
  if ( v4 )
    v6 = CBrushRenderingGraph::CBrushRenderingGraph(v4);
  else
    v6 = 0LL;
  v13 = v6;
  if ( v6 )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v6)(v6);
    v12 = 0;
    v11 = v6;
    v7 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v11, a1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x18u, 0LL);
    }
    else
    {
      v13 = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v13);
  return v9;
}
