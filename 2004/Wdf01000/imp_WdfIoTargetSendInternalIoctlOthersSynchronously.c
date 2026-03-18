/*
 * XREFs of imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00639E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0017BF4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017C60 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017D04 (--1FxSyncRequest@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002D5D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002E798 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F6A8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0062F94 (WPP_IFR_SF_qqDqqq.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0064B98 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetSendInternalIoctlOthersSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *OtherArg1,
        _WDF_MEMORY_DESCRIPTOR *OtherArg2,
        _WDF_MEMORY_DESCRIPTOR *OtherArg4,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFREQUEST__ *_a5; // rbx
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  int v16; // ebx
  unsigned int Flags; // edx
  signed int v18; // eax
  signed int v19; // eax
  signed int v20; // eax
  int v21; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *v23; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp-A0h] BYREF
  void *_a4; // [rsp+68h] [rbp-98h]
  WDFREQUEST__ *v28; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v29; // [rsp+78h] [rbp-88h]
  FxInternalIoctlOthersContext context; // [rsp+80h] [rbp-80h] BYREF
  FxSyncRequest v31; // [rsp+F0h] [rbp-10h] BYREF
  FxRequestBuffer args[3]; // [rsp+220h] [rbp+120h] BYREF

  pTarget = 0LL;
  _a4 = IoTarget;
  v28 = Request;
  v29 = BytesReturned;
  `vector constructor iterator'(
    (char *)args,
    0x20uLL,
    3uLL,
    (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  _a5 = v28;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
  *(_OWORD *)context.m_MemoryObjects = 0LL;
  FxSyncRequest::FxSyncRequest(&v31, m_Globals, &context, v28);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(m_Globals, v14, v15, 0x30u, traceGuid, _a4, _a5, Ioctl, OtherArg1, OtherArg2, OtherArg4);
  v16 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v16 >= 0 )
  {
    if ( RequestOptions )
    {
      if ( RequestOptions->Size != 16 )
      {
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          6u,
          0xAu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          16,
          RequestOptions->Size);
        v16 = -1073741820;
LABEL_12:
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x31u, WPP_FxIoTargetAPI_cpp_Traceguids, v16);
        goto LABEL_31;
      }
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
LABEL_11:
        v16 = -1073741811;
        goto LABEL_12;
      }
      if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
        goto LABEL_11;
      }
    }
    if ( OtherArg1
      && (v18 = FxRequestBuffer::ValidateMemoryDescriptor(args, (IFxMemory *)m_Globals, OtherArg1, 0), v16 = v18, v18 < 0) )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x32u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg1, v18);
    }
    else if ( OtherArg2
           && (v19 = FxRequestBuffer::ValidateMemoryDescriptor(&args[1], (IFxMemory *)m_Globals, OtherArg2, 0),
               v16 = v19,
               v19 < 0) )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x33u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg2, v19);
    }
    else if ( OtherArg4
           && (v20 = FxRequestBuffer::ValidateMemoryDescriptor(&args[2], (IFxMemory *)m_Globals, OtherArg4, 0),
               v16 = v20,
               v20 < 0) )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x34u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg4, v20);
    }
    else
    {
      v21 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, v31.m_TrueRequest, Ioctl, args);
      v16 = v21;
      if ( v21 < 0 )
      {
        WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v21);
      }
      else
      {
        if ( m_Globals->FxVerboseOn )
        {
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v31.m_TrueRequest);
          if ( ObjectHandleUnchecked )
            v23 = (const void *)ObjectHandleUnchecked;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x35u, WPP_FxIoTargetAPI_cpp_Traceguids, _a4, v23);
        }
        v16 = FxIoTarget::SubmitSync(pTarget, v31.m_TrueRequest, RequestOptions, 0LL);
        if ( v29 )
          *v29 = v31.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
      }
    }
  }
LABEL_31:
  FxSyncRequest::~FxSyncRequest(&v31);
  return (unsigned int)v16;
}
