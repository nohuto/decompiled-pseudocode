/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0075364
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C00724F4 (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C00726D4 (FxIoTargetSendIo.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0005E74 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0006AA0 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0006AF8 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006ED0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C001ACB8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001B250 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C001B360 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0091820 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  _LARGE_INTEGER v7; // rbx
  __int64 result; // rax
  unsigned int v11; // esi
  FxRequestContext *m_RequestContext; // r14
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *v14; // rax
  FX_POOL **v15; // rax
  FxRequestContext *v16; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int BufferLength; // eax
  const void *_a1; // rax
  int Buffer; // eax
  unsigned __int16 v21; // r9
  _IRP::<unnamed_type_AssociatedIrp> v22; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v24; // rax
  int v25; // eax
  FX_POOL_TRACKER *v26; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v27; // rdx
  unsigned int Size; // [rsp+40h] [rbp-20h]
  void *pBuffer; // [rsp+48h] [rbp-18h] BYREF
  __m128i v30; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  char Request_0a[88]; // [rsp+B8h] [rbp+58h]

  v7.QuadPart = 0LL;
  Request_0a[0] = 0;
  pBuffer = 0LL;
  result = FxRequestBase::ValidateTarget(Request, this);
  v11 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext && m_RequestContext->m_RequestType == 1 )
    {
LABEL_9:
      m_RequestContext->StoreAndReferenceMemory(m_RequestContext, IoBuffer);
      CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
      CurrentStackLocation[-1].FileObject = 0LL;
      FxIoTarget::CopyFileObjectAndFlags(this, Request);
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
      *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
      BufferLength = FxRequestBuffer::GetBufferLength(IoBuffer);
      *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
      Size = BufferLength;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
      m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
      *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
      switch ( this->m_TargetIoType )
      {
        case 1u:
          Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
          v11 = Buffer;
          if ( Buffer < 0 )
          {
            v21 = 14;
            goto LABEL_42;
          }
          Request->m_Irp.m_Irp->UserBuffer = pBuffer;
          break;
        case 2u:
          Request->m_Irp.m_Irp->UserBuffer = 0LL;
          if ( BufferLength )
          {
            if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
              && (v22.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
            {
              Request->m_Irp.m_Irp->AssociatedIrp = v22;
            }
            else
            {
              m_Globals = this->m_Globals;
              v24 = retaddr;
              v30.m128i_i64[0] = 0LL;
              v30.m128i_i64[1] = 64LL;
              if ( !m_Globals->FxPoolTrackingOn )
                v24 = 0LL;
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                        m_Globals,
                                                                        &m_Globals->FxPoolFrameworks,
                                                                        &v30,
                                                                        Size,
                                                                        m_Globals->Tag,
                                                                        v24);
              if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
              {
                WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
                v11 = -1073741670;
                goto LABEL_43;
              }
              Request_0a[0] = 1;
            }
            v25 = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
            v11 = v25;
            if ( v25 < 0 )
            {
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxIoTargetKm_cpp_Traceguids, v25);
              if ( Request_0a[0] )
              {
                FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
              }
              goto LABEL_43;
            }
            if ( MajorCode == 4 )
            {
              if ( pBuffer )
                memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer, Size);
            }
            else
            {
              Request->m_Irp.m_Irp->UserBuffer = pBuffer;
            }
            if ( Request_0a[0] )
            {
              v26 = (FX_POOL_TRACKER *)m_RequestContext[1].__vftable;
              v27.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
              *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
              m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)v27.MasterIrp;
              m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = Size;
              if ( v26 )
                FxPoolFree(v26);
            }
            else
            {
              *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
            }
          }
          else
          {
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
          }
          break;
        case 3u:
          Buffer = FxRequestBuffer::GetOrAllocateMdl(
                     IoBuffer,
                     this->m_Globals,
                     &Request->m_Irp.m_Irp->MdlAddress,
                     (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                     (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                     (_LOCK_OPERATION)(MajorCode == 3),
                     m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                     &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
          v11 = Buffer;
          if ( Buffer < 0 )
          {
            v21 = 13;
LABEL_42:
            WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v21, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
            goto LABEL_43;
          }
          break;
        default:
          v11 = -1073741436;
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, _a1, 0xC0000184);
LABEL_43:
          FxRequestBase::ContextReleaseAndRestore(Request);
          return v11;
      }
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Size;
      if ( DeviceOffset )
        v7 = *DeviceOffset;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset = v7;
      FxRequestBase::VerifierSetFormatted(Request);
      return v11;
    }
    v13 = this->m_Globals;
    v14 = retaddr;
    v30.m128i_i64[0] = 0LL;
    v30.m128i_i64[1] = 64LL;
    if ( !v13->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = FxPoolAllocator(v13, &v13->FxPoolFrameworks, &v30, 0xB0uLL, v13->Tag, v14);
    if ( v15 )
    {
      FxIoContext::FxIoContext((FxIoContext *)v15);
      m_RequestContext = v16;
      if ( v16 )
      {
        FxRequestBase::SetContext(Request, v16);
        goto LABEL_9;
      }
    }
    WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
    return 3221225626LL;
  }
  return result;
}
