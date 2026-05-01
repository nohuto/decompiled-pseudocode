/*
 * XREFs of ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800D4DB0
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800D11D8 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x1800D1AB4 (-HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid.c)
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800D1E8C (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1800DB4A0 (-ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        char a2)
{
  HWND v3; // rcx

  if ( a2 != (*((_BYTE *)this + 168) == 0) )
  {
    v3 = (HWND)*((_QWORD *)this + 4);
    if ( a2 )
    {
      SetPropW(v3, (LPCWSTR)0xA921, HANDLE_FLAG_INHERIT);
      *((_BYTE *)this + 168) = 0;
    }
    else
    {
      RemovePropW(v3, (LPCWSTR)0xA921);
      *((_BYTE *)this + 168) = 1;
    }
  }
}
