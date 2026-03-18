/*
 * XREFs of imp_WdfRequestGetFileObject @ 0x1C0004AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7908 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 v2; // rdi
  __int64 Offset; // rcx
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _FX_DRIVER_GLOBALS *v6; // rbp
  FxDevice *m_Device; // r14
  _FILE_OBJECT *FileObject; // r8
  int _a1; // ebp
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp+18h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
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
    {
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
      FxNonPagedObject::Unlock(pRequest, irql);
      if ( IsDriverOwned < 0 )
        return 0LL;
    }
    else
    {
      FxNonPagedObject::Unlock(pRequest, irql);
    }
    v4 = pRequest;
  }
  v6 = v4->m_Globals;
  m_Device = v4->m_Device;
  ppFxFileObject = 0LL;
  if ( v6->FxVerifierIO )
  {
    irql = 0;
    FxNonPagedObject::Lock(v4, &irql);
    if ( v6->FxVerifierOn )
    {
      _a1 = FxRequest::Vf_VerifyRequestIsNotCompleted(v4, v6);
      FxNonPagedObject::Unlock(v4, irql);
      if ( _a1 < 0 )
        goto LABEL_31;
    }
    else
    {
      FxNonPagedObject::Unlock(v4, irql);
    }
  }
  FileObject = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject && v4->m_IrpAllocation == 2 )
    return 0LL;
  if ( FxFileObject::_GetFileObjectFromWdm(m_Device, m_Device->m_FileObjectClass, FileObject, &ppFxFileObject) < 0 )
  {
LABEL_19:
    _a1 = -1073741808;
LABEL_31:
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
