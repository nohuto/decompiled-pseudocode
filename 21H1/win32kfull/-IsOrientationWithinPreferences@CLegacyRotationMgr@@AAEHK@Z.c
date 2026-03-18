/*
 * XREFs of ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z @ 0x140A16
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     ?GetCurrentOrientation@@YGJPAK@Z @ 0xAC782 (-GetCurrentOrientation@@YGJPAK@Z.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SG?AW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140802 (-GetActivePpiPreference@CRotationMgr@@SG-AW4ORIENTATION_PREFERENCE@@PAK@Z.c)
 */

int __thiscall CLegacyRotationMgr::IsOrientationWithinPreferences(CLegacyRotationMgr *this, unsigned int a2)
{
  int ActivePpiPreference; // eax
  int v3; // edx
  int result; // eax
  int v5; // eax
  CLegacyRotationMgr *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = this;
  ActivePpiPreference = CRotationMgr::GetActivePpiPreference(0);
  v3 = ActivePpiPreference;
  switch ( ActivePpiPreference )
  {
    case 0:
      return 1;
    case 0x80000000:
      return 0;
    case 0x40000000:
      v6 = 0;
      if ( GetCurrentOrientation(&v6) >= 0 )
        return ((unsigned __int8)a2 ^ (unsigned __int8)~(_BYTE)v6) & 1;
      return 0;
  }
  result = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v5 = 2 * (dword_2738E0 != 0) + 2;
        break;
      case 2u:
        v5 = 4 * (dword_2738E0 != 0) + 4;
        break;
      case 3u:
        v5 = dword_2738E0 != 0 ? 1 : 8;
        break;
      default:
        return result;
    }
  }
  else
  {
    v5 = (dword_2738E0 != 0) + 1;
  }
  return v3 & v5;
}
