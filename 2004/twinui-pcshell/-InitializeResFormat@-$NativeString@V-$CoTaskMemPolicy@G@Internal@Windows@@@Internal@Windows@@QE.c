/*
 * XREFs of ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031B26C
 * Callers:
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18031AC40 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803798A0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1803932CC (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18041FB00 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18042E310 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1804417A0 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 * Callees:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x1800332AC (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800632C0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18026F21C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
        wchar_t **a1,
        HINSTANCE a2,
        __int64 a3,
        ...)
{
  const wchar_t *v4; // rdi
  int v5; // ebx
  int v6; // eax
  unsigned __int16 v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-30h] BYREF
  LPVOID v10[5]; // [rsp+40h] [rbp-28h] BYREF
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a3);
  v4 = 0LL;
  memset(v10, 0, 24);
  v5 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(a2, a3, a3, (const unsigned __int16 **)&v9, &v8) )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           v10,
           (__int64)v9,
           v8);
    v4 = (const wchar_t *)v10[0];
    v5 = v6;
  }
  if ( v5 >= 0 )
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
           a1,
           v4,
           va);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  return (unsigned int)v5;
}
