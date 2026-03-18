/*
 * XREFs of HUBPDO_EvtDeviceSelfManagedIoInit @ 0x1C0014B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceSelfManagedIoInit(__int64 a1)
{
  _InterlockedOr(
    (volatile signed __int32 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                + 1616))(
                                  WdfDriverGlobals,
                                  a1,
                                  off_1C00670F8)
                              + 32),
    1u);
  return 0LL;
}
