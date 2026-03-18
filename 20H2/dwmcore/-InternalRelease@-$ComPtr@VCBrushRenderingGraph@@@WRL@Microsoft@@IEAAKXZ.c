/*
 * XREFs of ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E234 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x180024248 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180024494 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180025390 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180026D60 (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002FF88 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ?Initialize@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18003001C (-Initialize@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800300B0 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180056130 (-OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800568C0 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800642F0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180064AF0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ??1CBrush@@MEAA@XZ @ 0x18006D10C (--1CBrush@@MEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B5EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800B66A0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800B6708 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800C4C90 (-OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800CB3F4 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800CF470 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1800D0390 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800D5C40 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800DC548 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x1801B72A0 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x1801D9E50 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1801E6ED0 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1802036B8 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18022AE08 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18022B16C (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18022B1F8 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18022B274 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x180230CB0 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180234A28 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1802350E4 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
