/*
 * XREFs of ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000C484
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180003190 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B8D0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x18000C2B8 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800474D0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18000C5C8 (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x18000C640 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000C698 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     sqrtf_0 @ 0x1800563EA (sqrtf_0.c)
 */

float __fastcall CDesktopManager::GetScalingFactorForCVI(CDesktopManager *this, const struct tagRECT *a2)
{
  float v3; // xmm6_4
  int v5; // eax
  int v6; // ecx
  int v7; // r9d
  int v8; // eax
  int v9; // r8d
  HMONITOR v10; // rbx
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+34h] [rbp-34h]
  enum DEVICE_SCALE_FACTOR v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = FLOAT_1_0;
  if ( !CDesktopManager::_IsMultiMon(this) )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 117) - *((_DWORD *)this + 115) >= 0 )
      v5 = *((_DWORD *)this + 117) - *((_DWORD *)this + 115);
    v6 = 0;
    if ( *((_DWORD *)this + 118) - *((_DWORD *)this + 116) >= 0 )
      v6 = *((_DWORD *)this + 118) - *((_DWORD *)this + 116);
    v7 = 0;
    v8 = v6 * v5 / 2;
    if ( a2->bottom - a2->top >= 0 )
      v7 = a2->bottom - a2->top;
    v9 = 0;
    if ( a2->right - a2->left >= 0 )
      v9 = a2->right - a2->left;
    if ( v9 * v7 > v8 )
    {
      v10 = MonitorFromRect((LPCRECT)((char *)this + 460), 2u);
      if ( (int)GetScalingInfoForMonitor(v10, (struct SCALINGINFO *)v12) >= 0
        && sqrtf_0((float)(v14 * v14) + (float)(v13 * v13)) < 292.1
        && (int)GetScaleFactorForMonitorImp(v10, &v15) >= 0 )
      {
        if ( v15 >= SCALE_180_PERCENT )
        {
          return FLOAT_0_5;
        }
        else if ( v15 >= SCALE_140_PERCENT )
        {
          return FLOAT_0_75;
        }
      }
    }
  }
  return v3;
}
