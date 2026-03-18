/*
 * XREFs of ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0061974
 * Callers:
 *     VfEvtIoStop @ 0x1C00C6AD0 (VfEvtIoStop.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0061A00 (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall PerfEvtIoStopStop(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v3; // r8
  _FX_DRIVER_GLOBALS *v4; // rbx
  const void *Context; // rax
  _MCGEN_TRACE_CONTEXT *v6; // rcx
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  pQueue = 0LL;
  v3 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v3 = (unsigned __int16 *)((char *)v3 - *v3);
  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v3 + 2);
  FxObjectHandleGetPtr(v4, Queue, 0x1003u, (void **)&pQueue);
  Context = (const void *)FxObject::GetObjectHandleUnchecked(pQueue->m_DeviceBase);
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pp_EtwWriteTransfer(v6, &FX_EVTIOSTOP_STOP, pActivityId, v4->Driver->m_DriverDeviceAdd.Method, Context);
}
