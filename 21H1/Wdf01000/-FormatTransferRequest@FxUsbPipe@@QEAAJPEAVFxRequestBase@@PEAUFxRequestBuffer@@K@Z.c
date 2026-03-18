/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006BFCC
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006CE44 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C006DFF8 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C006E470 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001A90 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C000B08C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0032478 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006C438 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006C5F4 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EB4C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0070710 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C008FF6C (USBD_UrbAllocate.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00917C0 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

int __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  const void *_a1; // rax
  int result; // eax
  unsigned __int64 BufferLength; // r8
  signed __int8 EndpointAddress; // al
  unsigned __int16 v12; // r9
  int _a3; // eax
  int v14; // esi
  FxRequestContext *m_RequestContext; // rsi
  _FX_URB_TYPE FxUrbTypeForRequest; // r14
  FX_POOL **v17; // rax
  FxRequestContext *v18; // rax
  int v19; // r14d
  USBD_HANDLE__ *m_USBDHandle; // r15
  unsigned int v21; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *PipeHandle; // rcx
  void *retaddr; // [rsp+68h] [rbp+0h]
  _MDL *pMdl; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)(FxUsbPipe::_UsbdPipeTypeToWdf(this->m_PipeInformation.PipeType) - 3) > 1 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, _a1, 0xC0000010);
    return -1073741808;
  }
  BufferLength = (unsigned int)FxRequestBuffer::GetBufferLength(Buffer);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (TransferFlags & 1) != 0 )
  {
    if ( EndpointAddress >= 0 )
    {
      v12 = 14;
LABEL_7:
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v12, WPP_FxUsbPipeKm_cpp_Traceguids, this);
      return -1073741808;
    }
    if ( this->m_CheckPacketSize && BufferLength % this->m_PipeInformation.MaximumPacketSize )
      return -1073741306;
  }
  else if ( EndpointAddress < 0 )
  {
    v12 = 15;
    goto LABEL_7;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, this);
  v14 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, (__int64)Request, _a3);
    return v14;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    v17 = FxPoolAllocator(
            this->m_Globals,
            &this->m_Globals->FxPoolFrameworks,
            ExDefaultNonPagedPoolType,
            0x120uLL,
            this->m_Globals->Tag,
            retaddr);
    if ( v17 )
    {
      FxUsbPipeTransferContext::FxUsbPipeTransferContext((FxUsbPipeTransferContext *)v17, FxUrbTypeForRequest);
      m_RequestContext = v18;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return -1073741670;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      if ( m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length )
      {
        v19 = -1073741436;
LABEL_25:
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v19;
      }
      m_USBDHandle = this->m_USBDHandle;
      v19 = USBD_UrbAllocate(
              m_USBDHandle,
              (_URB **)&m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length);
      if ( v19 < 0 )
        goto LABEL_25;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((Buffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (v21 = this->m_PipeInformation.EndpointAddress,
        m_Globals = this->m_Globals,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   Buffer,
                   m_Globals,
                   &pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestMemory,
                   &m_RequestContext[2].m_RequestType,
                   (_LOCK_OPERATION)(v21 >> 7),
                   0,
                   0LL),
        result >= 0) )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    PipeHandle = this->m_PipeInformation.PipeHandle;
    *(_DWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 32) = TransferFlags;
    *(_QWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 24) = PipeHandle;
    FxFormatUsbRequest(
      Request,
      (_URB *)m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length,
      (_FX_URB_TYPE)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length != (_QWORD)m_RequestContext
                                                                                            + 136),
      this->m_USBDHandle);
    return 0;
  }
  return result;
}
