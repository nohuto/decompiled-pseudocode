/*
 * XREFs of ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4
 * Callers:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048F38 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004D320 (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18006D6C8 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPD.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800E4E60 (-PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800E83EC (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800EF250 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801F2634 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INT.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x1801F26D8 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREP.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801F2960 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801F2FB0 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801F5180 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801F529C (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801F5400 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJXZ @ 0x180275400 (-SendUpdateToRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetManipulationManager(CComposition *this, struct CManipulationManager **a2)
{
  struct CManipulationManager *v3; // rax
  __int64 v4; // rcx

  v3 = 0LL;
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = (struct CManipulationManager *)*((_QWORD *)this + 30);
  }
  *a2 = v3;
  return *((_QWORD *)this + 30) == 0LL ? 0x80004005 : 0;
}
