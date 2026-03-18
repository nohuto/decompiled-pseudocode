/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x14073424C
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140764888 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408AA89C (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AD31C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x1407346EC (PiPnpRtlSetObjectProperty.c)
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
