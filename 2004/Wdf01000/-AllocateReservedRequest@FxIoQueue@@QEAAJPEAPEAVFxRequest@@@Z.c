/*
 * XREFs of ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C0075900
 * Callers:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C0077744 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C004ED20 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C004F150 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall FxIoQueue::AllocateReservedRequest(FxIoQueue *this, FxRequest **Request)
{
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *m_Device; // rcx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int _a1; // eax
  unsigned int v9; // esi
  FxRequest *v10; // rdi
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v12; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_CxDeviceInfo = this->m_CxDeviceInfo;
  *Request = 0LL;
  pRequest = 0LL;
  m_Globals = this->m_Globals;
  m_Device = this->m_Device;
  p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  if ( !m_CxDeviceInfo )
    p_RequestAttributes = &m_Device->m_RequestAttributes;
  _a1 = FxRequest::_CreateForPackage(m_Device, p_RequestAttributes, 0LL, &pRequest);
  v9 = _a1;
  if ( _a1 >= 0 )
  {
    v10 = pRequest;
    pRequest->m_Reserved = 1;
    v10->m_IoQueue = this;
    v10->m_ForwardProgressQueue = this;
    v10->m_Completed = 0;
    if ( this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method )
    {
      v10->m_Presented = 1;
      FxObject::GetObjectHandleUnchecked(v10);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      v12 = ((__int64 (__fastcall *)(unsigned __int64))this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method)(ObjectHandleUnchecked);
      v9 = v12;
      if ( v12 >= 0 )
        goto LABEL_9;
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x6Bu, WPP_FxIoQueue_cpp_Traceguids, v12);
      FxRequest::FreeRequest(v10);
    }
    if ( (v9 & 0x80000000) != 0 )
      return v9;
LABEL_9:
    *Request = v10;
    return v9;
  }
  WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x6Au, WPP_FxIoQueue_cpp_Traceguids, _a1);
  return v9;
}
