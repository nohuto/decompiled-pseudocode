/*
 * XREFs of ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0015414
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00152F0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C011DEA0 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0015450 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C011E1F0 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D09B0 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D0E88 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D1268 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C02251C8 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
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
