/*
 * XREFs of ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7D50
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E804 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002C228 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ?Initialize@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002C2BC (-Initialize@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x18002C350 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049390 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x180089498 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18008A320 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18008A548 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x18008BA20 (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180097A9C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x18009A27C (--1CBrush@@MEAA@XZ.c)
 *     ?OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B73D0 (-OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800B779C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800C0E40 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800C1488 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800C14F0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800C4C50 (-OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800CBE34 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800D0070 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1800D0D20 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800D6240 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800DCC38 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x1801B9190 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x1801DBCE0 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1801E8D10 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1802054F8 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18022C278 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18022C5DC (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18022C668 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18022C6E4 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x180231C40 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1802359B8 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x180236074 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
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
