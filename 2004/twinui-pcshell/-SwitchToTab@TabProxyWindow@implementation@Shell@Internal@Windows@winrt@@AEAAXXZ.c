/*
 * XREFs of ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800DB274
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800DBAA0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(HWND *this)
{
  unsigned int v2; // eax

  SetForegroundWindow(this[7]);
  if ( this[6] )
  {
    v2 = (*(__int64 (__fastcall **)(HWND))(*(_QWORD *)this[5] + 80LL))(this[5]);
    winrt::check_hresult(v2);
  }
}
