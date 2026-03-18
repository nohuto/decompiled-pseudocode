/*
 * XREFs of HUBMISC_GetDeviceInterfacePath @ 0x1C0030334
 * Callers:
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000E2E0 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0072970 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007585C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0077CC0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_GetDeviceInterfacePath(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v11; // [rsp+28h] [rbp-50h]
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-18h]

  *a3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v12) = 56;
  v14 = 0x100000001LL;
  *(_QWORD *)&v15 = a2;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, _QWORD *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         &v12,
         a3);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 632))(
           WdfDriverGlobals,
           a2,
           a1,
           a4,
           *a3);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = v9;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x62u, (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids, v11);
  }
  if ( v9 < 0 && *a3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *a3 = 0LL;
  }
  return (unsigned int)v9;
}
