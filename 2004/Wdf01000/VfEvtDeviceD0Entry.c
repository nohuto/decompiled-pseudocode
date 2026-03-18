/*
 * XREFs of VfEvtDeviceD0Entry @ 0x1C00C45E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E638 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0043BE4 (-PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0043F80 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C0043FEC (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0044018 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0044078 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4514 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0Entry(WDFDEVICE__ *Device, unsigned int PreviousState)
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
  v6 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 2);
  if ( v6 )
  {
    activityId = 0LL;
    if ( PerfEvtDeviceD0EntryStart(Device, &activityId) )
    {
      v3 = v6(Device, PreviousState);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
      {
        critRegion = 0;
        ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Device, &critRegion);
        McTemplateK0pp_EtwWriteTransfer(
          (_MCGEN_TRACE_CONTEXT *)ObjectFromHandle->m_Globals,
          &FX_POWER_D0_ENTRY_STOP,
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
      v3 = v6(Device, PreviousState);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v6);
    }
  }
  return v3;
}
