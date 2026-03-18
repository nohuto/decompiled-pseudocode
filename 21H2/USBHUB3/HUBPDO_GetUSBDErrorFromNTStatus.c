/*
 * XREFs of HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00144D4
 * Callers:
 *     HUBPDO_SyncCompletionRoutine @ 0x1C00164D0 (HUBPDO_SyncCompletionRoutine.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00234D0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C0023D84 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002C0D0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002CD4C (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_GetUSBDErrorFromNTStatus(int a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  switch ( a1 )
  {
    case -1073741667:
    case -1073741810:
      return 3221254144LL;
    case -1073741670:
      return 3221229568LL;
    case -1073741637:
      return 3221229056LL;
    case -1073741536:
      return 3221291008LL;
  }
  result = 0LL;
  if ( a1 )
  {
    result = 2147484416LL;
    if ( a1 != -1073741811 && a1 != -1073741823 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C00671E8);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        2u,
        2u,
        0xAu,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
        a1);
      return 2147484416LL;
    }
  }
  return result;
}
