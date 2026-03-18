/*
 * XREFs of ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C007CBB8
 * Callers:
 *     imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x1C0076E60 (imp_WdfUsbTargetDeviceCyclePortSynchronously.c)
 * Callees:
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0005E18 (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0005E74 (--0FxIoContext@@QEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00747EC (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C007C08C (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007CE98 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::CyclePort(FxUsbDevice *this)
{
  __int64 v2; // rdx
  int v3; // edi
  unsigned __int8 v4; // r8
  FxIoContext context; // [rsp+20h] [rbp-1E8h] BYREF
  FxSyncRequest request; // [rsp+D0h] [rbp-138h] BYREF

  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, &context, 0LL);
  v3 = FxUsbDevice::FormatCycleRequest(this, request.m_TrueRequest);
  if ( v3 >= 0 )
  {
    FxUsbDevice::CancelSentIo(this, v2, v4);
    v3 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(this, request.m_TrueRequest, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v3;
}
