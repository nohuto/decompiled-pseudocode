/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14073F294
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14072BE44 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14072C1B4 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073F008 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407B9B80 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A9370 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AD31C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14073F2E0 (PiPnpRtlSetDeviceRegProperty.c)
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
