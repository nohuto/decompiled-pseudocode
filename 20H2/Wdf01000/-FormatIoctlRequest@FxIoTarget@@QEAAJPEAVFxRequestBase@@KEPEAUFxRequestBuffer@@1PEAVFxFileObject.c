/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C000BCC0 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C0017A14 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006FD68 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0072E9C (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00027EC (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00051F4 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C000B08C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C000B1B4 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C000BBE0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C00196C8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004943C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0090EC0 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

int __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer)
{
  int result; // eax
  int v11; // ebx
  FxRequestContext *m_RequestContext; // rsi
  FX_POOL **v13; // rax
  FxRequestContext *v14; // rax
  FxRequestContext *v15; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 v17; // dl
  size_t BufferLength; // r13
  unsigned int v19; // eax
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  char v22; // r12
  int Buffer; // eax
  FX_POOL_TRACKER *v24; // rcx
  char v25; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int16 v27; // r9
  _IRP::<unnamed_type_AssociatedIrp> v28; // rcx
  void *pBuffer[2]; // [rsp+40h] [rbp-38h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]
  char v31; // [rsp+88h] [rbp+10h]
  unsigned int Request_0a[26]; // [rsp+B0h] [rbp+38h]

  pBuffer[0] = 0LL;
  v31 = 0;
  result = FxRequestBase::ValidateTarget(Request, this);
  v11 = result;
  if ( result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v13 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0xB0uLL,
              this->m_Globals->Tag,
              Caller);
      if ( v13 )
      {
        FxIoContext::FxIoContext((FxIoContext *)v13);
        m_RequestContext = v14;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
        return -1073741670;
      }
      v15 = Request->m_RequestContext;
      if ( v15 != m_RequestContext )
      {
        if ( v15 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v15->~FxRequestContext)(v15, 1LL);
        Request->m_RequestContext = m_RequestContext;
      }
    }
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, InputBuffer);
    FxRequestContext::_StoreAndReferenceMemoryWorker(
      m_RequestContext,
      (IFxMemory **)&m_RequestContext[1].m_CompletionParams.Parameters.Ioctl.Output.Length,
      OutputBuffer);
    v17 = (Internal != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v17;
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = v17;
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    BufferLength = FxRequestBuffer::GetBufferLength(InputBuffer);
    v19 = FxRequestBuffer::GetBufferLength(OutputBuffer);
    v20 = v19;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = BufferLength;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v19;
    v21 = Ioctl & 3;
    if ( v21 )
    {
      if ( v21 <= 2 )
      {
        Buffer = FxRequestBuffer::GetBuffer(InputBuffer, pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->AssociatedIrp.SystemBuffer = pBuffer[0];
          Buffer = FxRequestBuffer::GetOrAllocateMdl(
                     OutputBuffer,
                     this->m_Globals,
                     &Request->m_Irp.m_Irp->MdlAddress,
                     (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                     (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                     (_LOCK_OPERATION)(v21 != 1),
                     m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                     &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
          v11 = Buffer;
          if ( Buffer >= 0 )
          {
LABEL_26:
            m_Globals = Request->m_Globals;
            if ( m_Globals->FxVerifierOn )
            {
              if ( m_Globals->FxVerifierIO )
                FxRequestBase::SetVerifierFlags(Request, 128);
            }
            return v11;
          }
          v27 = 21;
        }
        else
        {
          v27 = 20;
        }
      }
      else
      {
        Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          Buffer = FxRequestBuffer::GetBuffer(InputBuffer, pBuffer);
          v11 = Buffer;
          if ( Buffer >= 0 )
          {
            Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle = pBuffer[0];
            goto LABEL_31;
          }
          v27 = 23;
        }
        else
        {
          v27 = 22;
        }
      }
    }
    else
    {
      if ( (_DWORD)BufferLength )
      {
        if ( (unsigned int)BufferLength > v19 )
          v19 = BufferLength;
      }
      else if ( !v19 )
      {
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
        goto LABEL_31;
      }
      Request_0a[0] = v19;
      if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= v19
        && (v28.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
      {
        v22 = 0;
        Request->m_Irp.m_Irp->AssociatedIrp = v28;
      }
      else
      {
        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                  this->m_Globals,
                                                                  &this->m_Globals->FxPoolFrameworks,
                                                                  ExDefaultNonPagedPoolType,
                                                                  v19,
                                                                  this->m_Globals->Tag,
                                                                  Caller);
        if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
        {
          WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
          v11 = -1073741670;
          goto LABEL_57;
        }
        v22 = 1;
        v31 = 1;
      }
      Buffer = FxRequestBuffer::GetBuffer(InputBuffer, pBuffer);
      v11 = Buffer;
      if ( Buffer < 0 )
      {
        v27 = 18;
      }
      else
      {
        if ( pBuffer[0] )
          memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer[0], BufferLength);
        Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          if ( v22 )
          {
            v24 = (FX_POOL_TRACKER *)m_RequestContext[1].__vftable;
            m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
            m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = Request_0a[0];
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = v20 != 0;
            if ( v24 )
              FxPoolFree(v24);
            v25 = 0;
            goto LABEL_25;
          }
          *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = v20 != 0;
LABEL_31:
          v25 = v31;
LABEL_25:
          if ( v11 >= 0 )
            goto LABEL_26;
          if ( v25 )
          {
            FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
          }
LABEL_57:
          FxRequestBase::ContextReleaseAndRestore(Request);
          return v11;
        }
        v27 = 19;
      }
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v27, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
    goto LABEL_31;
  }
  return result;
}
