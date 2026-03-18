/*
 * XREFs of ?SetGlobalWallpaperSettings@@YGHPBUtagWALLPAPERSETTINGS@@@Z @ 0xE6526
 * Callers:
 *     _xxxSetDeskWallpaper@8 @ 0xE631C (_xxxSetDeskWallpaper@8.c)
 * Callees:
 *     _ReleaseWallpaperSettings@4 @ 0xD4C28 (_ReleaseWallpaperSettings@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall SetGlobalWallpaperSettings(const void *this)
{
  int v1; // esi
  void *v3; // edi

  v1 = 0;
  if ( !_g_pWallpaperSettings )
  {
LABEL_6:
    v3 = (void *)Win32AllocPool(516, 1347908437);
    _g_pWallpaperSettings = v3;
    if ( !_g_pWallpaperSettings )
      return v1;
    goto LABEL_4;
  }
  if ( *_g_pWallpaperSettings != 1 )
  {
    ReleaseWallpaperSettings(_g_pWallpaperSettings);
    _g_pWallpaperSettings = 0;
    goto LABEL_6;
  }
  v3 = (void *)_g_pWallpaperSettings;
LABEL_4:
  qmemcpy(v3, this, 0x204u);
  return 1;
}
