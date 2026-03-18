/*
 * XREFs of ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?Initialize@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002C418 (-Initialize@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002C4AC (-Initialize@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002C540 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ?Initialize@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18002C5D4 (-Initialize@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x18002C668 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180035A74 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800360F0 (-OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180040394 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x180042A74 (--1CBrush@@MEAA@XZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004D958 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x18004E060 (--4-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800B0158 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800E0150 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E0BC8 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800E5810 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800EC17C (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800EF78C (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1800F3720 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x180181DB0 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180186268 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x180186AAC (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18018D208 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18018D6C8 (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18018D75C (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@PEAW4PointerResult@@@Z @ 0x18018D7E0 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x18020AB20 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x1802294C0 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x18023A8D0 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18025A198 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
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
