/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C000DF58
 * Callers:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000DD50 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C000DE40 (DrvQueryDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01480D0 (DrvDisplayConfigSetDeviceInfo.c)
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
