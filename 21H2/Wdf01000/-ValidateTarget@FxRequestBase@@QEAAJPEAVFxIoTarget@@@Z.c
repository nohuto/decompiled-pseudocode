/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C
 * Callers:
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C001AF84 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0039266 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfRequestChangeTarget @ 0x1C0064410 (imp_WdfRequestChangeTarget.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0075364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00797EC (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0079B6C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007CC50 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EA1C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007F23C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007F4C4 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007F720 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001ACFC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
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
  const void *_a2; // rdx
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
  WPP_IFR_SF_qqd(v3->m_Globals, 2u, 0xEu, v15, WPP_FxRequestBase_cpp_Traceguids, v16, _a2, _a3);
  return _a3;
}
