/*
 * XREFs of ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6814
 * Callers:
 *     imp_WdfRequestGetFileObject @ 0x1C00093E0 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C004A560 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x1C004A6B0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C5F60 (Vf_VerifyRequestComplete.c)
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1C00C6180 (Vf_VerifyWdfRequestIsCanceled.c)
 *     ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6AE8 (-Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C708C (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C71EC (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C7300 (-Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00C779C (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C7848 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C78DC (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsDriverOwned(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v4; // ebx
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax

  if ( (this->m_VerifierFlags & 1) != 0 )
  {
    return 0;
  }
  else
  {
    v4 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x10u, 0x33u, WPP_FxRequest_cpp_Traceguids, _a1, 0xC0000010);
    if ( (this->m_VerifierFlags & 2) != 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x34u, WPP_FxRequest_cpp_Traceguids, ObjectHandleUnchecked);
    }
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v4;
}
