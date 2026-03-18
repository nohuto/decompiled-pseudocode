/*
 * XREFs of ?GetCurrentOrientation@@YGJPAK@Z @ 0xAC782
 * Callers:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ @ 0xAC666 (-CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z @ 0x140A16 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140BE0 (-RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YGKW4DISPLAYCONFIG_ROTATION@@@Z @ 0xAC812 (-ConvertDisplayConfigRotationToDMDO@@YGKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall GetCurrentOrientation(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-D4h] BYREF
  int v4; // [esp+8h] [ebp-D0h] BYREF
  _BYTE v5[16]; // [esp+Ch] [ebp-CCh] BYREF
  _BYTE v6[8]; // [esp+1Ch] [ebp-BCh] BYREF
  int v7; // [esp+24h] [ebp-B4h]
  int v8; // [esp+74h] [ebp-64h]

  v4 = 0;
  v3 = 1;
  result = DrvQueryDisplayConfig(-1073741822, &v3, v5, 0);
  if ( result >= 0 )
  {
    result = DrvIsSourceInHardwareClone(v6, v7, &v4);
    if ( result >= 0 )
    {
      if ( v4 )
      {
        return -1071774975;
      }
      else
      {
        *this = ConvertDisplayConfigRotationToDMDO(v8);
        return 0;
      }
    }
  }
  return result;
}
