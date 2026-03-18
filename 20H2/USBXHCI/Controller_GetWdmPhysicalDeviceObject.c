/*
 * XREFs of Controller_GetWdmPhysicalDeviceObject @ 0x1C0032968
 * Callers:
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C001A020 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_GetWdmPhysicalDeviceObject(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
}
