/*
 * XREFs of ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ @ 0xB20A4 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ @ 0xE7672 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ.c)
 * Callees:
 *     ?GetCurrentOrientation@@YGJPAK@Z @ 0xAC782 (-GetCurrentOrientation@@YGJPAK@Z.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA (-QueryAutoRotationState@CLegacyRotationMgr@@UAE-AW4tagAR_STATE@@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SG?AW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140802 (-GetActivePpiPreference@CRotationMgr@@SG-AW4ORIENTATION_PREFERENCE@@PAK@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140BE0 (-RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x186F6A (-TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

void __thiscall CLegacyRotationMgr::xxxApplyOrientationPreference(CLegacyRotationMgr *this)
{
  int ActivePpiPreference; // edi
  CLegacyRotationMgr *v3; // ecx
  unsigned int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  if ( (unsigned int)CLegacyRotationMgr::QueryAutoRotationState() < 2 )
  {
    ActivePpiPreference = CRotationMgr::GetActivePpiPreference(0);
    if ( GetCurrentOrientation(&v4) >= 0 )
    {
      if ( CLegacyRotationMgr::RotationRequired(this, ActivePpiPreference, &v4) )
      {
        TraceLoggingScreenOrientationChangeEvent(v4, 1, 1, 1000);
        CLegacyRotationMgr::xxxRotateScreen(v3, v4, 0, 0);
      }
    }
  }
}
