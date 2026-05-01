/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x180080208
 * Callers:
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1800801BC (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ @ 0x1801CC22C (-CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801CC3F8 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1801CC6AC (-EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801CF5C0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801D122C (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 *     ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1801E3BB0 (-CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?Dispose@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1801E3DD0 (-Dispose@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1801E8218 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801E8470 (-Dispose@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1801EDFF0 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1803760AC (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
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
