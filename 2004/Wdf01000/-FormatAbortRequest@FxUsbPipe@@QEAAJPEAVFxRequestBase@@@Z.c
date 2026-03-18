/*
 * XREFs of ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006CC7C
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0068600 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C0068AA0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001A90 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0032478 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006C5A0 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C006C9FC (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EB4C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0070710 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbPipe::FormatAbortRequest(FxUsbPipe *this, FxRequestBase *Request)
{
  int _a3; // eax
  unsigned int v5; // ebx
  FxRequestContext *m_RequestContext; // rbx
  _FX_URB_TYPE FxUrbTypeForRequest; // bp
  FX_POOL **v9; // rax
  FxRequestContext *v10; // rax
  int Urb; // ebp
  IFxMemory_vtbl *PipeHandle; // rcx
  IFxMemory *m_RequestMemory; // rax
  _URB *v14; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, this);
  v5 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xEu,
      0x21u,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      this,
      (__int64)Request,
      _a3);
    return v5;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 18 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    v9 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0xB8uLL,
           this->m_Globals->Tag,
           retaddr);
    if ( v9 )
    {
      FxUsbPipeRequestContext::FxUsbPipeRequestContext((FxUsbPipeRequestContext *)v9, FxUrbTypeForRequest);
      m_RequestContext = v10;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return 3221225626LL;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      Urb = FxUsbPipeRequestContext::AllocateUrb((FxUsbPipeRequestContext *)m_RequestContext, this->m_USBDHandle);
      if ( Urb < 0 )
      {
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return (unsigned int)Urb;
      }
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  PipeHandle = (IFxMemory_vtbl *)this->m_PipeInformation.PipeHandle;
  m_RequestMemory = m_RequestContext[1].m_RequestMemory;
  *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
  *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
  m_RequestMemory[4].__vftable = 0LL;
  LOWORD(m_RequestContext[1].m_RequestMemory->__vftable) = 40;
  WORD1(m_RequestContext[1].m_RequestMemory->__vftable) = 2;
  m_RequestContext[1].m_RequestMemory[3].__vftable = PipeHandle;
  v14 = (_URB *)m_RequestContext[1].m_RequestMemory;
  m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
  m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
  HIDWORD(m_RequestContext[1].__vftable) = 7;
  FxFormatUsbRequest(
    Request,
    v14,
    (_FX_URB_TYPE)(v14 != (_URB *)(&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 1)),
    this->m_USBDHandle);
  return 0LL;
}
