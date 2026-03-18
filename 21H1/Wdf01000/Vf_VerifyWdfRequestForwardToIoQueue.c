/*
 * XREFs of Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00C5FE4
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000BAF0 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C65C4 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToIoQueue(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxRequest *request)
{
  FxRequest *v2; // r9
  bool IsVersionGreaterThanOrEqualTo; // al
  _FX_DRIVER_GLOBALS *v5; // rcx
  unsigned int v6; // r8d
  const void *_a1; // rax
  unsigned __int8 v9; // dl

  v2 = request;
  LOBYTE(request) = 2;
  if ( v2->m_IrpAllocation == 2
    && (IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                          FxDriverGlobals,
                                          (unsigned int)request,
                                          0xBu),
        v6 = 0,
        IsVersionGreaterThanOrEqualTo) )
  {
    if ( v5->FxVerifierOn )
      return (unsigned int)FxRequest::Vf_VerifyRequestCanBeCompleted(v2, v5);
    return v6;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v2);
    WPP_IFR_SF_qL(FxDriverGlobals, v9, 0x10u, 0x47u, WPP_FxRequestApi_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 3221225488LL;
  }
}
