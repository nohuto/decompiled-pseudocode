/*
 * XREFs of ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800DD3A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@II_N@Z @ 0x1800DC42C (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800DCAE4 (-SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAA_NXZ @ 0x1800DD090 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801AB194 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc(
        HWND *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v8; // rbx
  UINT v9; // edx
  UINT v10; // edx
  const struct _tlgProvider_t *v11; // rcx
  int v12; // ecx
  int v13; // r9d
  LPARAM v14; // r9
  WPARAM v15; // r8
  HWND v16; // rcx
  unsigned int v17; // eax
  int v19; // ebx
  const char *v20; // r9
  __int64 v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+30h] [rbp-18h] BYREF
  const winrt::hresult_error *v23; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v25; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v22 = 0LL;
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3);
    return v8;
  }
  v9 = 16;
  switch ( a3 )
  {
    case 0x10u:
      if ( this[3] )
      {
        if ( lParam != 1 )
          SetForegroundWindow(this[4]);
        try
        {
          v17 = (*(__int64 (__fastcall **)(HWND, HWND))(*(_QWORD *)this[2] + 88LL))(this[2], this[3]);
          winrt::check_hresult(v17);
        }
        catch ( winrt::hresult_invalid_argument )
        {
          return v22;
        }
        catch ( const winrt::hresult_error *v23 )
        {
          v19 = *((_DWORD *)v23 + 3);
          if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v19) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x30C,
              (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              v20);
            __debugbreak();
          }
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x310,
              (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v19);
          return v22;
        }
      }
      return v8;
    case 0x112u:
      if ( !this[3] || a4 != 61536 )
      {
        v10 = 274;
        return DefWindowProcW(a2, v10, a4, lParam);
      }
      v14 = 1LL;
      v15 = 0LL;
      v16 = this[1];
LABEL_20:
      PostMessageW(v16, v9, v15, v14);
      return v8;
    case 0x313u:
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3);
      v14 = lParam;
      v15 = a4;
      v9 = 787;
      v16 = this[4];
      goto LABEL_20;
    case 0x323u:
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(
          (__int64)(this - 3),
          &v25,
          WORD1(lParam),
          (unsigned __int16)lParam,
          0);
      break;
    case 0x326u:
      v11 = WindowManagementLogging::Provider();
      if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
      {
        v22 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v12,
          (unsigned int)&unk_180526AF9,
          0,
          v13,
          (__int64)&v22);
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_LivePreviewForTabs>::GetImpl'::`2'::impl)
        && this[3] )
      {
        LOBYTE(v21) = 1;
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(
          (__int64)(this - 3),
          &v25,
          0,
          0,
          v21);
      }
      break;
    default:
      v10 = a3;
      return DefWindowProcW(a2, v10, a4, lParam);
  }
  return v8;
}
