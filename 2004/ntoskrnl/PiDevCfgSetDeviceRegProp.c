/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14072FE90
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14071DFA8 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071E318 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14072E988 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407ABC40 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A3840 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A77EC (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14072FEDC (PiPnpRtlSetDeviceRegProperty.c)
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
