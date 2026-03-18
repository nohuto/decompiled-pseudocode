/*
 * XREFs of ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C001CB04
 * Callers:
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C001C77C (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C002E0B0 (imp_WdfDeviceSetSpecialFileSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::_UsageToSpecialType(_DEVICE_USAGE_NOTIFICATION_TYPE Type)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = Type - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return 6LL;
    return 1LL;
  }
  return 5LL;
}
