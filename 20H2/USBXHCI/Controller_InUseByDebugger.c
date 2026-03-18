/*
 * XREFs of Controller_InUseByDebugger @ 0x1C0015798
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_LPEEnterExitCallback @ 0x1C00333F0 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
