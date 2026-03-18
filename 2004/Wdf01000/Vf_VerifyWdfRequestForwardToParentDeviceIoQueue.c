/*
 * XREFs of Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00C6078
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C004A210 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C65C4 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(
        _FX_DRIVER_GLOBALS *fxDriverGlobals,
        FxRequest *request)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  int CanBeCompleted; // edi
  unsigned __int64 _a2; // rax
  const void *_a1; // r8
  int _a3; // r10d
  const void *ObjectHandleUnchecked; // rax
  unsigned int v10; // r10d

  if ( request->m_IrpAllocation != 2
    || !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(fxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    CanBeCompleted = -1073741808;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(request);
    WPP_IFR_SF_qL(fxDriverGlobals, 2u, 0x10u, 0x48u, WPP_FxRequestApi_cpp_Traceguids, ObjectHandleUnchecked, v10);
    goto LABEL_10;
  }
  if ( v4->FxVerifierOn )
    CanBeCompleted = FxRequest::Vf_VerifyRequestCanBeCompleted(request, v4);
  else
    CanBeCompleted = 0;
  if ( CanBeCompleted >= 0 && request->m_Irp.m_Irp->CurrentLocation <= 1 )
  {
    CanBeCompleted = -1073741808;
    _a2 = FxObject::GetObjectHandleUnchecked(request);
    WPP_IFR_SF_qid(fxDriverGlobals, 2u, 0x10u, 0x49u, WPP_FxRequestApi_cpp_Traceguids, _a1, _a2, _a3);
LABEL_10:
    FxVerifierDbgBreakPoint(fxDriverGlobals);
  }
  return (unsigned int)CanBeCompleted;
}
