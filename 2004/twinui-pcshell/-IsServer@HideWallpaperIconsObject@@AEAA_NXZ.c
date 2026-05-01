/*
 * XREFs of ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1804780C8
 * Callers:
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x1804781D0 (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050BC0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

char __fastcall HideWallpaperIconsObject::IsServer(HideWallpaperIconsObject *this)
{
  char v1; // bl
  unsigned int v3[4]; // [rsp+20h] [rbp-148h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-138h] BYREF
  char v5; // [rsp+14Ah] [rbp-1Eh]

  VersionInformation.dwOSVersionInfoSize = 284;
  if ( !GetVersionExW(&VersionInformation) )
    return 0;
  v1 = 1;
  if ( (unsigned __int8)(v5 - 2) > 1u
    || SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Server",
         L"ClientExperienceEnabled",
         v3) >= 0
    && v3[0] )
  {
    return 0;
  }
  return v1;
}
