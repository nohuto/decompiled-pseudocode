/*
 * XREFs of ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002A268
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002A298 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x18002A40C (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058E00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18016FD00 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A3390 (-GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A3410 (-GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A3480 (-GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A3500 (-GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1801CF3A0 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180227930 (-GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802279B0 (-GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18031A350 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18033FF30 (-UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180340060 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180378FE0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x180419BE0 (-RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x18041F11C (-RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18046E294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x180470094 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     s_DrawThemeTextPPIAware @ 0x18047AF90 (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x18047BFFC (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(
        _QWORD *a1)
{
  __int64 result; // rax

  result = -1LL;
  if ( a1[1] == -1LL )
  {
    if ( *a1 )
    {
      do
        ++result;
      while ( *(_WORD *)(*a1 + 2 * result) );
    }
    else
    {
      result = 0LL;
    }
    a1[1] = result;
  }
  return result;
}
