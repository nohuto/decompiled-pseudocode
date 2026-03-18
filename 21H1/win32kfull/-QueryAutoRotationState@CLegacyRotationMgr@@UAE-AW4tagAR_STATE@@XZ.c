/*
 * XREFs of ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ @ 0x140B88 (-RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140BE0 (-RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ @ 0xAC666 (-CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ.c)
 */

int __thiscall CLegacyRotationMgr::QueryAutoRotationState(CLegacyRotationMgr *this)
{
  int result; // eax

  if ( dword_2738E4 )
    CLegacyRotationMgr::CacheRotationInfo(this);
  result = _gProtocolType != 0 ? 4 : 0;
  if ( !dword_2738D0 )
    result |= 1u;
  if ( dword_2738EC || dword_2738E8 )
    result |= 8u;
  if ( !dword_2738D4 )
    result |= 0x10u;
  if ( dword_2738D8 )
    result |= 0x40u;
  if ( dword_2738DC )
    result |= 0x80u;
  if ( dword_2738E4 )
    return result | 0x20;
  return result;
}
