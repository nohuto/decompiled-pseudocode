/*
 * XREFs of ?CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ @ 0xAC666
 * Callers:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA (-QueryAutoRotationState@CLegacyRotationMgr@@UAE-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z @ 0xAC6E8 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z.c)
 *     ?GetCurrentOrientation@@YGJPAK@Z @ 0xAC782 (-GetCurrentOrientation@@YGJPAK@Z.c)
 */

void __thiscall CLegacyRotationMgr::CacheRotationInfo(CLegacyRotationMgr *this)
{
  int CurrentOrientation; // eax
  CLegacyRotationMgr *v2; // ecx
  unsigned int *v3; // [esp+0h] [ebp-8h]

  dword_2738E4 = 0;
  dword_2738EC = 0;
  dword_2738E8 = 0;
  *(_DWORD *)Data = 0;
  CurrentOrientation = GetCurrentOrientation(v3);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_2738E8 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_2738EC = 1;
    }
    else
    {
      dword_2738E4 = 1;
    }
  }
  else
  {
    *(_DWORD *)Data = 0;
  }
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v2,
    Data[0],
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
