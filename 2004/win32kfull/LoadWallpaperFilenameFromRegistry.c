/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C0123F08
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxSetDeskWallpaper @ 0x1C0123BAC (xxxSetDeskWallpaper.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C0223AC8 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int16 v7[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+50h] [rbp-98h]
  __int64 v9; // [rsp+60h] [rbp-88h]
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  v9 = 0LL;
  *(_OWORD *)v7 = 0LL;
  v8 = 0LL;
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, v3, 8) )
    RtlStringCchCopyW(a2, v3, (char *)v7);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp((const wchar_t *)a2, Str2) )
    GetDefaultWallpaperName((unsigned __int16 *)a2, v3);
  return 1LL;
}
