/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0005420 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C0019E84 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007CE98 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0080068 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00033AC (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0005E74 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0006AA0 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0006AF8 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006ED0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C001ACB8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0091820 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

int __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer)
{
  char v9; // r12
  int result; // eax
  int v11; // esi
  FxRequestContext *m_RequestContext; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v14; // rax
  FxIoContext *v15; // rax
  FxRequestContext *v16; // rax
  FxRequestContext *v17; // rcx
  FxRequestBuffer *v18; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 v20; // dl
  size_t BufferLength; // r14
  unsigned int v22; // r13d
  char v23; // al
  unsigned int v24; // eax
  _IRP *m_Irp; // rcx
  unsigned int v26; // eax
  unsigned __int64 v27; // rbp
  _FX_DRIVER_GLOBALS *v28; // rcx
  void *v29; // r8
  int Buffer; // eax
  FX_POOL_TRACKER *v31; // rcx
  _FX_DRIVER_GLOBALS *v32; // rax
  int _a1; // eax
  unsigned __int16 v34; // r9
  FxRequestBuffer *v35; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v36; // rcx
  unsigned __int16 v37; // dx
  FxPoolTypeOrPoolFlags v38; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  void *pBuffer; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+18h]

  v41 = Ioctl;
  pBuffer = 0LL;
  v9 = 0;
  result = FxRequestBase::ValidateTarget(Request, this);
  v11 = result;
  if ( result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      m_Globals = this->m_Globals;
      v14 = retaddr;
      *(_QWORD *)&v38.UsePoolType = 0LL;
      v38.u.PoolFlags = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v14 = 0LL;
      v15 = (FxIoContext *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v38, 0xB0uLL, m_Globals->Tag, v14);
      if ( !v15 || (FxIoContext::FxIoContext(v15), (m_RequestContext = v16) == 0LL) )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
        return -1073741670;
      }
      v17 = Request->m_RequestContext;
      if ( v17 != v16 )
      {
        if ( v17 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v17->~FxRequestContext)(v17, 1LL);
        Request->m_RequestContext = m_RequestContext;
      }
    }
    v18 = InputBuffer;
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
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, v18);
    FxRequestContext::_StoreAndReferenceMemoryWorker(
      m_RequestContext,
      (IFxMemory **)&m_RequestContext[1].m_CompletionParams.Parameters.Ioctl.Output.Length,
      OutputBuffer);
    v20 = (Internal != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v20;
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = v20;
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    BufferLength = FxRequestBuffer::GetBufferLength(InputBuffer);
    v22 = FxRequestBuffer::GetBufferLength(OutputBuffer);
    v23 = v41;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v41;
    v24 = v23 & 3;
    m_Irp = Request->m_Irp.m_Irp;
    v41 = v24;
    m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = BufferLength;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v22;
    if ( !v24 )
    {
      if ( (_DWORD)BufferLength )
      {
        v26 = BufferLength;
        if ( (unsigned int)BufferLength > v22 )
          goto LABEL_14;
        goto LABEL_30;
      }
      if ( v22 )
      {
LABEL_30:
        v26 = v22;
LABEL_14:
        v27 = v26;
        if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= v26
          && (v36.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
        {
          Request->m_Irp.m_Irp->AssociatedIrp = v36;
        }
        else
        {
          v28 = this->m_Globals;
          *(_QWORD *)&v38.UsePoolType = 0LL;
          v38.u.PoolFlags = 64LL;
          if ( v28->FxPoolTrackingOn )
            v29 = retaddr;
          else
            v29 = 0LL;
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                    v28,
                                                                    &v28->FxPoolFrameworks,
                                                                    &v38,
                                                                    v26,
                                                                    v28->Tag,
                                                                    v29);
          if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
          {
            WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
            v11 = -1073741670;
            goto LABEL_53;
          }
          v9 = 1;
        }
        Buffer = FxRequestBuffer::GetBuffer(InputBuffer, &pBuffer);
        v11 = Buffer;
        if ( Buffer < 0 )
        {
          v37 = 18;
        }
        else
        {
          if ( pBuffer )
            memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer, BufferLength);
          Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, &pBuffer);
          v11 = Buffer;
          if ( Buffer >= 0 )
          {
            Request->m_Irp.m_Irp->UserBuffer = pBuffer;
            if ( v9 )
            {
              v31 = (FX_POOL_TRACKER *)m_RequestContext[1].__vftable;
              m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
              m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = v27;
              *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = v22 != 0;
              if ( v31 )
                FxPoolFree(v31);
            }
            else
            {
              *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = v22 != 0;
            }
            goto LABEL_26;
          }
          v37 = 19;
        }
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v37, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
        if ( v9 )
        {
          FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
        }
LABEL_53:
        FxRequestBase::ContextReleaseAndRestore(Request);
        return v11;
      }
      Request->m_Irp.m_Irp->UserBuffer = 0LL;
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
LABEL_26:
      v32 = Request->m_Globals;
      if ( v32->FxVerifierOn )
      {
        if ( v32->FxVerifierIO )
          FxRequestBase::SetVerifierFlags(Request, 128);
      }
      return v11;
    }
    if ( v24 <= 2 )
    {
      _a1 = FxRequestBuffer::GetBuffer(InputBuffer, &pBuffer);
      v11 = _a1;
      if ( _a1 < 0 )
      {
        v34 = 20;
      }
      else
      {
        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)pBuffer;
        _a1 = FxRequestBuffer::GetOrAllocateMdl(
                OutputBuffer,
                this->m_Globals,
                &Request->m_Irp.m_Irp->MdlAddress,
                (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                (_LOCK_OPERATION)(v41 != 1),
                m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
        v11 = _a1;
        if ( _a1 >= 0 )
          goto LABEL_26;
        v34 = 21;
      }
    }
    else
    {
      _a1 = FxRequestBuffer::GetBuffer(OutputBuffer, &pBuffer);
      v11 = _a1;
      if ( _a1 >= 0 )
      {
        v35 = InputBuffer;
        Request->m_Irp.m_Irp->UserBuffer = pBuffer;
        _a1 = FxRequestBuffer::GetBuffer(v35, &pBuffer);
        v11 = _a1;
        if ( _a1 >= 0 )
        {
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
          goto LABEL_26;
        }
        v34 = 23;
      }
      else
      {
        v34 = 22;
      }
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v34, WPP_FxIoTargetKm_cpp_Traceguids, _a1);
    goto LABEL_53;
  }
  return result;
}
