/*
 * XREFs of ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801773B0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008EB40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008FBC0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B4370 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B4750 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B4820 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@wil@@QEAA_NXZ @ 0x1800E67A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasProtectedContent(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::GetImpl'::`2'::impl) )
    return (*((_BYTE *)this + 95) & 4) != 0;
  if ( (*((_BYTE *)this + 95) & 4) != 0 )
    return 1;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 145LL)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 232LL))(*((_QWORD *)this + 31)) )
    {
      return 1;
    }
  }
  return v2;
}
