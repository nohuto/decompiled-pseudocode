/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18003812C
 * Callers:
 *     ?VisualSetTransform@CChannel@@UEAAJII@Z @ 0x1800211E0 (-VisualSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x1800C3140 (-VisualSetContent@CChannel@@UEAAJII@Z.c)
 *     ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x1800C60A0 (-EffectGroupUpdate@CChannel@@UEAAJINII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800C6D50 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?VisualSetEffect@CChannel@@UEAAJII@Z @ 0x1800C7220 (-VisualSetEffect@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x1800C83F0 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?VisualSetClip@CChannel@@UEAAJII@Z @ 0x1800C8D60 (-VisualSetClip@CChannel@@UEAAJII@Z.c)
 *     ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x1800C9FD0 (-SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z.c)
 *     ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x1800CA950 (-ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43.c)
 *     ?WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z @ 0x1800CB030 (-WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z.c)
 *     ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z @ 0x1800CB7B0 (-CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMo.c)
 *     ?VisualSetInteraction@CChannel@@UEAAJII@Z @ 0x1800CE5A0 (-VisualSetInteraction@CChannel@@UEAAJII@Z.c)
 *     ?RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z @ 0x1800D0D50 (-RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x180152CE0 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x180152E30 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x180153030 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z @ 0x1801533C0 (-HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180153590 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z @ 0x180153870 (-MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x180153910 (-MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x180153A40 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x180154240 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetColorTransform@CChannel@@UEAAJII@Z @ 0x180154AD0 (-VisualSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180154CE0 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180038B10 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
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
