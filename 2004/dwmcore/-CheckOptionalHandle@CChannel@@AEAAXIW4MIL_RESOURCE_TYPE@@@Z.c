/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009E5CC
 * Callers:
 *     ?VisualSetTransform@CChannel@@UEAAJII@Z @ 0x180020DB0 (-VisualSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x18009CAB0 (-VisualSetContent@CChannel@@UEAAJII@Z.c)
 *     ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x1800CD0A0 (-EffectGroupUpdate@CChannel@@UEAAJINII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800CE600 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?VisualSetEffect@CChannel@@UEAAJII@Z @ 0x1800CEB30 (-VisualSetEffect@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x1800CFB00 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?VisualSetClip@CChannel@@UEAAJII@Z @ 0x1800D0170 (-VisualSetClip@CChannel@@UEAAJII@Z.c)
 *     ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x1800D15F0 (-SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z.c)
 *     ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x1800D1DA0 (-ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43.c)
 *     ?WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z @ 0x1800D2540 (-WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z.c)
 *     ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z @ 0x1800D36B0 (-CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMo.c)
 *     ?VisualSetInteraction@CChannel@@UEAAJII@Z @ 0x1800D66E0 (-VisualSetInteraction@CChannel@@UEAAJII@Z.c)
 *     ?RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z @ 0x1800D8EF0 (-RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x180151170 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x1801512C0 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x1801514C0 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z @ 0x180151850 (-HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180151A20 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z @ 0x180151D00 (-MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x180151DA0 (-MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x180151ED0 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801526D0 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetColorTransform@CChannel@@UEAAJII@Z @ 0x180152F60 (-VisualSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180153170 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EFA0 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
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
