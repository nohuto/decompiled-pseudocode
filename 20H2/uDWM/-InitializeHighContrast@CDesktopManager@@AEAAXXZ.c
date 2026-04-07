/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x1800490C8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180035B38 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180047B78 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E6C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18008646C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this)
{
  DWORD SysColor; // ebx
  char IsImmersiveColorUsingHighContrast; // al

  SysColor = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl) )
    IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  else
    IsImmersiveColorUsingHighContrast = CDesktopManager::IsHighContrastMode();
  *((_BYTE *)this + 26) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 142) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 142) = 0;
  }
  *((_DWORD *)this + 143) = SysColor;
}
