/*
 * XREFs of imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00C3A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C00615A8 (McTemplateK0upp_EtwWriteTransfer.c)
 */

void __fastcall imp_VfWdfRequestCompleteWithPriorityBoost(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        int Status,
        __int64 PriorityBoost)
{
  __int64 v5; // rbx
  unsigned __int16 *v6; // rcx
  char v7; // r15
  _FX_DRIVER_GLOBALS *v10; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rsi
  const void *Context; // rax
  __int64 v13; // r10
  _MCGEN_TRACE_CONTEXT *v14; // rcx
  void *PPObject; // [rsp+30h] [rbp-58h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-50h] BYREF

  v5 = 0LL;
  PPObject = 0LL;
  v6 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  v7 = PriorityBoost;
  ActivityId = 0LL;
  if ( ((unsigned __int8)Request & 1) != 0 )
    v6 = (unsigned __int16 *)((char *)v6 - *v6);
  v10 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v6 + 2);
  if ( (v10->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v10->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v10, (unsigned __int64)Request, 0x1008u, &PPObject);
    if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
    }
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      if ( !*((_BYTE *)PPObject + 214) )
        v5 = *((_QWORD *)PPObject + 31);
      Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v5 + 96));
      McTemplateK0upp_EtwWriteTransfer(
        v14,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(*(_QWORD *)(v13 + 152) + 184LL),
        _Arg2,
        Context);
    }
  }
  LOBYTE(PriorityBoost) = v7;
  WdfVersion.Functions.pfnWdfRequestCompleteWithPriorityBoost(DriverGlobals, Request, Status, PriorityBoost);
}
