/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x140739E10
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x140730028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073A478 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A6AA0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739E5C (PiPnpRtlSetDeviceRegProperty.c)
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
