/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E234
 * Callers:
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x18001E1A8 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 * Callees:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E2F8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x180056854 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
