/*
 * XREFs of ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C0019E84 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00726D4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0073280 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0075D60 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C00768B0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0076A80 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0077230 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0078E40 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C007A6DC (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C007AF70 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C007CBB8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007CC50 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007CF98 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EA1C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007F720 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0080068 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1C00917E0 (--_GFxSyncRequest@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00070E0 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000AC50 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxSyncRequest::~FxSyncRequest(FxSyncRequest *this)
{
  int v2; // eax
  unsigned int v3; // edx
  FxSyncRequest *m_TrueRequest; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v6; // rcx

  this->__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  v2 = FxObject::Release(this, 0LL, 129, "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp");
  m_TrueRequest = (FxSyncRequest *)this->m_TrueRequest;
  if ( m_TrueRequest != this )
  {
    if ( !this->m_ClearContextOnDestroy )
      goto LABEL_4;
    m_TrueRequest->m_RequestContext = 0LL;
    this->m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
  }
  if ( this->m_ClearContextOnDestroy )
    this->m_RequestContext = 0LL;
LABEL_4:
  if ( v2 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0xAu,
        (const _GUID *)&WPP_FxSyncRequest_cpp_Traceguids,
        this,
        &this->m_DestroyedEvent);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_DestroyedEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v6 = this->m_Globals;
    if ( v6->FxVerboseOn )
      WPP_IFR_SF_qq(v6, 5u, 0xDu, 0xBu, (const _GUID *)&WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
  }
  FxRequestBase::~FxRequestBase(this, v3);
}
