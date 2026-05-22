/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180069044
 * Callers:
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x18004E389 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x18004ECAF (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$1 @ 0x180050BDA (_SystemCursorController--SystemCursorController_--_1_--dtor$1.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F86A4 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x1800F88DE (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$3 @ 0x1800F9663 (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$5 @ 0x1800F9CAA (_DragNDropProcessor--HitTest_--_1_--dtor$5.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1800FAC9E (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x1800FB45E (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x1800FB7E6 (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FD8B4 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     _ResizeProcessor::CancelResize_::_1_::dtor$0 @ 0x1800FDA93 (_ResizeProcessor--CancelResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1800FEF2F (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEFFC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     _ResizeProcessor::StartResize_::_1_::dtor$0 @ 0x1800FF1E5 (_ResizeProcessor--StartResize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(a1);
}
