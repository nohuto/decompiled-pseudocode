/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C00B5CF8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00B5AF0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00B5BE0 (DrvQueryDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D05B0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C014A5A0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 DrvIsWddmDriverPresent()
{
  wchar_t *i; // rcx

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
      return 1LL;
  }
  return 0LL;
}
