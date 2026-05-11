/*
 * XREFs of ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC
 * Callers:
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C1D8 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C704 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB14 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E514 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E918 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA54 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EE2C (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EF40 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F078 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F450 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F564 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F6A0 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F7B4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FB50 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FD0C (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010000 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010308 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001051C (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00106CC (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00109E8 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010C98 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010F80 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C000A3C0 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z.c)
 */

_BOOL8 __fastcall CSidebandDevice::IsValidEndpointIndex(CSidebandDevice *this, unsigned int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  return (int)CSidebandDevice::GetNumberOfEndpointsInDevice(this, &v4) >= 0 && a2 < v4;
}
