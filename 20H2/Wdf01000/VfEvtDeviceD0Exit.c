/*
 * XREFs of VfEvtDeviceD0Exit @ 0x1C00C07A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002DD68 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C00433AC (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C00436B0 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C004371C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0043748 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C00437A8 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C0514 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0Exit(WDFDEVICE__ *Device, unsigned int TargetState)
{
  unsigned int v3; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v6)(WDFDEVICE__ *, _QWORD); // rbp
  FxObject *ObjectFromHandle; // rax
  unsigned __int8 CurrentIrql; // bl
  wchar_t critRegion; // [rsp+30h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 4);
  if ( v6 )
  {
    activityId = 0LL;
    if ( PerfEvtDeviceD0ExitStart(Device, &activityId) )
    {
      v3 = v6(Device, TargetState);
      if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      {
        critRegion = 0;
        ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Device, &critRegion);
        McTemplateK0pp_EtwWriteTransfer(
          (_MCGEN_TRACE_CONTEXT *)ObjectFromHandle->m_Globals,
          &FX_POWER_D0_EXIT_STOP,
          &activityId,
          ObjectFromHandle->m_Globals->Driver->m_DriverDeviceAdd.Method,
          Device);
      }
    }
    else
    {
      LOBYTE(critRegion) = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry((unsigned __int8 *)&critRegion);
      v3 = v6(Device, TargetState);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v6);
    }
  }
  return v3;
}
