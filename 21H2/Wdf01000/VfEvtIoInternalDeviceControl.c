/*
 * XREFs of VfEvtIoInternalDeviceControl @ 0x1C00C66B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C00615A8 (McTemplateK0upp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C0061A6C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0061AA0 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0061B08 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C5534 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoInternalDeviceControl(
        WDFQUEUE__ *Queue,
        unsigned __int64 Request,
        unsigned __int64 OutputBufferLength,
        unsigned __int64 InputBufferLength,
        unsigned int IoControlCode)
{
  __int64 v9; // rbx
  char *TypedContext; // r14
  void (__fastcall *v11)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // rsi
  unsigned __int16 *v12; // rcx
  _FX_DRIVER_GLOBALS *v13; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r14
  const void *Context; // rax
  __int64 v16; // rdx
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-38h] BYREF
  void *PPObject; // [rsp+38h] [rbp-30h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v11 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int))*((_QWORD *)TypedContext + 7);
  if ( v11 )
  {
    PPObject = 0LL;
    v12 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (Request & 1) != 0 )
      v12 = (unsigned __int16 *)((char *)v12 - *v12);
    v13 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v12 + 2);
    if ( (v13->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v13->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v13, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      {
        if ( !*((_BYTE *)PPObject + 214) )
          v9 = *((_QWORD *)PPObject + 31);
        Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v9 + 96));
        McTemplateK0upp_EtwWriteTransfer(
          *(_MCGEN_TRACE_CONTEXT **)(v16 + 152),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v16 + 152) + 184LL),
          _Arg2,
          Context);
      }
      v11(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v11(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v11);
    }
  }
}
