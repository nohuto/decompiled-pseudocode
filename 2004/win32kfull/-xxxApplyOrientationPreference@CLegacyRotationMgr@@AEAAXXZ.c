/*
 * XREFs of ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0058DC4
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0055FF0 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0058CA0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C0056340 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0058E00 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D17C0 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D1C98 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D2078 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0226058 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxApplyOrientationPreference(CLegacyRotationMgr *this)
{
  unsigned int ActivePpiPreference; // edi
  CLegacyRotationMgr *v3; // rcx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (unsigned int)CLegacyRotationMgr::QueryAutoRotationState() <= 1 )
  {
    ActivePpiPreference = CRotationMgr::GetActivePpiPreference(0LL);
    if ( (int)GetCurrentOrientation(&v4) >= 0 )
    {
      if ( (unsigned int)CLegacyRotationMgr::RotationRequired(this, ActivePpiPreference, &v4) )
      {
        TraceLoggingScreenOrientationChangeEvent(v4, 1LL, 1LL, 1000LL);
        CLegacyRotationMgr::xxxRotateScreen(v3, v4, 0, 0LL);
      }
    }
  }
}
