/*
 * XREFs of ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C68C8
 * Callers:
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1C004AC10 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C004AE70 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C708C (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsInCallerContext(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  const void *_a1; // rax

  if ( (this->m_VerifierFlags & 0x20) != 0 )
  {
    return 0;
  }
  else
  {
    v3 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x10u, 0x37u, WPP_FxRequest_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
