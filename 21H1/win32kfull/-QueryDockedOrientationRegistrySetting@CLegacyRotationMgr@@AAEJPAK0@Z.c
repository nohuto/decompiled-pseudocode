/*
 * XREFs of ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AAEJPAK0@Z @ 0x140AC7
 * Callers:
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z @ 0x14086D (-GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsInternalVideoOutput@@YG_NW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14094C (-IsInternalVideoOutput@@YG_NW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

int __thiscall CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(
        CLegacyRotationMgr *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int result; // eax
  char v4; // cl
  int v5; // [esp+8h] [ebp-D8h] BYREF
  unsigned int v6; // [esp+Ch] [ebp-D4h] BYREF
  int v7; // [esp+10h] [ebp-D0h] BYREF
  _BYTE v8[16]; // [esp+14h] [ebp-CCh] BYREF
  _BYTE v9[12]; // [esp+24h] [ebp-BCh] BYREF
  int v10; // [esp+30h] [ebp-B0h]
  void *v11; // [esp+64h] [ebp-7Ch]

  v5 = 1;
  result = DrvQueryDisplayConfig(-1073741806, &v5, v8, 0);
  if ( result >= 0 )
  {
    if ( IsInternalVideoOutput(v11) )
    {
      v6 = 0;
      v7 = 0;
      result = DrvGetMonitorOrientation(v9, v10, &v6, &v7);
      if ( result >= 0 )
      {
        v4 = v7 - v6;
        *a2 = v6;
        result = 0;
        *a3 = v4 & 3;
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
