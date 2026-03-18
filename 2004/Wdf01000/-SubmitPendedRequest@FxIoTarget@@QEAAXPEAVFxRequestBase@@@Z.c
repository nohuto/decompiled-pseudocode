/*
 * XREFs of ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0065D18
 * Callers:
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0065E6C (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C00716E0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000C9A0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0065488 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0065CAC (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequest(FxIoTarget *this, FxRequestBase *Request)
{
  char v4; // bl
  unsigned __int8 v5; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // r8
  _FX_DRIVER_GLOBALS *v8; // r10
  FxRequestBase *_a1; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _IRP *m_Irp; // rbx
  unsigned __int64 v12; // rax
  int _a3; // r11d
  FxRequestBase *v14; // r10

  v4 = FxIoTarget::Submit(this, Request, 0LL, 0);
  if ( (v4 & 1) != 0 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
      _a1 = Request;
      if ( ObjectHandleUnchecked )
        _a1 = (FxRequestBase *)ObjectHandleUnchecked;
      WPP_IFR_SF_qq(v8, 5u, 0xEu, 0xCu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
    }
    this->Send(this, Request->m_Irp.m_Irp);
  }
  if ( (v4 & 3) != 0 )
  {
    FxIoTarget::DecrementIoCount(this);
    Request->Release(Request, this, 263, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
  else
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_Irp = Request->m_Irp.m_Irp;
      v12 = FxObject::GetObjectHandleUnchecked(Request);
      v14 = Request;
      if ( v12 )
        v14 = (FxRequestBase *)v12;
      WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0xDu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v14, (__int64)m_Irp, _a3);
    }
    Request->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::HandleFailedResubmit(this, Request, v5);
  }
}
