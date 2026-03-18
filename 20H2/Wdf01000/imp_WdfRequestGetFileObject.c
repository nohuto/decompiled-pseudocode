/*
 * XREFs of imp_WdfRequestGetFileObject @ 0x1C00093E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0009830 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2814 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 v2; // rdi
  __int64 Offset; // rcx
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _FX_DRIVER_GLOBALS *v6; // rsi
  FxDevice *m_Device; // r14
  _FILE_OBJECT *FileObject; // r8
  int _a1; // esi
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp+18h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, Request, 9u) || m_Globals->FxVerifyDownlevel) )
  {
    irql = 0;
    FxNonPagedObject::Lock(v4, &irql);
    if ( m_Globals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
    else
      IsDriverOwned = 0;
    FxNonPagedObject::Unlock(pRequest, irql);
    if ( IsDriverOwned < 0 )
      return 0LL;
    v4 = pRequest;
  }
  v6 = v4->m_Globals;
  m_Device = v4->m_Device;
  ppFxFileObject = 0LL;
  if ( v6->FxVerifierIO )
  {
    irql = 0;
    FxNonPagedObject::Lock(v4, &irql);
    _a1 = v6->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(v4, v6) : 0;
    FxNonPagedObject::Unlock(v4, irql);
    if ( _a1 < 0 )
      goto LABEL_33;
  }
  FileObject = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject && v4->m_IrpAllocation == 2 )
    return 0LL;
  if ( FxFileObject::_GetFileObjectFromWdm(m_Device, m_Device->m_FileObjectClass, FileObject, &ppFxFileObject) < 0 )
  {
LABEL_19:
    _a1 = -1073741808;
LABEL_33:
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x3Fu, WPP_FxRequestApi_cpp_Traceguids, _a1);
    return 0LL;
  }
  if ( !ppFxFileObject )
  {
    if ( m_Device->m_FileObjectClass < WdfFileObjectInvalid )
      return 0LL;
    goto LABEL_19;
  }
  if ( ppFxFileObject->m_ObjectSize )
    return (WDFFILEOBJECT__ *)((unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL);
  return (WDFFILEOBJECT__ *)v2;
}
