/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C001AF84
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C001ADA0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0073280 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007CF98 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00033AC (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0006AF8 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006ED0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C001ACB8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001B250 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C001B360 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void ***v11; // r14
  unsigned int _a1; // edi
  _IO_STACK_LOCATION *v13; // rcx
  int _a2; // eax
  unsigned int v15; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v17; // rax
  FX_POOL **v18; // rax
  void **bufs[3]; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, this);
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
    {
      m_Globals = this->m_Globals;
      bufs[0] = 0LL;
      bufs[1] = (void **)64;
      if ( m_Globals->FxPoolTrackingOn )
        v17 = retaddr;
      else
        v17 = 0LL;
      v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)bufs, 0x70uLL, m_Globals->Tag, v17);
      m_RequestContext = (FxRequestContext *)v18;
      if ( !v18 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids);
        return 3221225626LL;
      }
      v18[10] = 0LL;
      *((_BYTE *)v18 + 88) = 2;
      memset(v18 + 1, 0, 0x48uLL);
      m_RequestContext->m_CompletionParams.Size = 72;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
      m_RequestContext->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
      *(_OWORD *)&m_RequestContext[1].__vftable = 0LL;
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffers);
    FxRequestContext::_StoreAndReferenceMemoryWorker(m_RequestContext, (IFxMemory **)&m_RequestContext[1], Buffers + 1);
    FxRequestContext::_StoreAndReferenceMemoryWorker(
      m_RequestContext,
      (IFxMemory **)&m_RequestContext[1].m_CompletionParams,
      Buffers + 2);
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    v11 = bufs;
    _a1 = 0;
    v13 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    bufs[0] = &v13[-1].Parameters.Others.Argument1;
    bufs[1] = &v13[-1].Parameters.QueryEa.EaList;
    bufs[2] = &v13[-1].Parameters.SetFile.DeleteHandle;
    while ( 1 )
    {
      _a2 = FxRequestBuffer::GetBuffer(&Buffers[_a1++], (IFxMemory **)*v11);
      v15 = _a2;
      if ( _a2 < 0 )
        break;
      ++v11;
      if ( _a1 >= 3 )
      {
        FxRequestBase::VerifierSetFormatted(Request);
        return v15;
      }
    }
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
    FxRequestBase::ContextReleaseAndRestore(Request);
    return v15;
  }
  return result;
}
