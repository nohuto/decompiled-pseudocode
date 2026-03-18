/*
 * XREFs of imp_VfWdfRequestComplete @ 0x1C00C3750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C00615A8 (McTemplateK0upp_EtwWriteTransfer.c)
 */

void __fastcall imp_VfWdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, int Status)
{
  __int64 v4; // rbx
  unsigned __int16 *v5; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rsi
  const void *Context; // rax
  __int64 v11; // r9
  _MCGEN_TRACE_CONTEXT *v12; // rcx
  void *PPObject; // [rsp+30h] [rbp-48h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0LL;
  PPObject = 0LL;
  v5 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  ActivityId = 0LL;
  if ( ((unsigned __int8)Request & 1) != 0 )
    v5 = (unsigned __int16 *)((char *)v5 - *v5);
  v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v5 + 2);
  if ( (v8->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v8->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v8, (unsigned __int64)Request, 0x1008u, &PPObject);
    if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
    }
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      if ( !*((_BYTE *)PPObject + 214) )
        v4 = *((_QWORD *)PPObject + 31);
      Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v4 + 96));
      McTemplateK0upp_EtwWriteTransfer(
        v12,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(*(_QWORD *)(v11 + 152) + 184LL),
        _Arg2,
        Context);
    }
  }
  WdfVersion.Functions.pfnWdfRequestComplete(DriverGlobals, Request, Status);
}
