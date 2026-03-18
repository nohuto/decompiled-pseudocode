/*
 * XREFs of ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0043E44
 * Callers:
 *     VfEvtIoStop @ 0x1C00C59F0 (VfEvtIoStop.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E638 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0043F80 (McTemplateK0pp_EtwWriteTransfer.c)
 */

char __fastcall PerfEvtIoStopStart(WDFQUEUE__ *Queue, _GUID *pActivityId)
{
  char v2; // bl
  FxObject *ObjectFromHandle; // rax
  unsigned __int64 v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *Context; // rbp
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rsi
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  unsigned __int16 offset; // [rsp+60h] [rbp+18h] BYREF
  FxIoQueue *pQueue; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  offset = 0;
  pQueue = 0LL;
  ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Queue, &offset);
  m_Globals = ObjectFromHandle->m_Globals;
  if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    v2 = 1;
    FxObjectHandleGetPtr(ObjectFromHandle->m_Globals, v5, 0x1003u, (void **)&pQueue);
    Context = (const void *)FxObject::GetObjectHandleUnchecked(pQueue->m_DeviceBase);
    Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
    EtwActivityIdControl(3u, pActivityId);
    if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v9, &FX_EVTIOSTOP_START, pActivityId, Method, Context);
  }
  return v2;
}
