/*
 * XREFs of VfEvtDevicePrepareHardware @ 0x1C00C59B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0061768 (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0061A00 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C0061A6C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0061AA0 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0061B08 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C5534 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDevicePrepareHardware(
        unsigned __int64 Device,
        WDFCMRESLIST__ *ResourcesRaw,
        WDFCMRESLIST__ *ResourcesTranslated)
{
  unsigned int v6; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v8)(unsigned __int64, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rbp
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-58h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-50h] BYREF

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v8 = (__int64 (__fastcall *)(unsigned __int64, WDFCMRESLIST__ *, WDFCMRESLIST__ *))*((_QWORD *)TypedContext + 6);
  if ( v8 )
  {
    activityId = 0LL;
    if ( PerfEvtDevicePrepareHardwareStart(Device, &activityId) )
    {
      v6 = v8(Device, ResourcesRaw, ResourcesTranslated);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      {
        v9 = (_MCGEN_TRACE_CONTEXT *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (Device & 1) != 0 )
          v9 = (_MCGEN_TRACE_CONTEXT *)((char *)v9 - LOWORD(v9->RegistrationHandle));
        McTemplateK0pp_EtwWriteTransfer(
          v9,
          &FX_POWER_HW_PREPARE_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(v9->MatchAnyKeyword + 80) + 176LL),
          (const void *)Device);
      }
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v6 = v8(Device, ResourcesRaw, ResourcesTranslated);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v8);
    }
  }
  return v6;
}
