/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00799DC
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C007A1C0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C007A7B0 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008078C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00105B0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001B2C8 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0039116 (-DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // rsi
  FxRequestContext *v5; // rax
  IFxMemory *v7; // rdi
  size_t v8; // rbx
  void *v9; // rax
  IFxMemory *v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  FxRequestContext *m_RequestContext; // rdx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v15; // rdx
  _WDF_REQUEST_REUSE_PARAMS params; // [rsp+20h] [rbp-40h] BYREF
  FxRequestBuffer buf; // [rsp+38h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+80h] [rbp+20h] BYREF

  Request = Repeater->Request;
  buf.DataType = FxRequestBufferUnspecified;
  pMemory = 0LL;
  memset(&buf.u, 0, sizeof(buf.u));
  FxUsbPipeContinuousReader::DeleteMemory(this, Request);
  *(_QWORD *)(&params.Status + 1) = 0LL;
  HIDWORD(params.NewIrp) = 0;
  params.Flags = 0;
  params.Size = 24;
  params.Status = -1073741637;
  FxRequest::Reuse(Request, &params);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) >= 0 )
  {
    v7 = &pMemory->IFxMemory;
    v8 = pMemory->GetBufferSize(&pMemory->IFxMemory);
    v9 = (void *)v7->GetBuffer(v7);
    memset(v9, 0, v8);
    v10 = (IFxMemory *)pMemory;
    if ( pMemory )
      v10 = &pMemory->IFxMemory;
    FxRequestBuffer::SetMemory(&buf, v10, &this->m_Offsets);
    v11 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    if ( v11 >= 0 )
    {
      m_RequestContext = Request->m_RequestContext;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = 6;
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pMemory);
      *(_QWORD *)(v15 + 104) = ObjectHandleUnchecked;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    else if ( !Request->m_RequestContext )
    {
      FxObject::ClearEvtCallbacks(pMemory);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    }
    return (unsigned int)v11;
  }
  else
  {
    v5 = Request->m_RequestContext;
    if ( v5 )
      v5->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
}
