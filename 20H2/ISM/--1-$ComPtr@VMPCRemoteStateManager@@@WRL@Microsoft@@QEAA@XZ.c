/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180068FA4
 * Callers:
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x18004E339 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x18004EC5F (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$1 @ 0x180050B8A (_SystemCursorController--SystemCursorController_--_1_--dtor$1.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F8614 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x1800F884E (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$3 @ 0x1800F95D3 (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$5 @ 0x1800F9C1A (_DragNDropProcessor--HitTest_--_1_--dtor$5.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1800FAC0E (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x1800FB3CE (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x1800FB756 (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FD824 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     _ResizeProcessor::CancelResize_::_1_::dtor$0 @ 0x1800FDA03 (_ResizeProcessor--CancelResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1800FEE9F (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEF6C (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     _ResizeProcessor::StartResize_::_1_::dtor$0 @ 0x1800FF155 (_ResizeProcessor--StartResize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(a1);
}
