/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x1C000DC20
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000C8B0 (ACPICMButtonStartWorker.c)
 *     ACPIFanStartDevice @ 0x1C0091000 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00BB130 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C000DC64 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 336;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
