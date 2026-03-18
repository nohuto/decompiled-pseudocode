/*
 * XREFs of ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C005C4F8
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001A120 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIRegisterForDeviceNotifications2 @ 0x1C005C4E0 (ACPIRegisterForDeviceNotifications2.c)
 * Callees:
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C000DC64 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByDeviceExtension(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 && (v3 = a1 + 336) != 0 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v3, a2, a3);
  else
    return 3221225486LL;
}
