/*
 * XREFs of imp_WdfRequestGetParameters @ 0x1C0001750
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7858 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  __int64 Offset; // rcx
  FxRequest *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int _a1; // eax
  int IsCurrentStackValid; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !Parameters )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  _a1 = Parameters->Size;
  if ( _a1 != 40 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x10u, 0x39u, WPP_FxRequestApi_cpp_Traceguids, _a1, 40);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  if ( !m_Globals->FxVerifierIO )
    goto LABEL_9;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(v5, &PreviousIrql);
  if ( m_Globals->FxVerifierOn )
  {
    IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(v5, m_Globals);
    if ( IsCurrentStackValid < 0 )
      goto LABEL_19;
    if ( m_Globals->FxVerifierOn )
    {
      IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsNotCompleted(v5, m_Globals);
LABEL_19:
      FxNonPagedObject::Unlock(v5, PreviousIrql);
      if ( IsCurrentStackValid < 0 )
        return;
      goto LABEL_9;
    }
  }
  FxNonPagedObject::Unlock(v5, PreviousIrql);
LABEL_9:
  Parameters->Size = 40;
  Parameters->Type = v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  Parameters->MinorFunction = v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  memmove(&Parameters->Parameters, &v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters, 0x20uLL);
  if ( m_Globals->FxVerifierIO )
  {
    CurrentStackLocation = v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14
      && (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
    {
      Parameters->Parameters.DeviceIoControl.Type3InputBuffer = 0LL;
    }
  }
}
