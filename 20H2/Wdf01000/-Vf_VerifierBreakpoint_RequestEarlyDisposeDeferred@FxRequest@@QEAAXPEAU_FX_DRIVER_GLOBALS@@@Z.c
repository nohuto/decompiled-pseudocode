/*
 * XREFs of ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2204
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00187B0 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject *v3; // rdx
  const void *_a1; // rax

  if ( FxDriverGlobals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)this, 0xBu)
     || FxDriverGlobals->FxVerifyDownlevel) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x32u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
