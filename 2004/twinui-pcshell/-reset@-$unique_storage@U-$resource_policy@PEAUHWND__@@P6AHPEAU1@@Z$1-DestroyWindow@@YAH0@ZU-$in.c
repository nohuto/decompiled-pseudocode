/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800809A8
 * Callers:
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18008095C (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ @ 0x1801EFD5C (-CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801EFF28 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1801F01DC (-EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F30F0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801F4D4C (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 *     ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x180206E30 (-CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?Dispose@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180207050 (-Dispose@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x18020B4B8 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18020B710 (-Dispose@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1802110F0 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1803972FC (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
        HWND *a1,
        HWND a2)
{
  HWND v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DestroyWindow(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
