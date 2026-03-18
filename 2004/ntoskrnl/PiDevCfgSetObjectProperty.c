/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x1407257BC
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140755C48 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408A4D6C (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A77EC (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140725C5C (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
