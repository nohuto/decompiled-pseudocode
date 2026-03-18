/*
 * XREFs of ?IsNativeOrientationPortrait@@YGHXZ @ 0xE781A
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ @ 0xE7672 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __stdcall IsNativeOrientationPortrait()
{
  int v1; // [esp+4h] [ebp-124h] BYREF
  _DWORD v2[20]; // [esp+8h] [ebp-120h] BYREF
  _BYTE v3[16]; // [esp+58h] [ebp-D0h] BYREF
  int v4; // [esp+68h] [ebp-C0h]
  int v5; // [esp+6Ch] [ebp-BCh]
  int v6; // [esp+74h] [ebp-B4h]

  v1 = 1;
  if ( (int)DrvQueryDisplayConfig(1073741825, &v1, v3, 0) < 0 )
    return 0;
  memset(v2, 0, sizeof(v2));
  v2[2] = v4;
  v2[3] = v5;
  v2[4] = v6;
  v2[0] = 3;
  v2[1] = 80;
  return (int)DrvDisplayConfigGetDeviceInfo(v2) >= 0 && v2[5] < v2[6];
}
