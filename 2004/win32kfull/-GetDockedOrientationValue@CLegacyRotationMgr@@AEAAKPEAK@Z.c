/*
 * XREFs of ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01D1848
 * Callers:
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D1E08 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D1F00 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C01D1B20 (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 2) )
  {
    dword_1C0336640 = 0;
    dword_1C0336644 = dword_1C0336628 != 0 ? 3 : 0;
    if ( (int)CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_1C0336640, &dword_1C0336644) >= 0 )
    {
      if ( dword_1C0336644 > 3 )
        dword_1C0336644 = dword_1C0336628 != 0 ? 3 : 0;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return dword_1C0336644;
}
