/*
 * XREFs of HUBPDO_EvtDeviceReportedMissing @ 0x1C007C150
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddDsmEvent @ 0x1C000A280 (HUBSM_AddDsmEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup @ 0x1C001ADFC (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall HUBPDO_EvtDeviceReportedMissing(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  HUBSM_AddDsmEvent(*(_QWORD *)(v1 + 24), 4083LL);
  return EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(*(_QWORD *)(v1 + 24), v2);
}
