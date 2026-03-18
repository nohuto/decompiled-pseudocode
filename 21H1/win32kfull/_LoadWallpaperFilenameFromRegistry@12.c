/*
 * XREFs of _LoadWallpaperFilenameFromRegistry@12 @ 0xE6574
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxSetDeskWallpaper@8 @ 0xE631C (_xxxSetDeskWallpaper@8.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetDefaultWallpaperName@@YGXPAGI@Z @ 0x1850CC (-GetDefaultWallpaperName@@YGXPAGI@Z.c)
 */

int __fastcall LoadWallpaperFilenameFromRegistry(int a1, char *a2, int a3)
{
  unsigned __int16 *v6; // [esp+0h] [ebp-88h]
  const unsigned __int16 *v7; // [esp+4h] [ebp-84h]
  wchar_t Str2[40]; // [esp+Ch] [ebp-7Ch] BYREF
  unsigned __int16 v9[20]; // [esp+5Ch] [ebp-2Ch] BYREF

  memset(v9, 0, sizeof(v9));
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82, v9, 20, 0);
  if ( !FastGetProfileStringFromIDW(a1, 4, 67, v9, a2, a3, 8) )
    RtlStringCchCopyW(a3, a2, v9, (unsigned int)v6, v7);
  RtlLoadStringOrError(71, Str2, 40, 0);
  if ( !__wcsicmp((const wchar_t *)a2, Str2) )
    GetDefaultWallpaperName(v6, (unsigned int)v7);
  return 1;
}
