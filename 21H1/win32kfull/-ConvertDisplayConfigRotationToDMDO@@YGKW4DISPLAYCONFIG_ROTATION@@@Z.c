/*
 * XREFs of ?ConvertDisplayConfigRotationToDMDO@@YGKW4DISPLAYCONFIG_ROTATION@@@Z @ 0xAC812
 * Callers:
 *     ?GetCurrentOrientation@@YGJPAK@Z @ 0xAC782 (-GetCurrentOrientation@@YGJPAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x141425 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DI.c)
 * Callees:
 *     <none>
 */

int __thiscall ConvertDisplayConfigRotationToDMDO(char *this)
{
  char *v1; // ecx
  char *v3; // ecx
  char *v4; // ecx

  v1 = this - 1;
  if ( !v1 )
    return 0;
  v3 = v1 - 1;
  if ( !v3 )
    return 1;
  v4 = v3 - 1;
  if ( !v4 )
    return 2;
  if ( v4 != (char *)1 )
    return 0;
  return 3;
}
