/*
 * XREFs of imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00C21E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C00615A8 (McTemplateK0upp_EtwWriteTransfer.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *FoundRequest,
        WDFREQUEST__ **OutRequest)
{
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int16 *v9; // rcx
  _FX_DRIVER_GLOBALS *v10; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  const void *Context; // rax
  __int64 v13; // rdx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0LL;
  v6 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveFoundRequest)(
         DriverGlobals,
         Queue,
         FoundRequest);
  if ( !v6 )
  {
    v7 = (unsigned __int64)*OutRequest;
    v8 = (unsigned __int64)*OutRequest;
    PPObject = 0LL;
    v9 = (unsigned __int16 *)(~v8 & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (v7 & 1) != 0 )
      v9 = (unsigned __int16 *)((char *)v9 - *v9);
    v10 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v9 + 2);
    if ( (v10->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v10->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v10, v7, 0x1008u, &PPObject);
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
          *(_MCGEN_TRACE_CONTEXT **)(v13 + 152),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v13 + 152) + 184LL),
          _Arg2,
          Context);
      }
    }
  }
  return v6;
}
