/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x1406E5528
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14074761C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14094C2D0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x14094EA0C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14094ED84 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14094F4CC (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406E5574 (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return PiPnpRtlSetDeviceRegProperty(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
