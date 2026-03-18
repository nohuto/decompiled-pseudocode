/*
 * XREFs of ?GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z @ 0x14086D
 * Callers:
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AAEJPAK0@Z @ 0x140AC7 (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AAEJPAK0@Z.c)
 */

unsigned int __thiscall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 1) )
  {
    dword_2738F8 = 0;
    dword_2738FC = dword_2738E0 != 0 ? 3 : 0;
    if ( CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_2738F8, &dword_2738FC) >= 0 )
    {
      if ( dword_2738FC > 3 )
        dword_2738FC = dword_2738E0 != 0 ? 3 : 0;
      *((_DWORD *)this + 1) = 1;
    }
  }
  return dword_2738FC;
}
