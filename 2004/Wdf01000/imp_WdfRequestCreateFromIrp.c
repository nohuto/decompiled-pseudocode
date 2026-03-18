/*
 * XREFs of imp_WdfRequestCreateFromIrp @ 0x1C004A140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestCreateFromIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        unsigned __int8 RequestFreesIrp,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  void *ParentObject; // rdx
  WDFREQUEST__ **v10; // rbx
  int v11; // edx
  void *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v14; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  pRequest = 0LL;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( RequestAttributes )
  {
    ParentObject = RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      v14 = 0LL;
      FxObjectHandleGetPtr(DriverName, (unsigned __int64)ParentObject, 0x1000u, (void **)&v14);
      DriverName = (_FX_DRIVER_GLOBALS *)v14[2];
    }
  }
  if ( !Irp )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v10 = Request;
  if ( !Request )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Request = 0LL;
  v11 = FxRequest::_Create(
          DriverName,
          RequestAttributes,
          Irp,
          0LL,
          (FxRequestIrpOwnership)(2 - (RequestFreesIrp != 0)),
          FxRequestConstructorCallerIsDriver,
          &pRequest);
  if ( v11 >= 0 )
    *v10 = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(pRequest);
  return (unsigned int)v11;
}
