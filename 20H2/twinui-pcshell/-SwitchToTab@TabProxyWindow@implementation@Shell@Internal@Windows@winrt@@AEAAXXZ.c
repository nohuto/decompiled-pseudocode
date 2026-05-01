/*
 * XREFs of ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800DCAE4
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800DD3A0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(HWND *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  const char *v4; // r9
  const winrt::hresult_error *v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  SetForegroundWindow(this[7]);
  if ( this[6] )
  {
    v2 = (*(unsigned int (__fastcall **)(HWND, HWND))(*(_QWORD *)this[5] + 80LL))(this[5], this[6]);
    try
    {
      winrt::check_hresult(v2);
    }
    catch ( winrt::hresult_invalid_argument )
    {
      return;
    }
    catch ( const winrt::hresult_error *v5 )
    {
      v3 = *((_DWORD *)v5 + 3);
      if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v3) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2E0,
          (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          v4);
        __debugbreak();
      }
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2E4,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v3);
    }
  }
}
