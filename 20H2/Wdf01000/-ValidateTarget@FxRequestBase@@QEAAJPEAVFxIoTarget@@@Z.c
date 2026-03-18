/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestChangeTarget @ 0x1C0049780 (imp_WdfRequestChangeTarget.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C00642B8 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0067200 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006B6EC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006C39C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006C6F0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006E140 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C006FB1C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007056C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0071954 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0072110 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0072370 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00725A0 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00727D0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001970C (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, FxIoTarget *Target)
{
  _IRP *m_Irp; // rdi
  FxRequestBase *v3; // rbx
  FxRequestContext *m_RequestContext; // rcx
  CCHAR m_TargetStackSize; // cl
  PIRP Irp; // rcx
  _IRP *v8; // rax
  _IRP *v9; // rdi
  unsigned int _a3; // esi
  const void *_a1; // rax
  unsigned __int64 v13; // rax
  __int64 _a2; // rdx
  unsigned __int16 v15; // r9
  const void *v16; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v18; // r10

  m_Irp = this->m_Irp.m_Irp;
  v3 = this;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext && m_Irp )
  {
    m_RequestContext->ReleaseAndRestore(m_RequestContext, v3);
    FxRequestBase::VerifierClearFormatted(v3);
  }
  m_TargetStackSize = Target->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    _a3 = -1073741436;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Target);
    WPP_IFR_SF_qL(v3->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, 0xC0000184);
    return _a3;
  }
  if ( !m_Irp )
    goto LABEL_4;
  if ( m_Irp->CurrentLocation > m_TargetStackSize )
    return 0;
  if ( v3->m_IrpAllocation == 1 )
  {
LABEL_4:
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( Irp )
    {
      v8 = v3->m_Irp.m_Irp;
      v9 = 0LL;
      v3->m_Irp.m_Irp = Irp;
      v3->m_Completed = 0;
      if ( v8 && v8 != Irp && v3->m_IrpAllocation == 1 )
        v9 = v8;
      _a3 = 0;
      v3->m_IrpAllocation = 1;
      if ( v9 )
      {
        if ( v3->m_Globals->FxVerboseOn )
        {
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v3);
          if ( ObjectHandleUnchecked )
            v3 = (FxRequestBase *)ObjectHandleUnchecked;
          WPP_IFR_SF_qq(v18, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v9, v3);
        }
        IoFreeIrp(v9);
      }
      return _a3;
    }
    _a3 = -1073741670;
    FxObject::GetObjectHandleUnchecked(Target);
    v13 = FxObject::GetObjectHandleUnchecked(v3);
    v15 = 12;
  }
  else
  {
    _a3 = -1073741616;
    FxObject::GetObjectHandleUnchecked(Target);
    v13 = FxObject::GetObjectHandleUnchecked(v3);
    v15 = 13;
  }
  v16 = v3;
  if ( v13 )
    v16 = (const void *)v13;
  WPP_IFR_SF_qid(v3->m_Globals, 2u, 0xEu, v15, WPP_FxRequestBase_cpp_Traceguids, v16, _a2, _a3);
  return _a3;
}
