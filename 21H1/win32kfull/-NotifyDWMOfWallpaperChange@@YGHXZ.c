/*
 * XREFs of ?NotifyDWMOfWallpaperChange@@YGHXZ @ 0xE64A0
 * Callers:
 *     _xxxSetDeskWallpaper@8 @ 0xE631C (_xxxSetDeskWallpaper@8.c)
 * Callees:
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     _DwmAsyncNotifyWallpaperChange@4 @ 0xE64C6 (_DwmAsyncNotifyWallpaperChange@4.c)
 */

int __stdcall NotifyDWMOfWallpaperChange()
{
  int v0; // edx
  void *v1; // eax

  if ( IsThreadDesktopComposed(_gptiCurrent) )
  {
    v1 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyWallpaperChange(v1);
    return 1;
  }
  return v0;
}
