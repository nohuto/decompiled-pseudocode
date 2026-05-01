/*
 * XREFs of ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800D406C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___::Invoke @ 0x1800D0110 (CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008E202 (WINRT_WindowsGetStringRawBuffer.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Tabs@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800CBEE0 (-Tabs@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Inte.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800CD828 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800D55E4 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800D85F8 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800DB2DC (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?TreatAsSecondaryTileId@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800DB4C0 (-TreatAsSecondaryTileId@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800DB508 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801E7CAC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1801E7F70 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  unsigned int v2; // ebx
  int v3; // edi
  _QWORD *v4; // r15
  HSTRING *v5; // rax
  PCWSTR StringRawBuffer; // rax
  const char *v7; // r9
  HWND v8; // rcx
  __int64 v9; // rdx
  const struct winrt::hstring *v11; // rax
  unsigned int v12; // eax
  HRESULT v13; // eax
  unsigned int v14; // r12d
  HRESULT v15; // r14d
  __int64 v16; // rdx
  LONG WindowLongW; // eax
  HSTRING *v18; // rax
  char v19; // di
  HSTRING v20; // r14
  const char *v21; // r9
  int v22; // [rsp+70h] [rbp-58h] BYREF
  HSTRING v23; // [rsp+78h] [rbp-50h] BYREF
  HSTRING v24[9]; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  HSTRING v26; // [rsp+D0h] [rbp+8h] BYREF
  int v27; // [rsp+D8h] [rbp+10h]
  int pvAttribute; // [rsp+E0h] [rbp+18h] BYREF
  int v29; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v27 = 0;
  v4 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    v5 = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::Tabs(
                      (__int64 *)this + 6,
                      &v26);
    v3 = 1;
    v27 = 1;
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v5, 0LL);
  }
  else
  {
    StringRawBuffer = &szAgent;
  }
  *((_QWORD *)this + 4) = CreateWindowInBandEx(
                            0x200000LL,
                            off_1805C4828,
                            StringRawBuffer,
                            114229248LL,
                            0,
                            0,
                            1,
                            1,
                            0LL,
                            0LL,
                            &_ImageBase,
                            this,
                            3,
                            1);
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    v27 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
  }
  v8 = (HWND)*((_QWORD *)this + 4);
  if ( !v8 )
  {
    v9 = 225LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v7);
  }
  if ( *v4 )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v26);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
    {
      v11 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                             v4,
                                             &v26);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(this, v11);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
    }
    v26 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HSTRING *))(*(_QWORD *)*v4 + 144LL))(
            *v4,
            *((_QWORD *)this + 17),
            &v26);
    winrt::check_hresult(v12);
    *((_QWORD *)this + 18) = v26;
    v8 = (HWND)*((_QWORD *)this + 4);
  }
  if ( !SetPropW(v8, (LPCWSTR)0xA920, *((HANDLE *)this + 7)) )
  {
    v9 = 238LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v7);
  }
  if ( !SetPropW(*((HWND *)this + 4), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow", HANDLE_FLAG_INHERIT) )
  {
    v9 = 240LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v7);
  }
  pvAttribute = 1;
  v13 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xDu, &pvAttribute, 4u);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  v29 = 1;
  v22 = 1;
  v15 = DwmSetWindowAttribute(*((HWND *)this + 4), 7u, &v29, 4u);
  if ( v15 < 0 )
  {
    v16 = 252LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  v15 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xAu, &v22, 4u);
  if ( v15 < 0 )
  {
    v16 = 257LL;
    goto LABEL_21;
  }
  WindowLongW = GetWindowLongW(*((HWND *)this + 4), -16);
  SetWindowLongW(*((HWND *)this + 4), -16, WindowLongW | 0x10000000);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
  {
    try
    {
      v26 = 0LL;
      if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v4, &v26) )
      {
        v18 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)&v23, &szAgent);
        v19 = v3 | 4;
      }
      else
      {
        v18 = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                           v4,
                           v24);
        v19 = v3 | 2;
      }
      v20 = *v18;
      *v18 = 0LL;
      v26 = v20;
      if ( (v19 & 4) != 0 )
      {
        v19 &= ~4u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
      }
      if ( (v19 & 2) != 0 )
        winrt::handle_type<winrt::impl::hstring_traits>::close(v24);
      if ( v20 )
      {
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
          this,
          (const struct winrt::hstring *)&v26);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(this);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x111,
                             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                             v21);
    }
  }
  return v2;
}
