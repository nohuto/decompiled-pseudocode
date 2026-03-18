/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x140736764
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14071C028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071C398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073525C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A2520 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A64CC (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x1407367B0 (PiPnpRtlSetDeviceRegProperty.c)
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
