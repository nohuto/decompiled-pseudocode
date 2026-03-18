/*
 * XREFs of ?Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2934
 * Callers:
 *     ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2AE8 (-Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  const void *_a1; // rax

  if ( (this->m_VerifierFlags & 0x200) != 0 )
  {
    return 0;
  }
  else
  {
    v3 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, 0x38u, WPP_FxRequest_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
