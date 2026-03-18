/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C000BCC0
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C000BF30 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C0063450 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C000CDB0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00591D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C0062D3C (WPP_IFR_SF_qqDdqq.c)
 */

__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  unsigned int globals; // r15d
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFMEMORY__ *v16; // r12
  WDFMEMORY__ *v17; // r13
  __int64 v18; // rdx
  FxRequest *v19; // rcx
  _WDFMEMORY_OFFSET *v20; // rsi
  _WDFMEMORY_OFFSET *v21; // rbx
  int v22; // r15d
  bool v23; // cf
  FxRequestContext *m_RequestContext; // rdx
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v27; // rbx
  unsigned __int16 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r15
  FxRequestBuffer *v31; // [rsp+20h] [rbp-91h]
  IFxMemory *pOutputMemory; // [rsp+60h] [rbp-51h] BYREF
  FxIoTarget *pTarget; // [rsp+68h] [rbp-49h] BYREF
  FxRequestBuffer outputBuf; // [rsp+70h] [rbp-41h] BYREF
  FxRequestBuffer inputBuf; // [rsp+90h] [rbp-21h] BYREF
  FxRequest *pRequest; // [rsp+100h] [rbp+4Fh] BYREF
  void *_a1; // [rsp+108h] [rbp+57h]
  IFxMemory *pInputMemory; // [rsp+110h] [rbp+5Fh] BYREF
  unsigned int v39; // [rsp+118h] [rbp+67h]

  v39 = Ioctl;
  _a1 = IoTarget;
  pTarget = 0LL;
  globals = Ioctl;
  pRequest = 0LL;
  pInputMemory = 0LL;
  pOutputMemory = 0LL;
  inputBuf.DataType = FxRequestBufferUnspecified;
  memset(&inputBuf.u, 0, sizeof(inputBuf.u));
  outputBuf.DataType = FxRequestBufferUnspecified;
  memset(&outputBuf.u, 0, sizeof(outputBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  v16 = OutputBuffer;
  v17 = InputBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      pTarget->m_Globals,
      v12,
      v13,
      v14,
      (const _GUID *)v31,
      IoTarget,
      (const void *)Request,
      globals,
      Internal,
      InputBuffer,
      OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v18) = 0;
  v19 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v18 = LOWORD(v19->__vftable);
    v19 = (FxRequest *)((char *)v19 - v18);
  }
  if ( v19->m_Type == 4104 )
    pRequest = v19;
  else
    FxObjectHandleGetPtrQI(v19, (void **)&pRequest, (void *)Request, 0x1008u, v18);
  v20 = InputBufferOffsets;
  if ( v17 )
  {
    FxObjectHandleGetPtr(m_Globals, v17, 0x100Au, (void **)&pInputMemory);
    if ( v20 )
    {
      BufferLength = v20->BufferLength;
      v27 = BufferLength + v20->BufferOffset;
      if ( v27 < BufferLength || v27 > pInputMemory->GetBufferSize(pInputMemory) )
      {
        v28 = 44;
LABEL_28:
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v28, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
    }
    FxRequestBuffer::SetMemory(&inputBuf, pInputMemory, v20);
  }
  v21 = OutputBufferOffsets;
  if ( v16 )
  {
    FxObjectHandleGetPtr(m_Globals, v16, 0x100Au, (void **)&pOutputMemory);
    if ( v21 )
    {
      v29 = v21->BufferLength;
      v30 = v29 + v21->BufferOffset;
      if ( v30 < v29 || v30 > pOutputMemory->GetBufferSize(pOutputMemory) )
      {
        v28 = 45;
        goto LABEL_28;
      }
      globals = v39;
    }
    FxRequestBuffer::SetMemory(&outputBuf, pOutputMemory, v21);
  }
  v22 = FxIoTarget::FormatIoctlRequest(pTarget, pRequest, globals, Internal, &inputBuf, &outputBuf);
  if ( v22 >= 0 )
  {
    v23 = Internal != 0;
    Internal = -Internal;
    m_RequestContext = pRequest->m_RequestContext;
    m_RequestContext->m_CompletionParams.Parameters.Ioctl.IoControlCode = v39;
    m_RequestContext->m_CompletionParams.Type = v23 + 14;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)v17;
    if ( v20 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v20->BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)v16;
    if ( v21 )
      m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Offset = v21->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, Request, v22);
  return (unsigned int)v22;
}
