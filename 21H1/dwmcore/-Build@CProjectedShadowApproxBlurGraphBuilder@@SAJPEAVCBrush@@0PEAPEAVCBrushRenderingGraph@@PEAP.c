/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001EF08
 * Callers:
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x18001EE7C (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 * Callees:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001EFCC (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x18009CA98 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1350 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        struct CBrush *a1,
        struct CBrush *a2,
        struct CBrushRenderingGraph **a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  CBrushRenderingGraph *v8; // rax
  unsigned int v9; // ecx
  CBrushRenderingGraph *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  CBrushRenderingGraph *v15; // [rsp+30h] [rbp-28h] BYREF
  CBrushRenderingGraph *v16; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  v8 = (CBrushRenderingGraph *)DefaultHeap::Alloc(0xD0uLL);
  if ( v8 )
    v10 = CBrushRenderingGraph::CBrushRenderingGraph(v8);
  else
    v10 = 0LL;
  v15 = v10;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v10)(v10);
    v17 = 0;
    v16 = v10;
    v11 = CProjectedShadowApproxBlurGraphBuilder::Build((CProjectedShadowApproxBlurGraphBuilder *)&v16, a1, a2, a4);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Bu, 0LL);
    }
    else
    {
      v15 = 0LL;
      *a3 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v15);
  return v13;
}
