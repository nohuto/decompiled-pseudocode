/*
 * XREFs of ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C00618A8
 * Callers:
 *     VfEvtIoStop @ 0x1C00C6AD0 (VfEvtIoStop.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0061A00 (McTemplateK0pp_EtwWriteTransfer.c)
 */

char __fastcall PerfEvtIoStopStart(unsigned __int64 Queue, _GUID *pActivityId)
{
  char v2; // bl
  unsigned __int16 *v3; // r8
  __int64 v5; // rdi
  const void *Context; // rbp
  const void *v7; // rdi
  _MCGEN_TRACE_CONTEXT *v8; // rcx
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  pQueue = 0LL;
  v2 = 1;
  v3 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v3 = (unsigned __int16 *)((char *)v3 - *v3);
  v5 = *((_QWORD *)v3 + 2);
  if ( (*(_DWORD *)(v5 + 412) & 0xF00000) == 0 )
    return 0;
  FxObjectHandleGetPtr(*((_FX_DRIVER_GLOBALS **)v3 + 2), Queue, 0x1003u, (void **)&pQueue);
  Context = (const void *)FxObject::GetObjectHandleUnchecked(pQueue->m_DeviceBase);
  v7 = *(const void **)(*(_QWORD *)(v5 + 80) + 176LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pp_EtwWriteTransfer(v8, &FX_EVTIOSTOP_START, pActivityId, v7, Context);
  return v2;
}
