/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18006677C
 * Callers:
 *     ?VisualSetTransform@CChannel@@UEAAJII@Z @ 0x180020890 (-VisualSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x180069BE0 (-VisualSetContent@CChannel@@UEAAJII@Z.c)
 *     ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x1800CC630 (-EffectGroupUpdate@CChannel@@UEAAJINII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800CD740 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?VisualSetEffect@CChannel@@UEAAJII@Z @ 0x1800CDBE0 (-VisualSetEffect@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x1800CEB20 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?VisualSetClip@CChannel@@UEAAJII@Z @ 0x1800CF570 (-VisualSetClip@CChannel@@UEAAJII@Z.c)
 *     ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x1800D0CB0 (-SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z.c)
 *     ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x1800D14F0 (-ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43.c)
 *     ?WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z @ 0x1800D19C0 (-WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z.c)
 *     ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z @ 0x1800D2F70 (-CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMo.c)
 *     ?VisualSetInteraction@CChannel@@UEAAJII@Z @ 0x1800D60E0 (-VisualSetInteraction@CChannel@@UEAAJII@Z.c)
 *     ?RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z @ 0x1800D8740 (-RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x18014F260 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x18014F3B0 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x18014F5B0 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z @ 0x18014F940 (-HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18014FB10 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z @ 0x18014FDF0 (-MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x18014FE90 (-MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x18014FFC0 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801507C0 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetColorTransform@CChannel@@UEAAJII@Z @ 0x180151050 (-VisualSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180151260 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180068CD0 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CChannel::CheckOptionalHandle(__int64 a1, int a2)
{
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v2 = CHandleTable::VerifyHandleTableEntry(a1 + 16);
    if ( v2 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
  }
}
