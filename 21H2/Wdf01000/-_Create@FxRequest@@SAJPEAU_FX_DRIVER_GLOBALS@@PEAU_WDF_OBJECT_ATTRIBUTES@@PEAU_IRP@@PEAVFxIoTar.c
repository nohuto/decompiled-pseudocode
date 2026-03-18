/*
 * XREFs of ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C00061C0 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestCreateFromIrp @ 0x1C0064480 (imp_WdfRequestCreateFromIrp.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008078C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0006FF0 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0068AE4 (WPP_IFR_SF_qLqd.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C0069AC8 (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0069E70 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7E0C (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
  const void **v7; // r14
  __int64 result; // rax
  FxRequest *v13; // rax
  FxRequestBase *v14; // rax
  FxRequestBase *v15; // rbx
  int _a4; // edi
  FxRequest **Driver; // rdx
  __int64 m_ObjectSize; // rax
  char *v19; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v22; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v24; // r8
  unsigned __int16 _a1; // [rsp+28h] [rbp-60h]
  FxPoolTypeOrPoolFlags v26; // [rsp+50h] [rbp-38h] BYREF

  v7 = (const void **)Request;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0);
  if ( (int)result < 0 )
    return result;
  *(_QWORD *)&v26.UsePoolType = 0LL;
  v26.u.PoolFlags = 64LL;
  v13 = (FxRequest *)FxObjectHandleAllocCommon(
                       FxDriverGlobals,
                       &v26,
                       0x168uLL,
                       0,
                       RequestAttributes,
                       0,
                       FxObjectTypeExternal);
  if ( v13 )
  {
    FxRequest::FxRequest(v13, FxDriverGlobals, Irp, Ownership, Caller, _a1);
    v15 = v14;
    if ( v14 )
    {
      if ( !Target || (_a4 = FxRequestBase::ValidateTarget(v14, Target), _a4 >= 0) )
      {
        Driver = 0LL;
        Request = 0LL;
        if ( v15->m_ObjectSize )
        {
          if ( !RequestAttributes )
            goto LABEL_40;
          if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
          {
            FxObject::MarkPassiveCallbacks(v15, ObjectLock);
            Driver = Request;
          }
          if ( RequestAttributes->ParentObject )
          {
            FxObjectHandleGetPtr(
              v15->m_Globals,
              (unsigned __int64)RequestAttributes->ParentObject,
              0x1000u,
              (void **)&Request);
            Driver = Request;
          }
          else
          {
LABEL_40:
            if ( !v15->m_ParentObject )
            {
              m_Globals = v15->m_Globals;
              if ( (FxRequestBase *)m_Globals->Driver != v15 )
                Driver = (FxRequest **)m_Globals->Driver;
              Request = Driver;
            }
          }
          if ( !Driver || (_a4 = FxObject::AssignParentObject(v15, (FxObject *)Driver), _a4 >= 0) )
          {
            if ( RequestAttributes )
            {
              m_ObjectSize = v15->m_ObjectSize;
              if ( (_WORD)m_ObjectSize )
                v19 = (char *)v15 + m_ObjectSize;
              else
                v19 = 0LL;
              EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
              if ( EvtDestroyCallback )
                *((_QWORD *)v19 + 3) = EvtDestroyCallback;
              EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                *((_QWORD *)v19 + 2) = EvtCleanupCallback;
                v15->m_ObjectFlags |= 0x400u;
              }
            }
            v22 = v15->m_Globals;
            v15->m_ObjectFlags |= 8u;
            if ( v22->FxVerifierOn )
              FxObject::Vf_VerifyLeakDetectionConsiderObject(v15, (_FX_DRIVER_GLOBALS *)Driver);
            *v7 = v15;
            _a4 = 0;
            goto LABEL_24;
          }
        }
        else
        {
          _a4 = -1073741816;
        }
      }
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
      if ( Irp )
        FxRequestBase::SetSubmitIrp(v15, 0LL, v24);
      FxObject::ClearEvtCallbacks(v15);
      ((void (*)(void))v15->DeleteObject)();
      goto LABEL_24;
    }
  }
  _a4 = -1073741670;
LABEL_24:
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, Ownership, *v7, _a4);
  return (unsigned int)_a4;
}
