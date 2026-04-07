/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180035B38
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014C94 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049978 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E6C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x1800340F0 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x180035EA0 (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180035EFC (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180035FC0 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18003607C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180047B78 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180048FCC (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x1800490C8 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800500B0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18005063C (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180051190 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800527C0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180052AF4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x1800530D8 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int16 a2)
{
  int Theme; // r14d
  char v5; // r15
  __int16 v6; // di
  int v7; // eax
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  HMONITOR v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  CDesktopManager *v17; // rdx
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+3Ch] [rbp-CCh] BYREF
  int pvParam; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[12]; // [rsp+6Ch] [rbp-9Ch] BYREF
  _QWORD v24[3]; // [rsp+78h] [rbp-90h]
  __int128 v25; // [rsp+90h] [rbp-78h]
  __int128 v26; // [rsp+A0h] [rbp-68h]
  __int128 v27; // [rsp+B0h] [rbp-58h]
  __int128 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int v30; // [rsp+D8h] [rbp-30h]

  Theme = 0;
  v5 = 0;
  v6 = a2 & 0xF7FF;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl) )
    v6 = a2;
  if ( (v6 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  if ( (v6 & 0x20) != 0 )
  {
    v7 = CDesktopManager::ModeChange(this);
    Theme = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xCC5u);
      return (unsigned int)Theme;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    memset_0(v23, 0, 0x1F4uLL);
    pvParam = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0);
    v8 = v30;
    v9 = v25;
    *((_OWORD *)this + 22) = *(_OWORD *)&v24[1];
    v10 = v26;
    *((_OWORD *)this + 23) = v9;
    v11 = v27;
    *((_OWORD *)this + 24) = v10;
    v12 = v28;
    *((_OWORD *)this + 25) = v11;
    *(_QWORD *)&v11 = v29;
    *((_OWORD *)this + 26) = v12;
    *((_QWORD *)this + 54) = v11;
    *((_DWORD *)this + 110) = v8;
    *((_DWORD *)this + 111) = GetSystemMetrics(76);
    *((_DWORD *)this + 112) = GetSystemMetrics(77);
    *((_DWORD *)this + 113) = GetSystemMetrics(78);
    *((_DWORD *)this + 114) = GetSystemMetrics(79);
    v13 = MonitorFromWindow(0LL, 1u);
    mi.rcMonitor.left = 40;
    if ( GetMonitorInfoW(v13, (LPMONITORINFO)&mi.rcMonitor) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 460), (const RECT *)&mi.rcMonitor.top) )
        CDesktopManager::ReleaseCVICache();
      *(_OWORD *)((char *)this + 460) = *(_OWORD *)&mi.rcMonitor.top;
    }
    else
    {
      v17 = CDesktopManager::s_pDesktopManagerInstance;
      v18 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
      *((_DWORD *)this + 115) = v18;
      *((_DWORD *)this + 117) = *((_DWORD *)v17 + 113) + v18;
      v19 = *((_DWORD *)v17 + 112);
      *((_DWORD *)this + 116) = v19;
      *((_DWORD *)this + 118) = *((_DWORD *)v17 + 114) + v19;
    }
    v14 = CTopLevelWindow::EnsureWindowFrames();
    Theme = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x21Cu);
    }
    else
    {
      CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
      dword_1800E2EA0 = GetSystemMetrics(6);
      dword_1800E2E9C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
      dword_1800E2EA4 = dword_1800E2EA0;
    }
    if ( Theme < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Theme, 0xCE8u);
      return (unsigned int)Theme;
    }
    v15 = *((_QWORD *)this + 32);
    if ( v15 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 88LL))(v15, 0LL);
  }
  if ( (v6 & 0x800) == 0 )
  {
LABEL_18:
    if ( (v6 & 4) == 0 )
      goto LABEL_19;
    goto LABEL_36;
  }
  if ( (v6 & 4) == 0 )
  {
    CDesktopManager::InitializeHighContrast(this);
    goto LABEL_18;
  }
LABEL_36:
  CDesktopManager::UnloadTheme(this);
  Theme = CDesktopManager::LoadTheme(this);
  if ( Theme < 0 )
    return (unsigned int)Theme;
  v5 = 1;
LABEL_19:
  if ( (v6 & 0x400) != 0 || v5 )
    CDesktopManager::SetupColorization(this);
  if ( (v6 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (v6 & 2) != 0 )
    CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 61));
  if ( (v6 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows(this);
  if ( (v6 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues(this);
  if ( (v6 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 24));
  if ( (v6 & 0x200) != 0 )
  {
    v20 = 8;
    if ( SystemParametersInfoW(0x48u, 8u, &v20, 0) )
      CDesktopManager::SetWindowAnimation(mi.cbSize != 0);
  }
  return (unsigned int)Theme;
}
