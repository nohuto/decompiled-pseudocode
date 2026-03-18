/*
 * XREFs of ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C0056340
 * Callers:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0055F50 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0058DC4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01D1A54 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D1C98 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00563EC (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GetCurrentOrientation(unsigned int *a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD v4[3]; // [rsp+24h] [rbp-F4h] BYREF
  _BYTE v5[16]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v6[8]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v7; // [rsp+48h] [rbp-D0h]
  unsigned int v8; // [rsp+98h] [rbp-80h]

  result = DrvQueryDisplayConfig(3221225474LL, v4, v5, 0LL, 0);
  if ( (int)result >= 0 )
  {
    result = DrvIsSourceInHardwareClone(v6, v7, &v3);
    if ( (int)result >= 0 )
    {
      if ( v3 )
      {
        return 3223192321LL;
      }
      else
      {
        *a1 = ConvertDisplayConfigRotationToDMDO(v8);
        return 0LL;
      }
    }
  }
  return result;
}
