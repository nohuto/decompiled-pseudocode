/*
 * XREFs of Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00C7178
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C0064550 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C76BC (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(
        _FX_DRIVER_GLOBALS *fxDriverGlobals,
        FxRequest *request)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  int CanBeCompleted; // edi
  const void *_a2; // rax
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
  {
    CanBeCompleted = FxRequest::Vf_VerifyRequestCanBeCompleted(request, v4);
    if ( CanBeCompleted < 0 )
      return (unsigned int)CanBeCompleted;
  }
  else
  {
    CanBeCompleted = 0;
  }
  if ( request->m_Irp.m_Irp->CurrentLocation <= 1 )
  {
    CanBeCompleted = -1073741808;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(request);
    WPP_IFR_SF_qqd(fxDriverGlobals, 2u, 0x10u, 0x49u, WPP_FxRequestApi_cpp_Traceguids, _a1, _a2, _a3);
LABEL_10:
    FxVerifierDbgBreakPoint(fxDriverGlobals);
  }
  return (unsigned int)CanBeCompleted;
}
