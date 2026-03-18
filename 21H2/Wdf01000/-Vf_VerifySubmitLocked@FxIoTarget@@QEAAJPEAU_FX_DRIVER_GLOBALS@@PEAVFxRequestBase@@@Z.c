/*
 * XREFs of ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00C7F18
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000B1D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0074BB0 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxIoTarget::Vf_VerifySubmitLocked(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestBase *Request)
{
  unsigned int v5; // edi
  __int16 m_VerifierFlags; // ax
  unsigned __int64 v8; // rax
  unsigned int _a2; // r10d
  FxRequestBase *_a1; // rcx
  int CurrentLocation; // r8d
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxRequestBase *v13; // rcx
  ULONG_PTR v14; // rax
  _IRP *m_Irp; // rsi
  unsigned __int64 v16; // rax
  const void *_a5; // rdx
  int _a4; // r8d
  int v19; // r10d
  int _a6; // r11d
  FxRequestBase *v21; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  irql = 0;
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  m_VerifierFlags = Request->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x80u) != 0 )
  {
    if ( (m_VerifierFlags & 0x100) != 0 )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
      v13 = Request;
      if ( ObjectHandleUnchecked )
        v13 = (FxRequestBase *)ObjectHandleUnchecked;
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xEu, 0x1Bu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v13);
      v14 = FxObject::GetObjectHandleUnchecked(Request);
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v14);
    }
    m_Irp = Request->m_Irp.m_Irp;
    CurrentLocation = m_Irp->CurrentLocation;
    if ( CurrentLocation <= this->m_TargetStackSize )
    {
      v5 = -1073741616;
      FxObject::GetObjectHandleUnchecked(this);
      v16 = FxObject::GetObjectHandleUnchecked(Request);
      v21 = Request;
      if ( v16 )
        v21 = (FxRequestBase *)v16;
      WPP_IFR_SF_qqdqdd(
        FxDriverGlobals,
        (unsigned __int8)_a5,
        0xEu,
        0x1Cu,
        (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
        v21,
        m_Irp,
        _a4,
        _a5,
        _a6,
        v19);
    }
  }
  else
  {
    v5 = -1073741616;
    v8 = FxObject::GetObjectHandleUnchecked(Request);
    _a1 = Request;
    if ( v8 )
      _a1 = (FxRequestBase *)v8;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xEu, 0x1Au, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Unlock(Request, irql, CurrentLocation);
  return v5;
}
