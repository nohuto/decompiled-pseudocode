/*
 * XREFs of ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C000B870 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestCreateFromIrp @ 0x1C004A140 (imp_WdfRequestCreateFromIrp.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006BD4C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0005548 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000B440 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_IFR_SF_qLqd @ 0x1C004F470 (WPP_IFR_SF_qLqd.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C00536CC (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxIoTarget *Target,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxRequest **Request)
{
  const void **v7; // r12
  __int64 result; // rax
  int _a4; // edi
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v15; // ebx
  ULONG Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *v18; // rax
  FX_POOL **v19; // rax
  FX_POOL **v20; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v21; // rax
  FxRequestIrpOwnership _a2; // r14d
  FxRequestBase *v23; // rax
  FxRequestBase *v24; // rbx
  unsigned __int64 ContextSize; // r8
  unsigned __int8 v26; // r8
  void *retaddr; // [rsp+78h] [rbp+0h]

  v7 = (const void **)Request;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0);
  _a4 = result;
  if ( (int)result >= 0 )
  {
    Request = 0LL;
    ContextSizeOverride = 0LL;
    v15 = ExDefaultNonPagedPoolType;
    Tag = FxDriverGlobals->Tag;
    if ( RequestAttributes )
    {
      ContextTypeInfo = RequestAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = RequestAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( FxCalculateObjectTotalSize2(FxDriverGlobals, 0x168u, 0, ContextSizeOverride, (unsigned __int64 *)&Request) < 0 )
      goto LABEL_31;
    if ( FxDriverGlobals->FxPoolTrackingOn )
      v18 = retaddr;
    else
      v18 = 0LL;
    v19 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v15, (unsigned __int64)Request, Tag, v18);
    v20 = v19;
    if ( v19 )
    {
      if ( FxDriverGlobals->FxVerifierHandle )
      {
        v20 = v19 + 6;
        *(_OWORD *)v19 = 0LL;
        *((_OWORD *)v19 + 1) = 0LL;
        *((_OWORD *)v19 + 2) = 0LL;
        *((_DWORD *)v19 + 8) = 1146058822;
      }
      *((_OWORD *)v20 + 23) = 0LL;
      *((_OWORD *)v20 + 24) = 0LL;
      *((_OWORD *)v20 + 25) = 0LL;
      v20[46] = (FX_POOL *)v20;
      if ( RequestAttributes )
      {
        v21 = RequestAttributes->ContextTypeInfo;
        if ( v21 )
        {
          ContextSize = RequestAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v21->ContextSize;
          memset(v20 + 52, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v21 = RequestAttributes->ContextTypeInfo;
        }
        v20[50] = (FX_POOL *)v21;
      }
    }
    if ( v20 )
    {
      _a2 = Ownership;
      FxRequest::FxRequest((FxRequest *)v20, FxDriverGlobals, Irp, Ownership, Caller);
      v24 = v23;
    }
    else
    {
LABEL_31:
      _a2 = Ownership;
      v24 = 0LL;
    }
    if ( v24 )
    {
      if ( Target )
        _a4 = FxRequestBase::ValidateTarget(v24, Target);
      if ( _a4 < 0 || (_a4 = FxObject::Commit(v24, RequestAttributes, (void **)&Request, 0LL, 1u), _a4 < 0) )
      {
        WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
        if ( Irp )
          FxRequestBase::SetSubmitIrp(v24, 0LL, v26);
        FxObject::ClearEvtCallbacks(v24);
        v24->DeleteObject(v24);
      }
      else
      {
        *v7 = v24;
      }
    }
    else
    {
      _a4 = -1073741670;
    }
    if ( FxDriverGlobals->FxVerboseOn )
      WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, _a2, *v7, _a4);
    return (unsigned int)_a4;
  }
  return result;
}
