/*
 * XREFs of ?IsSolidColorBackground@HideWallpaperIconsObject@@AEAA_NXZ @ 0x180454130
 * Callers:
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x1804541A0 (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 */

bool __fastcall HideWallpaperIconsObject::IsSolidColorBackground(HideWallpaperIconsObject *this)
{
  _WORD pvParam[264]; // [rsp+20h] [rbp-228h] BYREF

  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  return pvParam[0] == 0;
}
